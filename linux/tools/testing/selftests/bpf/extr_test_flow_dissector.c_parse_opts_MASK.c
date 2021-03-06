
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ AF_INET ;
 scalar_t__ AF_INET6 ;
 scalar_t__ AF_UNSPEC ;
 scalar_t__ IPPROTO_GRE ;
 scalar_t__ IPPROTO_IP ;
 scalar_t__ IPPROTO_IPIP ;
 scalar_t__ IPPROTO_IPV6 ;
 scalar_t__ IPPROTO_UDP ;
 scalar_t__ PF_INET ;
 scalar_t__ PF_INET6 ;
 int cfg_dsfield_inner ;
 int cfg_dsfield_outer ;
 scalar_t__ cfg_encap_proto ;
 int cfg_expect_failure ;
 scalar_t__ cfg_l3_extra ;
 scalar_t__ cfg_l3_inner ;
 scalar_t__ cfg_l3_outer ;
 void* cfg_num_pkt ;
 void* cfg_num_secs ;
 int cfg_only_rx ;
 int cfg_only_tx ;
 void* cfg_payload_len ;
 void* cfg_src_port ;
 int error (int,int ,char*) ;
 int getopt (int,char**,char*) ;
 int in_daddr4 ;
 int in_daddr6 ;
 int in_saddr4 ;
 int in_saddr6 ;
 int optarg ;
 int out_daddr4 ;
 int out_daddr6 ;
 int out_saddr4 ;
 int out_saddr6 ;
 int parse_addr4 (int *,int ) ;
 int parse_addr6 (int *,int ) ;
 scalar_t__ parse_protocol_family (char*,int ) ;
 int strcmp (int ,char*) ;
 void* strtol (int ,int *,int ) ;
 int usage (char*) ;

__attribute__((used)) static void parse_opts(int argc, char **argv)
{
 int c;

 while ((c = getopt(argc, argv, "d:D:e:f:Fhi:l:n:o:O:Rs:S:t:Tx:X:")) != -1) {
  switch (c) {
  case 'd':
   if (cfg_l3_outer == AF_UNSPEC)
    error(1, 0, "-d must be preceded by -o");
   if (cfg_l3_outer == AF_INET)
    parse_addr4(&out_daddr4, optarg);
   else
    parse_addr6(&out_daddr6, optarg);
   break;
  case 'D':
   if (cfg_l3_inner == AF_UNSPEC)
    error(1, 0, "-D must be preceded by -i");
   if (cfg_l3_inner == AF_INET)
    parse_addr4(&in_daddr4, optarg);
   else
    parse_addr6(&in_daddr6, optarg);
   break;
  case 'e':
   if (!strcmp(optarg, "gre"))
    cfg_encap_proto = IPPROTO_GRE;
   else if (!strcmp(optarg, "gue"))
    cfg_encap_proto = IPPROTO_UDP;
   else if (!strcmp(optarg, "bare"))
    cfg_encap_proto = IPPROTO_IPIP;
   else if (!strcmp(optarg, "none"))
    cfg_encap_proto = IPPROTO_IP;
   else
    usage(argv[0]);
   break;
  case 'f':
   cfg_src_port = strtol(optarg, ((void*)0), 0);
   break;
  case 'F':
   cfg_expect_failure = 1;
   break;
  case 'h':
   usage(argv[0]);
   break;
  case 'i':
   if (!strcmp(optarg, "4"))
    cfg_l3_inner = PF_INET;
   else if (!strcmp(optarg, "6"))
    cfg_l3_inner = PF_INET6;
   else
    usage(argv[0]);
   break;
  case 'l':
   cfg_payload_len = strtol(optarg, ((void*)0), 0);
   break;
  case 'n':
   cfg_num_pkt = strtol(optarg, ((void*)0), 0);
   break;
  case 'o':
   cfg_l3_outer = parse_protocol_family(argv[0], optarg);
   break;
  case 'O':
   cfg_l3_extra = parse_protocol_family(argv[0], optarg);
   break;
  case 'R':
   cfg_only_rx = 1;
   break;
  case 's':
   if (cfg_l3_outer == AF_INET)
    parse_addr4(&out_saddr4, optarg);
   else
    parse_addr6(&out_saddr6, optarg);
   break;
  case 'S':
   if (cfg_l3_inner == AF_INET)
    parse_addr4(&in_saddr4, optarg);
   else
    parse_addr6(&in_saddr6, optarg);
   break;
  case 't':
   cfg_num_secs = strtol(optarg, ((void*)0), 0);
   break;
  case 'T':
   cfg_only_tx = 1;
   break;
  case 'x':
   cfg_dsfield_outer = strtol(optarg, ((void*)0), 0);
   break;
  case 'X':
   cfg_dsfield_inner = strtol(optarg, ((void*)0), 0);
   break;
  }
 }

 if (cfg_only_rx && cfg_only_tx)
  error(1, 0, "options: cannot combine rx-only and tx-only");

 if (cfg_encap_proto && cfg_l3_outer == AF_UNSPEC)
  error(1, 0, "options: must specify outer with encap");
 else if ((!cfg_encap_proto) && cfg_l3_outer != AF_UNSPEC)
  error(1, 0, "options: cannot combine no-encap and outer");
 else if ((!cfg_encap_proto) && cfg_l3_extra != AF_UNSPEC)
  error(1, 0, "options: cannot combine no-encap and extra");

 if (cfg_l3_inner == AF_UNSPEC)
  cfg_l3_inner = AF_INET6;
 if (cfg_l3_inner == AF_INET6 && cfg_encap_proto == IPPROTO_IPIP)
  cfg_encap_proto = IPPROTO_IPV6;





 if (((cfg_dsfield_outer & 0x3) == 0x3) &&
     ((cfg_dsfield_inner & 0x3) == 0x0))
  cfg_expect_failure = 1;
}
