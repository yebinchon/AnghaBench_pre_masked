
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {struct netlbl_lsm_secattr* nlbl_secattr; int sid; } ;
struct netlbl_lsm_secattr {int dummy; } ;


 int VAR_0 ;
 struct netlbl_lsm_secattr* FUNC_0 (int ) ;
 int FUNC_1 (struct netlbl_lsm_secattr*) ;
 int FUNC_2 (int *,int ,struct netlbl_lsm_secattr*) ;
 int VAR_1 ;

__attribute__((used)) static struct netlbl_lsm_secattr *FUNC_3(struct sock *VAR_2)
{
 int VAR_3;
 struct sk_security_struct *VAR_4 = VAR_2->sk_security;
 struct netlbl_lsm_secattr *VAR_5;

 if (VAR_4->nlbl_secattr != ((void*)0))
  return VAR_4->nlbl_secattr;

 VAR_5 = FUNC_0(VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 VAR_3 = FUNC_2(&VAR_1, VAR_4->sid,
         VAR_5);
 if (VAR_3 != 0) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }
 VAR_4->nlbl_secattr = VAR_5;

 return VAR_5;
}
