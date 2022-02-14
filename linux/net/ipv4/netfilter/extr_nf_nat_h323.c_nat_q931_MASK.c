
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


union nf_inet_addr {int ip; } ;
typedef scalar_t__ u_int16_t ;
struct sk_buff {int dummy; } ;
struct nf_ct_h323_master {void** sig_port; } ;
struct TYPE_16__ {void* port; } ;
struct TYPE_17__ {TYPE_11__ tcp; } ;
struct TYPE_15__ {int ip; } ;
struct TYPE_18__ {TYPE_12__ u; TYPE_10__ u3; } ;
struct TYPE_26__ {void* port; } ;
struct TYPE_27__ {TYPE_7__ tcp; } ;
struct TYPE_25__ {int ip; } ;
struct TYPE_28__ {TYPE_8__ u; TYPE_6__ u3; } ;
struct TYPE_19__ {TYPE_13__ dst; TYPE_9__ src; } ;
struct TYPE_20__ {void* port; } ;
struct TYPE_21__ {TYPE_1__ tcp; } ;
struct nf_conntrack_expect {int dir; TYPE_14__ tuple; int expectfn; TYPE_2__ saved_proto; } ;
struct nf_conn {TYPE_5__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef void* __be16 ;
typedef int TransportAddress ;
struct TYPE_22__ {int u3; } ;
struct TYPE_23__ {TYPE_3__ dst; } ;
struct TYPE_24__ {TYPE_4__ tuple; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct nf_conn*,unsigned char*,int *,union nf_inet_addr*,void**) ;
 void* FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct nf_conntrack_expect*,int ) ;
 int FUNC_5 (struct nf_conntrack_expect*) ;
 struct nf_ct_h323_master* FUNC_6 (struct nf_conn*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (void*) ;
 int FUNC_9 (char*,int *,scalar_t__,int *,scalar_t__) ;
 scalar_t__ FUNC_10 (struct sk_buff*,unsigned int,unsigned char**,int ,int *,int *,void*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_2, struct nf_conn *VAR_3,
      enum ip_conntrack_info VAR_4,
      unsigned int VAR_5, unsigned char **VAR_6,
      TransportAddress *VAR_7, int VAR_8,
      __be16 VAR_9, struct nf_conntrack_expect *VAR_10)
{
 struct nf_ct_h323_master *VAR_11 = FUNC_6(VAR_3);
 int VAR_12 = FUNC_0(VAR_4);
 u_int16_t VAR_13 = FUNC_8(VAR_9);
 union nf_inet_addr VAR_14;


 VAR_10->saved_proto.tcp.port = VAR_10->tuple.dst.u.tcp.port;
 VAR_10->expectfn = VAR_1;
 VAR_10->dir = !VAR_12;


 if (VAR_11->sig_port[VAR_12] == VAR_9)
  VAR_13 = FUNC_8(VAR_11->sig_port[!VAR_12]);


 for (; VAR_13 != 0; VAR_13++) {
  int VAR_15;

  VAR_10->tuple.dst.u.tcp.port = FUNC_2(VAR_13);
  VAR_15 = FUNC_4(VAR_10, 0);
  if (VAR_15 == 0)
   break;
  else if (VAR_15 != -VAR_0) {
   VAR_13 = 0;
   break;
  }
 }

 if (VAR_13 == 0) {
  FUNC_3("nf_nat_ras: out of TCP ports\n");
  return 0;
 }


 if (FUNC_10(VAR_2, VAR_5, VAR_6, 0, &VAR_7[VAR_8],
     &VAR_3->tuplehash[!VAR_12].tuple.dst.u3,
     FUNC_2(VAR_13))) {
  FUNC_5(VAR_10);
  return -1;
 }


 VAR_11->sig_port[VAR_12] = VAR_9;
 VAR_11->sig_port[!VAR_12] = FUNC_2(VAR_13);


 if (VAR_8 > 0 &&
     FUNC_1(VAR_3, *VAR_6, &VAR_7[0], &VAR_14, &VAR_9) &&
     (FUNC_7(VAR_14.ip) & 0xff000000) == 0x7f000000) {
  if (FUNC_10(VAR_2, VAR_5, VAR_6, 0, &VAR_7[0],
      &VAR_3->tuplehash[!VAR_12].tuple.dst.u3,
      VAR_11->sig_port[!VAR_12])) {
   FUNC_5(VAR_10);
   return -1;
  }
 }


 FUNC_9("nf_nat_ras: expect Q.931 %pI4:%hu->%pI4:%hu\n",
   &VAR_10->tuple.src.u3.ip,
   FUNC_8(VAR_10->tuple.src.u.tcp.port),
   &VAR_10->tuple.dst.u3.ip,
   FUNC_8(VAR_10->tuple.dst.u.tcp.port));

 return 0;
}
