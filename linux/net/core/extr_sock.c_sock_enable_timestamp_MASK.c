
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {unsigned long sk_flags; } ;


 unsigned long VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct sock*,int) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int) ;

void FUNC_4(struct sock *VAR_1, int VAR_2)
{
 if (!FUNC_1(VAR_1, VAR_2)) {
  unsigned long VAR_3 = VAR_1->sk_flags;

  FUNC_3(VAR_1, VAR_2);





  if (FUNC_2(VAR_1) &&
      !(VAR_3 & VAR_0))
   FUNC_0();
 }
}
