
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dccp_sock {int dccps_osr; int dccps_role; } ;
struct dccp_hdr {int dummy; } ;
struct TYPE_4__ {int dccpd_seq; } ;
struct TYPE_3__ {int dccph_type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 int FUNC_7 (struct sock*,struct sk_buff*) ;
 int FUNC_8 (struct sock*,struct sk_buff*) ;
 int FUNC_9 (struct sock*,int ,int) ;
 struct dccp_sock* FUNC_10 (struct sock*) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_4, struct sk_buff *VAR_5,
      const struct dccp_hdr *VAR_6, const unsigned int VAR_7)
{
 struct dccp_sock *VAR_8 = FUNC_10(VAR_4);

 switch (FUNC_5(VAR_5)->dccph_type) {
 case 132:
 case 133:





  FUNC_4(VAR_4, VAR_5);
  return 0;
 case 136:
  goto discard;
 case 130:
  FUNC_8(VAR_4, VAR_5);
  return 0;
 case 134:
  if (FUNC_7(VAR_4, VAR_5))
   return 0;
  goto discard;
 case 135:
  if (FUNC_6(VAR_4, VAR_5))
   return 0;
  goto discard;
 case 131:
  if (VAR_8->dccps_role != VAR_3)
   goto send_sync;
  goto check_seq;
 case 129:
  if (VAR_8->dccps_role != VAR_2)
   goto send_sync;
check_seq:
  if (FUNC_3(VAR_8->dccps_osr,
         FUNC_1(VAR_5)->dccpd_seq) >= 0) {
send_sync:
   FUNC_9(VAR_4, FUNC_1(VAR_5)->dccpd_seq,
           128);
  }
  break;
 case 128:
  FUNC_9(VAR_4, FUNC_1(VAR_5)->dccpd_seq,
          VAR_1);







  goto discard;
 }

 FUNC_0(VAR_0);
discard:
 FUNC_2(VAR_5);
 return 0;
}
