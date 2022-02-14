
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


typedef scalar_t__ u_int16_t ;
struct sk_buff {int dummy; } ;
struct nf_ct_h323_master {scalar_t__* sig_port; } ;
struct TYPE_16__ {scalar_t__ port; } ;
struct TYPE_17__ {TYPE_11__ tcp; } ;
struct TYPE_15__ {int ip; } ;
struct TYPE_18__ {TYPE_12__ u; TYPE_10__ u3; } ;
struct TYPE_26__ {scalar_t__ port; } ;
struct TYPE_27__ {TYPE_7__ tcp; } ;
struct TYPE_25__ {int ip; } ;
struct TYPE_28__ {TYPE_8__ u; TYPE_6__ u3; } ;
struct TYPE_19__ {TYPE_13__ dst; TYPE_9__ src; } ;
struct TYPE_20__ {scalar_t__ port; } ;
struct TYPE_21__ {TYPE_1__ tcp; } ;
struct nf_conntrack_expect {int dir; TYPE_14__ tuple; int expectfn; TYPE_2__ saved_proto; } ;
struct nf_conn {TYPE_5__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef scalar_t__ __be16 ;
typedef int TransportAddress ;
struct TYPE_22__ {int u3; } ;
struct TYPE_23__ {TYPE_3__ dst; } ;
struct TYPE_24__ {TYPE_4__ tuple; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct nf_conntrack_expect*,int ) ;
 int FUNC_4 (struct nf_conntrack_expect*) ;
 int VAR_1 ;
 struct nf_ct_h323_master* FUNC_5 (struct nf_conn*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,int *,scalar_t__,int *,scalar_t__) ;
 scalar_t__ FUNC_8 (struct sk_buff*,unsigned int,unsigned char**,int,int *,int *,void*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_2, struct nf_conn *VAR_3,
      enum ip_conntrack_info VAR_4,
      unsigned int VAR_5, unsigned char **VAR_6, int VAR_7,
      TransportAddress *VAR_8, __be16 VAR_9,
      struct nf_conntrack_expect *VAR_10)
{
 struct nf_ct_h323_master *VAR_11 = FUNC_5(VAR_3);
 int VAR_12 = FUNC_0(VAR_4);
 u_int16_t VAR_13 = FUNC_6(VAR_9);


 VAR_10->saved_proto.tcp.port = VAR_10->tuple.dst.u.tcp.port;
 VAR_10->expectfn = VAR_1;
 VAR_10->dir = !VAR_12;


 if (VAR_11->sig_port[VAR_12] == VAR_9)
  VAR_13 = FUNC_6(VAR_11->sig_port[!VAR_12]);


 for (; VAR_13 != 0; VAR_13++) {
  int VAR_14;

  VAR_10->tuple.dst.u.tcp.port = FUNC_1(VAR_13);
  VAR_14 = FUNC_3(VAR_10, 0);
  if (VAR_14 == 0)
   break;
  else if (VAR_14 != -VAR_0) {
   VAR_13 = 0;
   break;
  }
 }

 if (VAR_13 == 0) {
  FUNC_2("nf_nat_q931: out of TCP ports\n");
  return 0;
 }


 if (FUNC_8(VAR_2, VAR_5, VAR_6, VAR_7, VAR_8,
     &VAR_3->tuplehash[!VAR_12].tuple.dst.u3,
     FUNC_1(VAR_13))) {
  FUNC_4(VAR_10);
  return -1;
 }


 VAR_11->sig_port[VAR_12] = VAR_9;
 VAR_11->sig_port[!VAR_12] = FUNC_1(VAR_13);

 FUNC_7("nf_nat_q931: expect H.245 %pI4:%hu->%pI4:%hu\n",
   &VAR_10->tuple.src.u3.ip,
   FUNC_6(VAR_10->tuple.src.u.tcp.port),
   &VAR_10->tuple.dst.u3.ip,
   FUNC_6(VAR_10->tuple.dst.u.tcp.port));

 return 0;
}
