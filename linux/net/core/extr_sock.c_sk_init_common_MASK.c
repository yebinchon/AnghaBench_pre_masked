
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct sock {size_t sk_family; int sk_callback_lock; TYPE_1__ sk_error_queue; TYPE_1__ sk_write_queue; TYPE_1__ sk_receive_queue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_8)
{
 FUNC_2(&VAR_8->sk_receive_queue);
 FUNC_2(&VAR_8->sk_write_queue);
 FUNC_2(&VAR_8->sk_error_queue);

 FUNC_1(&VAR_8->sk_callback_lock);
 FUNC_0(&VAR_8->sk_receive_queue.lock,
   VAR_6 + VAR_8->sk_family,
   VAR_4[VAR_8->sk_family]);
 FUNC_0(&VAR_8->sk_write_queue.lock,
   VAR_7 + VAR_8->sk_family,
   VAR_5[VAR_8->sk_family]);
 FUNC_0(&VAR_8->sk_error_queue.lock,
   VAR_1 + VAR_8->sk_family,
   VAR_3[VAR_8->sk_family]);
 FUNC_0(&VAR_8->sk_callback_lock,
   VAR_0 + VAR_8->sk_family,
   VAR_2[VAR_8->sk_family]);
}
