
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_tsq_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_1)
{
 FUNC_0(VAR_1);
 if (!FUNC_3(VAR_1))
  FUNC_4(VAR_1);
 else if (!FUNC_5(VAR_0, &VAR_1->sk_tsq_flags))
  FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
