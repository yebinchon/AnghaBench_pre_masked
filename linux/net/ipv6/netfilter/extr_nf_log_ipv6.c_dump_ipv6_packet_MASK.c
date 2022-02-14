
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct sk_buff {int mark; int sk; int len; } ;
struct TYPE_3__ {unsigned int logflags; } ;
struct TYPE_4__ {TYPE_1__ log; } ;
struct nf_loginfo {scalar_t__ type; TYPE_2__ u; } ;
struct nf_log_buf {int dummy; } ;
struct net {int dummy; } ;
struct ipv6hdr {int payload_len; int nexthdr; int frag_off; int const icmp6_type; int icmp6_identifier; int icmp6_sequence; int icmp6_mtu; int icmp6_pointer; int icmp6_code; int spi; int identification; int hop_limit; int daddr; int saddr; } ;
struct ipv6_opt_hdr {int payload_len; int nexthdr; int frag_off; int const icmp6_type; int icmp6_identifier; int icmp6_sequence; int icmp6_mtu; int icmp6_pointer; int icmp6_code; int spi; int identification; int hop_limit; int daddr; int saddr; } ;
struct ip_esp_hdr {int payload_len; int nexthdr; int frag_off; int const icmp6_type; int icmp6_identifier; int icmp6_sequence; int icmp6_mtu; int icmp6_pointer; int icmp6_code; int spi; int identification; int hop_limit; int daddr; int saddr; } ;
struct ip_auth_hdr {int payload_len; int nexthdr; int frag_off; int const icmp6_type; int icmp6_identifier; int icmp6_sequence; int icmp6_mtu; int icmp6_pointer; int icmp6_code; int spi; int identification; int hop_limit; int daddr; int saddr; } ;
struct icmp6hdr {int payload_len; int nexthdr; int frag_off; int const icmp6_type; int icmp6_identifier; int icmp6_sequence; int icmp6_mtu; int icmp6_pointer; int icmp6_code; int spi; int identification; int hop_limit; int daddr; int saddr; } ;
struct frag_hdr {int payload_len; int nexthdr; int frag_off; int const icmp6_type; int icmp6_identifier; int icmp6_sequence; int icmp6_mtu; int icmp6_pointer; int icmp6_code; int spi; int identification; int hop_limit; int daddr; int saddr; } ;
typedef int _ip6h ;
typedef int _icmp6h ;
typedef int _hdr ;
typedef int _fhdr ;
typedef int _esph ;
typedef int _ahdr ;
typedef int __be32 ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct ipv6hdr const*) ;
 unsigned int FUNC_2 (struct ipv6hdr const*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct nf_log_buf*,char*,...) ;
 int FUNC_5 (struct net*,struct nf_log_buf*,int ) ;
 int FUNC_6 (struct nf_log_buf*,struct sk_buff const*,int,int,unsigned int,unsigned int) ;
 int FUNC_7 (struct nf_log_buf*,struct sk_buff const*,int,int,unsigned int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 struct ipv6hdr* FUNC_10 (struct sk_buff const*,unsigned int,int,struct ipv6hdr*) ;

__attribute__((used)) static void FUNC_11(struct net *VAR_5, struct nf_log_buf *VAR_6,
        const struct nf_loginfo *VAR_7,
        const struct sk_buff *VAR_8, unsigned int VAR_9,
        int VAR_10)
{
 u_int8_t VAR_11;
 int VAR_12;
 struct ipv6hdr VAR_13;
 const struct ipv6hdr *VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16 = 0;
 unsigned int VAR_17;

 if (VAR_7->type == VAR_3)
  VAR_17 = VAR_7->u.log.logflags;
 else
  VAR_17 = VAR_1;

 VAR_14 = FUNC_10(VAR_8, VAR_9, sizeof(VAR_13), &VAR_13);
 if (VAR_14 == ((void*)0)) {
  FUNC_4(VAR_6, "TRUNCATED");
  return;
 }


 FUNC_4(VAR_6, "SRC=%pI6 DST=%pI6 ", &VAR_14->saddr, &VAR_14->daddr);


 FUNC_4(VAR_6, "LEN=%zu TC=%u HOPLIMIT=%u FLOWLBL=%u ",
        FUNC_9(VAR_14->payload_len) + sizeof(struct ipv6hdr),
        (FUNC_8(*(__be32 *)VAR_14) & 0x0ff00000) >> 20,
        VAR_14->hop_limit,
        (FUNC_8(*(__be32 *)VAR_14) & 0x000fffff));

 VAR_12 = 0;
 VAR_15 = VAR_9 + sizeof(struct ipv6hdr);
 VAR_11 = VAR_14->nexthdr;
 while (VAR_11 != VAR_0 && FUNC_3(VAR_11)) {
  struct ipv6_opt_hdr VAR_18;
  const struct ipv6_opt_hdr *VAR_19;

  VAR_19 = FUNC_10(VAR_8, VAR_15, sizeof(VAR_18), &VAR_18);
  if (VAR_19 == ((void*)0)) {
   FUNC_4(VAR_6, "TRUNCATED");
   return;
  }


  if (VAR_17 & VAR_2)
   FUNC_4(VAR_6, "OPT ( ");

  switch (VAR_11) {
  case 134: {
   struct frag_hdr VAR_20;
   const struct frag_hdr *VAR_21;

   FUNC_4(VAR_6, "FRAG:");
   VAR_21 = FUNC_10(VAR_8, VAR_15, sizeof(VAR_20),
      &VAR_20);
   if (VAR_21 == ((void*)0)) {
    FUNC_4(VAR_6, "TRUNCATED ");
    return;
   }


   FUNC_4(VAR_6, "%u ", FUNC_9(VAR_21->frag_off) & 0xFFF8);


   if (VAR_21->frag_off & FUNC_0(0x0001))
    FUNC_4(VAR_6, "INCOMPLETE ");

   FUNC_4(VAR_6, "ID:%08x ",
           FUNC_8(VAR_21->identification));

   if (FUNC_9(VAR_21->frag_off) & 0xFFF8)
    VAR_12 = 1;

   VAR_16 = 8;

   break;
  }
  case 136:
  case 131:
  case 133:
   if (VAR_12) {
    if (VAR_17 & VAR_2)
     FUNC_4(VAR_6, ")");
    return;
   }
   VAR_16 = FUNC_2(VAR_19);
   break;

  case 137:
   if (VAR_17 & VAR_2) {
    struct ip_auth_hdr VAR_22;
    const struct ip_auth_hdr *VAR_23;


    FUNC_4(VAR_6, "AH ");

    if (VAR_12) {
     FUNC_4(VAR_6, ")");
     return;
    }

    VAR_23 = FUNC_10(VAR_8, VAR_15, sizeof(VAR_22),
       &VAR_22);
    if (VAR_23 == ((void*)0)) {




     FUNC_4(VAR_6, "INCOMPLETE [%u bytes] )",
             VAR_8->len - VAR_15);
     return;
    }


    FUNC_4(VAR_6, "SPI=0x%x ", FUNC_8(VAR_23->spi));

   }

   VAR_16 = FUNC_1(VAR_19);
   break;
  case 135:
   if (VAR_17 & VAR_2) {
    struct ip_esp_hdr VAR_24;
    const struct ip_esp_hdr *VAR_25;


    FUNC_4(VAR_6, "ESP ");

    if (VAR_12) {
     FUNC_4(VAR_6, ")");
     return;
    }




    VAR_25 = FUNC_10(VAR_8, VAR_15, sizeof(VAR_24),
       &VAR_24);
    if (VAR_25 == ((void*)0)) {
     FUNC_4(VAR_6, "INCOMPLETE [%u bytes] )",
             VAR_8->len - VAR_15);
     return;
    }


    FUNC_4(VAR_6, "SPI=0x%x )",
            FUNC_8(VAR_25->spi));
   }
   return;
  default:

   FUNC_4(VAR_6, "Unknown Ext Hdr %u", VAR_11);
   return;
  }
  if (VAR_17 & VAR_2)
   FUNC_4(VAR_6, ") ");

  VAR_11 = VAR_19->nexthdr;
  VAR_15 += VAR_16;
 }

 switch (VAR_11) {
 case 130:
  if (FUNC_6(VAR_6, VAR_8, VAR_11, VAR_12,
        VAR_15, VAR_17))
   return;
  break;
 case 129:
 case 128:
  if (FUNC_7(VAR_6, VAR_8, VAR_11, VAR_12, VAR_15))
   return;
  break;
 case 132: {
  struct icmp6hdr VAR_26;
  const struct icmp6hdr *VAR_27;


  FUNC_4(VAR_6, "PROTO=ICMPv6 ");

  if (VAR_12)
   break;


  VAR_27 = FUNC_10(VAR_8, VAR_15, sizeof(VAR_26), &VAR_26);
  if (VAR_27 == ((void*)0)) {
   FUNC_4(VAR_6, "INCOMPLETE [%u bytes] ",
           VAR_8->len - VAR_15);
   return;
  }


  FUNC_4(VAR_6, "TYPE=%u CODE=%u ",
          VAR_27->icmp6_type, VAR_27->icmp6_code);

  switch (VAR_27->icmp6_type) {
  case 144:
  case 145:

   FUNC_4(VAR_6, "ID=%u SEQ=%u ",
    FUNC_9(VAR_27->icmp6_identifier),
    FUNC_9(VAR_27->icmp6_sequence));
   break;
  case 143:
  case 141:
  case 142:
   break;

  case 140:

   FUNC_4(VAR_6, "POINTER=%08x ",
           FUNC_8(VAR_27->icmp6_pointer));

  case 146:
  case 139:
  case 138:

   if (VAR_10) {
    FUNC_4(VAR_6, "[");
    FUNC_11(VAR_5, VAR_6, VAR_7, VAR_8,
       VAR_15 + sizeof(VAR_26), 0);
    FUNC_4(VAR_6, "] ");
   }


   if (VAR_27->icmp6_type == 139) {
    FUNC_4(VAR_6, "MTU=%u ",
            FUNC_8(VAR_27->icmp6_mtu));
   }
  }
  break;
 }

 default:
  FUNC_4(VAR_6, "PROTO=%u ", VAR_11);
 }


 if ((VAR_17 & VAR_4) && VAR_10)
  FUNC_5(VAR_5, VAR_6, VAR_8->sk);


 if (VAR_10 && VAR_8->mark)
  FUNC_4(VAR_6, "MARK=0x%x ", VAR_8->mark);
}
