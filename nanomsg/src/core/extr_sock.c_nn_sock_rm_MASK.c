
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nn_sock {TYPE_2__* sockbase; } ;
struct nn_pipe {int dummy; } ;
struct TYPE_4__ {TYPE_1__* vfptr; } ;
struct TYPE_3__ {int (* rm ) (TYPE_2__*,struct nn_pipe*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nn_sock*,int ,int) ;
 int FUNC_1 (TYPE_2__*,struct nn_pipe*) ;

void FUNC_2 (struct nn_sock *VAR_1, struct nn_pipe *VAR_2)
{
    VAR_1->sockbase->vfptr->rm (VAR_1->sockbase, VAR_2);
    FUNC_0 (VAR_1, VAR_0, -1);
}
