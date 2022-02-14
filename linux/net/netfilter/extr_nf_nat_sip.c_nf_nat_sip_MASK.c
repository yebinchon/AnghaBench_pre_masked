
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct udphdr {scalar_t__ dest; } ;
struct sk_buff {scalar_t__ data; int len; } ;
struct nf_ct_sip_master {scalar_t__ forced_dport; } ;
struct nf_conn {TYPE_8__* tuplehash; } ;
typedef enum sip_header_types { ____Placeholder_sip_header_types } sip_header_types ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef scalar_t__ __be16 ;
struct TYPE_9__ {scalar_t__ port; } ;
struct TYPE_10__ {TYPE_1__ udp; } ;
struct TYPE_13__ {TYPE_2__ u; int u3; } ;
struct TYPE_11__ {scalar_t__ port; } ;
struct TYPE_12__ {TYPE_3__ udp; } ;
struct TYPE_14__ {TYPE_4__ u; int u3; } ;
struct TYPE_15__ {TYPE_5__ src; TYPE_6__ dst; } ;
struct TYPE_16__ {TYPE_7__ tuple; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct nf_conn*,char const*,unsigned int,unsigned int,char*,unsigned int*,unsigned int*,union nf_inet_addr*,int) ;
 scalar_t__ FUNC_2 (struct nf_conn*,char const*,unsigned int*,unsigned int,int,int*,unsigned int*,unsigned int*,union nf_inet_addr*,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct nf_conn*,char const*,unsigned int,unsigned int,char*,unsigned int*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_4 (struct nf_conn*,char const*,unsigned int,unsigned int*,unsigned int*,union nf_inet_addr*,scalar_t__*) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int FUNC_6 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,unsigned int,unsigned int,char*,unsigned int) ;
 int FUNC_7 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,unsigned int,unsigned int,union nf_inet_addr*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,int ) ;
 struct nf_conn* FUNC_9 (struct sk_buff*,int*) ;
 int FUNC_10 (struct sk_buff*,struct nf_conn*,char*) ;
 scalar_t__ FUNC_11 (struct nf_conn*) ;
 scalar_t__ FUNC_12 (union nf_inet_addr*,int *) ;
 int FUNC_13 (struct sk_buff*,struct nf_conn*,int,unsigned int,int ,int ,int *,int ) ;
 struct nf_ct_sip_master* FUNC_14 (struct nf_conn*) ;
 int FUNC_15 (scalar_t__) ;
 unsigned int FUNC_16 (struct nf_conn*,char*,int *,int) ;
 scalar_t__ FUNC_17 (struct sk_buff*,int ) ;
 unsigned int FUNC_18 (char*,char*,int) ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (char const*,char*,int ) ;

