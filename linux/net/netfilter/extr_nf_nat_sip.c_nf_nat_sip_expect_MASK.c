
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
typedef scalar_t__ u_int16_t ;
struct sk_buff {int dummy; } ;
struct nf_ct_sip_master {scalar_t__ forced_dport; } ;
struct TYPE_18__ {scalar_t__ port; } ;
struct TYPE_19__ {TYPE_13__ udp; } ;
struct TYPE_28__ {scalar_t__ port; } ;
struct TYPE_15__ {TYPE_9__ udp; } ;
struct TYPE_16__ {TYPE_10__ u; union nf_inet_addr u3; } ;
struct TYPE_17__ {TYPE_11__ dst; } ;
struct nf_conntrack_expect {int dir; TYPE_14__ saved_proto; TYPE_12__ tuple; union nf_inet_addr saved_addr; int expectfn; } ;
struct nf_conn {TYPE_8__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef scalar_t__ __be16 ;
struct TYPE_23__ {scalar_t__ port; } ;
struct TYPE_24__ {TYPE_4__ udp; } ;
struct TYPE_25__ {TYPE_5__ u; union nf_inet_addr u3; } ;
struct TYPE_20__ {scalar_t__ port; } ;
struct TYPE_21__ {TYPE_1__ udp; } ;
struct TYPE_22__ {TYPE_2__ u; union nf_inet_addr u3; } ;
struct TYPE_26__ {TYPE_6__ dst; TYPE_3__ src; } ;
struct TYPE_27__ {TYPE_7__ tuple; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,unsigned int,unsigned int,char*,unsigned int) ;
 int FUNC_3 (struct nf_conntrack_expect*,int ) ;
 struct nf_conn* FUNC_4 (struct sk_buff*,int*) ;
 int FUNC_5 (struct sk_buff*,struct nf_conn*,char*) ;
 int FUNC_6 (struct nf_conntrack_expect*) ;
 scalar_t__ FUNC_7 (union nf_inet_addr*,union nf_inet_addr*) ;
 int VAR_5 ;
 struct nf_ct_sip_master* FUNC_8 (struct nf_conn*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 unsigned int FUNC_10 (struct nf_conn*,char*,union nf_inet_addr*,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_11(struct sk_buff *VAR_6, unsigned int VAR_7,
          unsigned int VAR_8,
          const char **VAR_9, unsigned int *VAR_10,
          struct nf_conntrack_expect *VAR_11,
          unsigned int VAR_12,
          unsigned int VAR_13)
{
 enum ip_conntrack_info VAR_14;
 struct nf_conn *VAR_15 = FUNC_4(VAR_6, &VAR_14);
 enum ip_conntrack_dir VAR_16 = FUNC_0(VAR_14);
 struct nf_ct_sip_master *VAR_17 = FUNC_8(VAR_15);
 union nf_inet_addr VAR_18;
 u_int16_t VAR_19;
 __be16 VAR_20;
 char VAR_21[VAR_1 + sizeof("[]:nnnnn")];
 unsigned int VAR_22;


 if (FUNC_7(&VAR_15->tuplehash[VAR_16].tuple.src.u3,
        &VAR_15->tuplehash[!VAR_16].tuple.dst.u3))
  VAR_18 = VAR_11->tuple.dst.u3;
 else
  VAR_18 = VAR_15->tuplehash[!VAR_16].tuple.dst.u3;




 VAR_20 = VAR_17->forced_dport ? :
    VAR_15->tuplehash[VAR_16].tuple.src.u.udp.port;
 if (VAR_11->tuple.dst.u.udp.port == VAR_20)
  VAR_19 = FUNC_9(VAR_15->tuplehash[!VAR_16].tuple.dst.u.udp.port);
 else
  VAR_19 = FUNC_9(VAR_11->tuple.dst.u.udp.port);

 VAR_11->saved_addr = VAR_11->tuple.dst.u3;
 VAR_11->tuple.dst.u3 = VAR_18;
 VAR_11->saved_proto.udp.port = VAR_11->tuple.dst.u.udp.port;
 VAR_11->dir = !VAR_16;
 VAR_11->expectfn = VAR_5;

 for (; VAR_19 != 0; VAR_19++) {
  int VAR_23;

  VAR_11->tuple.dst.u.udp.port = FUNC_1(VAR_19);
  VAR_23 = FUNC_3(VAR_11, VAR_3);
  if (VAR_23 == 0)
   break;
  else if (VAR_23 != -VAR_0) {
   VAR_19 = 0;
   break;
  }
 }

 if (VAR_19 == 0) {
  FUNC_5(VAR_6, VAR_15, "all ports in use for SIP");
  return VAR_4;
 }

 if (!FUNC_7(&VAR_11->tuple.dst.u3, &VAR_11->saved_addr) ||
     VAR_11->tuple.dst.u.udp.port != VAR_11->saved_proto.udp.port) {
  VAR_22 = FUNC_10(VAR_15, VAR_21, &VAR_18, VAR_19);
  if (!FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
       VAR_12, VAR_13, VAR_21, VAR_22)) {
   FUNC_5(VAR_6, VAR_15, "cannot mangle packet");
   goto err;
  }
 }
 return VAR_2;

err:
 FUNC_6(VAR_11);
 return VAR_4;
}
