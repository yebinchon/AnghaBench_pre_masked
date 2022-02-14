
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_write_queue; } ;
struct TYPE_4__ {int cork; } ;
struct TYPE_3__ {int cork; } ;


 int FUNC_0 (struct sock*,int *,int *,int *) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;

void FUNC_3(struct sock *VAR_0)
{
 FUNC_0(VAR_0, &VAR_0->sk_write_queue,
       &FUNC_2(VAR_0)->cork, &FUNC_1(VAR_0)->cork);
}
