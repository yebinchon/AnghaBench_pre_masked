
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct netns_ipvs {int dummy; } ;
struct ip_vs_sync_mesg_v0 {int nr_conns; } ;
struct ip_vs_sync_conn_v0 {unsigned int protocol; int dport; int daddr; int vport; int vaddr; int cport; int caddr; int state; int flags; } ;
struct ip_vs_sync_conn_options {int dummy; } ;
struct ip_vs_protocol {unsigned int num_states; int name; } ;
struct ip_vs_conn_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int,char*,unsigned int,...) ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int FUNC_2 (struct netns_ipvs*,int ,unsigned int,union nf_inet_addr const*,int ,union nf_inet_addr const*,int ,struct ip_vs_conn_param*) ;
 int FUNC_3 (struct netns_ipvs*,struct ip_vs_conn_param*,unsigned int,unsigned int,unsigned int,int ,union nf_inet_addr*,int ,int ,int ,struct ip_vs_sync_conn_options*) ;
 struct ip_vs_protocol* FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct netns_ipvs *VAR_8, const char *VAR_9,
         const size_t VAR_10)
{
 struct ip_vs_sync_mesg_v0 *VAR_11 = (struct ip_vs_sync_mesg_v0 *)VAR_9;
 struct ip_vs_sync_conn_v0 *VAR_12;
 struct ip_vs_sync_conn_options *VAR_13;
 struct ip_vs_protocol *VAR_14;
 struct ip_vs_conn_param VAR_15;
 char *VAR_16;
 int VAR_17;

 VAR_16 = (char *)VAR_9 + sizeof(struct ip_vs_sync_mesg_v0);
 for (VAR_17=0; VAR_17<VAR_11->nr_conns; VAR_17++) {
  unsigned int VAR_18, VAR_19;

  if (VAR_16 + VAR_7 > VAR_9+VAR_10) {
   FUNC_1("BACKUP v0, bogus conn\n");
   return;
  }
  VAR_12 = (struct ip_vs_sync_conn_v0 *) VAR_16;
  VAR_18 = FUNC_5(VAR_12->flags) | VAR_4;
  VAR_18 &= ~VAR_2;
  if (VAR_18 & VAR_3) {
   VAR_13 = (struct ip_vs_sync_conn_options *)&VAR_12[1];
   VAR_16 += VAR_1;
   if (VAR_16 > VAR_9+VAR_10) {
    FUNC_1("BACKUP v0, Dropping buffer bogus conn options\n");
    return;
   }
  } else {
   VAR_13 = ((void*)0);
   VAR_16 += VAR_7;
  }

  VAR_19 = FUNC_5(VAR_12->state);
  if (!(VAR_18 & VAR_5)) {
   VAR_14 = FUNC_4(VAR_12->protocol);
   if (!VAR_14) {
    FUNC_0(2, "BACKUP v0, Unsupported protocol %u\n",
     VAR_12->protocol);
    continue;
   }
   if (VAR_19 >= VAR_14->num_states) {
    FUNC_0(2, "BACKUP v0, Invalid %s state %u\n",
     VAR_14->name, VAR_19);
    continue;
   }
  } else {
   if (VAR_19 >= VAR_6)
    FUNC_0(7, "BACKUP v0, Invalid tpl state %u\n",
       VAR_19);
  }

  FUNC_2(VAR_8, VAR_0, VAR_12->protocol,
          (const union nf_inet_addr *)&VAR_12->caddr,
          VAR_12->cport,
          (const union nf_inet_addr *)&VAR_12->vaddr,
          VAR_12->vport, &VAR_15);


  FUNC_3(VAR_8, &VAR_15, VAR_18, VAR_19, VAR_12->protocol, VAR_0,
    (union nf_inet_addr *)&VAR_12->daddr, VAR_12->dport,
    0, 0, VAR_13);
 }
}
