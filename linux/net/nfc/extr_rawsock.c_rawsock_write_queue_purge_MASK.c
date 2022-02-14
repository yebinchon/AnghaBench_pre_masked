
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct sock {TYPE_2__ sk_write_queue; } ;
struct TYPE_3__ {int tx_work_scheduled; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (char*,struct sock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0)
{
 FUNC_2("sk=%p\n", VAR_0);

 FUNC_3(&VAR_0->sk_write_queue.lock);
 FUNC_0(&VAR_0->sk_write_queue);
 FUNC_1(VAR_0)->tx_work_scheduled = 0;
 FUNC_4(&VAR_0->sk_write_queue.lock);
}
