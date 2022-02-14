
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int type; struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (long) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_7, long *VAR_8)
{
 struct sock *VAR_9 = VAR_7->sk;
 int VAR_10 = FUNC_1(VAR_9);
 int VAR_11 = VAR_7->type;

 if (VAR_10)
  return VAR_10;
 if (VAR_11 == VAR_4 || VAR_11 == VAR_3) {
  if (VAR_9->sk_state == VAR_5)
   return -VAR_2;
  else if (!FUNC_3(VAR_9))
   return -VAR_1;
 }
 if (!*VAR_8)
  return -VAR_0;
 if (FUNC_0(VAR_6))
  return FUNC_2(*VAR_8);

 return 0;
}
