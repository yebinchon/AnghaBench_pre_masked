
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_pdu_sn {int dummy; } ;


 scalar_t__ FUNC_0 (struct llc_pdu_sn*) ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sk_buff*,scalar_t__*) ;
 struct llc_pdu_sn* FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct llc_pdu_sn *VAR_2 = FUNC_4(VAR_1);

 if (FUNC_0(VAR_2)) {
  u8 VAR_3;

  FUNC_3(VAR_1, &VAR_3);
  if (VAR_3) {
   FUNC_2(VAR_0, 0);
   FUNC_1(VAR_0, VAR_1);
  }
 }
 return 0;
}
