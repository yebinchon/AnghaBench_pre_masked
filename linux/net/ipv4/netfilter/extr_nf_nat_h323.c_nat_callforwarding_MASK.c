
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef scalar_t__ u_int16_t ;
struct sk_buff {int dummy; } ;
struct TYPE_17__ {int port; } ;
struct TYPE_18__ {TYPE_11__ tcp; } ;
struct TYPE_16__ {int ip; } ;
struct TYPE_19__ {TYPE_12__ u; TYPE_10__ u3; } ;
struct TYPE_28__ {int port; } ;
struct TYPE_29__ {TYPE_7__ tcp; } ;
struct TYPE_27__ {int ip; } ;
struct TYPE_30__ {TYPE_8__ u; TYPE_6__ u3; } ;
struct TYPE_20__ {TYPE_13__ dst; TYPE_9__ src; } ;
struct TYPE_22__ {int port; } ;
struct TYPE_23__ {TYPE_1__ tcp; } ;
struct nf_conntrack_expect {int dir; TYPE_14__ tuple; int expectfn; TYPE_2__ saved_proto; TYPE_10__ saved_addr; } ;
struct nf_conn {TYPE_5__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int __be16 ;
typedef int TransportAddress ;
struct TYPE_21__ {int ip; } ;
struct TYPE_24__ {TYPE_15__ u3; } ;
struct TYPE_25__ {TYPE_3__ dst; } ;
struct TYPE_26__ {TYPE_4__ tuple; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct nf_conntrack_expect*,int ) ;
 int FUNC_4 (struct nf_conntrack_expect*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,int *,scalar_t__,int *,scalar_t__) ;
 scalar_t__ FUNC_7 (struct sk_buff*,unsigned int,unsigned char**,int,int *,TYPE_15__*,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_2, struct nf_conn *VAR_3,
         enum ip_conntrack_info VAR_4,
         unsigned int VAR_5,
         unsigned char **VAR_6, int VAR_7,
         TransportAddress *VAR_8, __be16 VAR_9,
         struct nf_conntrack_expect *VAR_10)
{
 int VAR_11 = FUNC_0(VAR_4);
 u_int16_t VAR_12;


 VAR_10->saved_addr = VAR_10->tuple.dst.u3;
 VAR_10->tuple.dst.u3.ip = VAR_3->tuplehash[!VAR_11].tuple.dst.u3.ip;
 VAR_10->saved_proto.tcp.port = VAR_10->tuple.dst.u.tcp.port;
 VAR_10->expectfn = VAR_1;
 VAR_10->dir = !VAR_11;


 for (VAR_12 = FUNC_5(VAR_9); VAR_12 != 0; VAR_12++) {
  int VAR_13;

  VAR_10->tuple.dst.u.tcp.port = FUNC_1(VAR_12);
  VAR_13 = FUNC_3(VAR_10, 0);
  if (VAR_13 == 0)
   break;
  else if (VAR_13 != -VAR_0) {
   VAR_12 = 0;
   break;
  }
 }

 if (VAR_12 == 0) {
  FUNC_2("nf_nat_q931: out of TCP ports\n");
  return 0;
 }


 if (FUNC_7(VAR_2, VAR_5, VAR_6, VAR_7, VAR_8,
     &VAR_3->tuplehash[!VAR_11].tuple.dst.u3,
     FUNC_1(VAR_12))) {
  FUNC_4(VAR_10);
  return -1;
 }


 FUNC_6("nf_nat_q931: expect Call Forwarding %pI4:%hu->%pI4:%hu\n",
   &VAR_10->tuple.src.u3.ip,
   FUNC_5(VAR_10->tuple.src.u.tcp.port),
   &VAR_10->tuple.dst.u3.ip,
   FUNC_5(VAR_10->tuple.dst.u.tcp.port));

 return 0;
}
