
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct sock {int sk_cookie; } ;


 int FUNC_0 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;

u64 FUNC_3(struct sock *VAR_1)
{
 while (1) {
  u64 VAR_2 = FUNC_2(&VAR_1->sk_cookie);

  if (VAR_2)
   return VAR_2;
  VAR_2 = FUNC_1(&VAR_0);
  FUNC_0(&VAR_1->sk_cookie, 0, VAR_2);
 }
}
