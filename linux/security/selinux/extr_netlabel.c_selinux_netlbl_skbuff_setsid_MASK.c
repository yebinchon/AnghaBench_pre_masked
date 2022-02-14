
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {scalar_t__ nlbl_state; } ;
struct sk_buff {int dummy; } ;
struct netlbl_lsm_secattr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct netlbl_lsm_secattr*) ;
 int FUNC_1 (struct netlbl_lsm_secattr*) ;
 int FUNC_2 (struct sk_buff*,int ,struct netlbl_lsm_secattr*) ;
 int FUNC_3 (int *,int ,struct netlbl_lsm_secattr*) ;
 struct netlbl_lsm_secattr* FUNC_4 (struct sock*,int ) ;
 int VAR_1 ;
 struct sock* FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct sk_buff *VAR_2,
     u16 VAR_3,
     u32 VAR_4)
{
 int VAR_5;
 struct netlbl_lsm_secattr VAR_6;
 struct netlbl_lsm_secattr *VAR_7 = ((void*)0);
 struct sock *VAR_8;



 VAR_8 = FUNC_5(VAR_2);
 if (VAR_8 != ((void*)0)) {
  struct sk_security_struct *VAR_9 = VAR_8->sk_security;

  if (VAR_9->nlbl_state != VAR_0)
   return 0;
  VAR_7 = FUNC_4(VAR_8, VAR_4);
 }
 if (VAR_7 == ((void*)0)) {
  VAR_7 = &VAR_6;
  FUNC_1(VAR_7);
  VAR_5 = FUNC_3(&VAR_1, VAR_4,
          VAR_7);
  if (VAR_5 != 0)
   goto skbuff_setsid_return;
 }

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_7);

skbuff_setsid_return:
 if (VAR_7 == &VAR_6)
  FUNC_0(VAR_7);
 return VAR_5;
}
