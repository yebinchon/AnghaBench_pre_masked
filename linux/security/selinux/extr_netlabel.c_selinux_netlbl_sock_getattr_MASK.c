
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {struct netlbl_lsm_secattr* nlbl_secattr; } ;
struct TYPE_2__ {scalar_t__ secid; } ;
struct netlbl_lsm_secattr {int flags; TYPE_1__ attr; } ;


 int VAR_0 ;

__attribute__((used)) static struct netlbl_lsm_secattr *FUNC_0(
       const struct sock *VAR_1,
       u32 VAR_2)
{
 struct sk_security_struct *VAR_3 = VAR_1->sk_security;
 struct netlbl_lsm_secattr *VAR_4 = VAR_3->nlbl_secattr;

 if (VAR_4 == ((void*)0))
  return ((void*)0);

 if ((VAR_4->flags & VAR_0) &&
     (VAR_4->attr.secid == VAR_2))
  return VAR_4;

 return ((void*)0);
}
