
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_psock {void (* saved_write_space ) (struct sock*) ;int work; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 struct sk_psock* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sk_psock*,int ) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_1)
{
 struct sk_psock *VAR_2;
 void (*VAR_3)(struct sock *VAR_4);

 FUNC_1();
 VAR_2 = FUNC_4(VAR_1);
 if (FUNC_0(VAR_2 && FUNC_5(VAR_2, VAR_0)))
  FUNC_3(&VAR_2->work);
 VAR_3 = VAR_2->saved_write_space;
 FUNC_2();
 VAR_3(VAR_1);
}