__attribute__((used)) static unsigned int FUNC_21(struct sk_buff *VAR_10, unsigned int VAR_11,
          unsigned int VAR_12,
          const char **VAR_13, unsigned int *VAR_14)
{
 enum ip_conntrack_info VAR_15;
 struct nf_conn *VAR_16 = FUNC_9(VAR_10, &VAR_15);
 enum ip_conntrack_dir VAR_17 = FUNC_0(VAR_15);
 struct nf_ct_sip_master *VAR_18 = FUNC_14(VAR_16);
 unsigned int VAR_19, VAR_20, VAR_21;
 enum sip_header_types VAR_22;
 union nf_inet_addr VAR_23;
 __be16 VAR_24;
 int VAR_25, VAR_26;


 if (FUNC_20(*VAR_13, "SIP/2.0", FUNC_19("SIP/2.0")) != 0) {
  if (FUNC_4(VAR_16, *VAR_13, *VAR_14,
      &VAR_20, &VAR_21,
      &VAR_23, &VAR_24) > 0 &&
      !FUNC_7(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
         VAR_20, VAR_21, &VAR_23, VAR_24)) {
   FUNC_10(VAR_10, VAR_16, "cannot mangle SIP message");
   return VAR_4;
  }
  VAR_25 = 1;
 } else
  VAR_25 = 0;

 if (FUNC_11(VAR_16) == VAR_1)
  VAR_22 = VAR_8;
 else
  VAR_22 = VAR_9;


 if (FUNC_2(VAR_16, *VAR_13, ((void*)0), *VAR_14,
        VAR_22, ((void*)0), &VAR_20, &VAR_21,
        &VAR_23, &VAR_24) > 0) {
  unsigned int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
  char VAR_33[VAR_0 + sizeof("[]:nnnnn")];



  if (VAR_25) {
   if (!FUNC_12(&VAR_23,
     &VAR_16->tuplehash[VAR_17].tuple.src.u3) ||
       VAR_24 != VAR_16->tuplehash[VAR_17].tuple.src.u.udp.port)
    goto next;
  } else {
   if (!FUNC_12(&VAR_23,
     &VAR_16->tuplehash[VAR_17].tuple.dst.u3) ||
       VAR_24 != VAR_16->tuplehash[VAR_17].tuple.dst.u.udp.port)
    goto next;
  }

  VAR_27 = *VAR_14;
  if (!FUNC_7(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
         VAR_20, VAR_21, &VAR_23, VAR_24)) {
   FUNC_10(VAR_10, VAR_16, "cannot mangle Via header");
   return VAR_4;
  }

  VAR_28 = VAR_20 + VAR_21 + *VAR_14 - VAR_27;



  if (FUNC_1(VAR_16, *VAR_13, VAR_28, *VAR_14,
            "maddr=", &VAR_29, &VAR_30,
            &VAR_23, 1) > 0 &&
      FUNC_12(&VAR_23, &VAR_16->tuplehash[VAR_17].tuple.src.u3) &&
      !FUNC_12(&VAR_23, &VAR_16->tuplehash[!VAR_17].tuple.dst.u3)) {
   VAR_31 = FUNC_16(VAR_16, VAR_33,
     &VAR_16->tuplehash[!VAR_17].tuple.dst.u3,
     1);
   if (!FUNC_6(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
        VAR_29, VAR_30, VAR_33, VAR_31)) {
    FUNC_10(VAR_10, VAR_16, "cannot mangle maddr");
    return VAR_4;
   }
  }



  if (FUNC_1(VAR_16, *VAR_13, VAR_28, *VAR_14,
            "received=", &VAR_29, &VAR_30,
            &VAR_23, 0) > 0 &&
      FUNC_12(&VAR_23, &VAR_16->tuplehash[VAR_17].tuple.dst.u3) &&
      !FUNC_12(&VAR_23, &VAR_16->tuplehash[!VAR_17].tuple.src.u3)) {
   VAR_31 = FUNC_16(VAR_16, VAR_33,
     &VAR_16->tuplehash[!VAR_17].tuple.src.u3,
     0);
   if (!FUNC_6(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
        VAR_29, VAR_30, VAR_33, VAR_31)) {
    FUNC_10(VAR_10, VAR_16, "cannot mangle received");
    return VAR_4;
   }
  }



  if (FUNC_3(VAR_16, *VAR_13, VAR_28, *VAR_14,
       "rport=", &VAR_29, &VAR_30,
       &VAR_32) > 0 &&
      FUNC_5(VAR_32) == VAR_16->tuplehash[VAR_17].tuple.dst.u.udp.port &&
      FUNC_5(VAR_32) != VAR_16->tuplehash[!VAR_17].tuple.src.u.udp.port) {
   __be16 VAR_34 = VAR_16->tuplehash[!VAR_17].tuple.src.u.udp.port;
   VAR_31 = FUNC_18(VAR_33, "%u", FUNC_15(VAR_34));
   if (!FUNC_6(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
        VAR_29, VAR_30, VAR_33, VAR_31)) {
    FUNC_10(VAR_10, VAR_16, "cannot mangle rport");
    return VAR_4;
   }
  }
 }

next:

 VAR_19 = 0;
 VAR_26 = 0;
 while (FUNC_2(VAR_16, *VAR_13, &VAR_19, *VAR_14,
           VAR_5, &VAR_26,
           &VAR_20, &VAR_21,
           &VAR_23, &VAR_24) > 0) {
  if (!FUNC_7(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
         VAR_20, VAR_21,
         &VAR_23, VAR_24)) {
   FUNC_10(VAR_10, VAR_16, "cannot mangle contact");
   return VAR_4;
  }
 }

 if (!FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_6) ||
     !FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_7)) {
  FUNC_10(VAR_10, VAR_16, "cannot mangle SIP from/to");
  return VAR_4;
 }


 if (VAR_17 == VAR_2 && VAR_18->forced_dport) {
  struct udphdr *VAR_35;

  if (FUNC_17(VAR_10, VAR_10->len)) {
   FUNC_10(VAR_10, VAR_16, "cannot mangle packet");
   return VAR_4;
  }

  VAR_35 = (void *)VAR_10->data + VAR_11;
  VAR_35->dest = VAR_18->forced_dport;

  if (!FUNC_13(VAR_10, VAR_16, VAR_15, VAR_11,
           0, 0, ((void*)0), 0)) {
   FUNC_10(VAR_10, VAR_16, "cannot mangle packet");
   return VAR_4;
  }
 }

 return VAR_3;
}
