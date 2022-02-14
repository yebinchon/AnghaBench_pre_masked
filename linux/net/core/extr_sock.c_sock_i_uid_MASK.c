
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_callback_lock; scalar_t__ sk_socket; } ;
typedef int kuid_t ;
struct TYPE_2__ {int i_uid; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

kuid_t FUNC_3(struct sock *VAR_1)
{
 kuid_t VAR_2;

 FUNC_1(&VAR_1->sk_callback_lock);
 VAR_2 = VAR_1->sk_socket ? FUNC_0(VAR_1->sk_socket)->i_uid : VAR_0;
 FUNC_2(&VAR_1->sk_callback_lock);
 return VAR_2;
}
