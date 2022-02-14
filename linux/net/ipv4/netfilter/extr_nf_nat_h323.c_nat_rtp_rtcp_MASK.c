
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


typedef int u_int16_t ;
struct sk_buff {int dummy; } ;
struct nf_ct_h323_master {scalar_t__** rtp_port; } ;
struct TYPE_16__ {scalar_t__ port; } ;
struct TYPE_17__ {TYPE_11__ udp; } ;
struct TYPE_15__ {int ip; } ;
struct TYPE_18__ {TYPE_12__ u; TYPE_10__ u3; } ;
struct TYPE_26__ {scalar_t__ port; } ;
struct TYPE_27__ {TYPE_7__ udp; } ;
struct TYPE_25__ {int ip; } ;
struct TYPE_28__ {TYPE_8__ u; TYPE_6__ u3; } ;
struct TYPE_19__ {TYPE_13__ dst; TYPE_9__ src; } ;
struct TYPE_20__ {scalar_t__ port; } ;
struct TYPE_21__ {TYPE_1__ udp; } ;
struct nf_conntrack_expect {int dir; TYPE_14__ tuple; void* expectfn; TYPE_2__ saved_proto; } ;
struct nf_conn {TYPE_5__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef scalar_t__ __be16 ;
struct TYPE_22__ {int u3; } ;
struct TYPE_23__ {TYPE_3__ dst; } ;
struct TYPE_24__ {TYPE_4__ tuple; } ;
typedef int H245_TransportAddress ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct nf_conntrack_expect*,int ) ;
 int FUNC_4 (struct nf_conntrack_expect*) ;
 void* VAR_2 ;
 struct nf_ct_h323_master* FUNC_5 (struct nf_conn*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,int *,int,int *,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,unsigned int,unsigned char**,int,int *,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_3, struct nf_conn *VAR_4,
   enum ip_conntrack_info VAR_5,
   unsigned int VAR_6, unsigned char **VAR_7, int VAR_8,
   H245_TransportAddress *VAR_9,
   __be16 VAR_10, __be16 VAR_11,
   struct nf_conntrack_expect *VAR_12,
   struct nf_conntrack_expect *VAR_13)
{
 struct nf_ct_h323_master *VAR_14 = FUNC_5(VAR_4);
 int VAR_15 = FUNC_0(VAR_5);
 int VAR_16;
 u_int16_t VAR_17;


 VAR_12->saved_proto.udp.port = VAR_12->tuple.dst.u.udp.port;
 VAR_12->expectfn = VAR_2;
 VAR_12->dir = !VAR_15;
 VAR_13->saved_proto.udp.port = VAR_13->tuple.dst.u.udp.port;
 VAR_13->expectfn = VAR_2;
 VAR_13->dir = !VAR_15;


 for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++) {
  if (VAR_14->rtp_port[VAR_16][VAR_15] == VAR_11) {




   VAR_12->tuple.dst.u.udp.port = VAR_14->rtp_port[VAR_16][VAR_15];
   VAR_13->tuple.dst.u.udp.port =
       FUNC_1(FUNC_6(VAR_14->rtp_port[VAR_16][VAR_15]) + 1);
   break;
  } else if (VAR_14->rtp_port[VAR_16][VAR_15] == 0) {

   break;
  }
 }


 if (VAR_16 >= VAR_1) {
  FUNC_2("nf_nat_h323: out of expectations\n");
  return 0;
 }


 for (VAR_17 = FUNC_6(VAR_12->tuple.dst.u.udp.port);
      VAR_17 != 0; VAR_17 += 2) {
  int VAR_18;

  VAR_12->tuple.dst.u.udp.port = FUNC_1(VAR_17);
  VAR_18 = FUNC_3(VAR_12, 0);
  if (VAR_18 == 0) {
   VAR_13->tuple.dst.u.udp.port =
       FUNC_1(VAR_17 + 1);
   VAR_18 = FUNC_3(VAR_13, 0);
   if (VAR_18 == 0)
    break;
   else if (VAR_18 == -VAR_0) {
    FUNC_4(VAR_12);
    continue;
   } else if (VAR_18 < 0) {
    FUNC_4(VAR_12);
    VAR_17 = 0;
    break;
   }
  } else if (VAR_18 != -VAR_0) {
   VAR_17 = 0;
   break;
  }
 }

 if (VAR_17 == 0) {
  FUNC_2("nf_nat_h323: out of RTP ports\n");
  return 0;
 }


 if (FUNC_8(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9,
     &VAR_4->tuplehash[!VAR_15].tuple.dst.u3,
     FUNC_1((VAR_10 & FUNC_1(1)) ? VAR_17 + 1 :
          VAR_17))) {
  FUNC_4(VAR_12);
  FUNC_4(VAR_13);
  return -1;
 }


 VAR_14->rtp_port[VAR_16][VAR_15] = VAR_11;
 VAR_14->rtp_port[VAR_16][!VAR_15] = FUNC_1(VAR_17);


 FUNC_7("nf_nat_h323: expect RTP %pI4:%hu->%pI4:%hu\n",
   &VAR_12->tuple.src.u3.ip,
   FUNC_6(VAR_12->tuple.src.u.udp.port),
   &VAR_12->tuple.dst.u3.ip,
   FUNC_6(VAR_12->tuple.dst.u.udp.port));
 FUNC_7("nf_nat_h323: expect RTCP %pI4:%hu->%pI4:%hu\n",
   &VAR_13->tuple.src.u3.ip,
   FUNC_6(VAR_13->tuple.src.u.udp.port),
   &VAR_13->tuple.dst.u3.ip,
   FUNC_6(VAR_13->tuple.dst.u.udp.port));

 return 0;
}
