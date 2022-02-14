
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,long*,int,int *) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (long) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_5, long *VAR_6)
{
 FUNC_0(VAR_3, VAR_4);
 struct sock *VAR_7 = VAR_5->sk;
 int VAR_8;

 do {
  int VAR_9 = FUNC_6(VAR_7);
  if (VAR_9)
   return VAR_9;
  if (!*VAR_6)
   return -VAR_0;
  if (FUNC_3(VAR_2))
   return FUNC_7(*VAR_6);

  FUNC_1(FUNC_4(VAR_7), &VAR_3);
  VAR_8 = FUNC_5(VAR_7, VAR_6,
         VAR_7->sk_state != VAR_1, &VAR_3);
  FUNC_2(FUNC_4(VAR_7), &VAR_3);
 } while (!VAR_8);
 return 0;
}
