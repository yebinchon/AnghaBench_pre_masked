
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_callback_lock; scalar_t__ sk_socket; } ;
struct TYPE_2__ {unsigned long i_ino; } ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

unsigned long FUNC_3(struct sock *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->sk_callback_lock);
 VAR_1 = VAR_0->sk_socket ? FUNC_0(VAR_0->sk_socket)->i_ino : 0;
 FUNC_2(&VAR_0->sk_callback_lock);
 return VAR_1;
}
