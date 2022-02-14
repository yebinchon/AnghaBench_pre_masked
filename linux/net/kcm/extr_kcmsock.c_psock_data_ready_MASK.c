
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_callback_lock; scalar_t__ sk_user_data; } ;
struct kcm_psock {int strp; } ;


 scalar_t__ FUNC_0 (struct kcm_psock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0)
{
 struct kcm_psock *VAR_1;

 FUNC_1(&VAR_0->sk_callback_lock);

 VAR_1 = (struct kcm_psock *)VAR_0->sk_user_data;
 if (FUNC_0(VAR_1))
  FUNC_3(&VAR_1->strp);

 FUNC_2(&VAR_0->sk_callback_lock);
}
