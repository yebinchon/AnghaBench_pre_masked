
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nn_sock {TYPE_2__* sockbase; } ;
struct nn_pipe {int dummy; } ;
struct TYPE_4__ {TYPE_1__* vfptr; } ;
struct TYPE_3__ {int (* add ) (TYPE_2__*,struct nn_pipe*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nn_sock*,int ,int) ;
 int FUNC_2 (TYPE_2__*,struct nn_pipe*) ;

int FUNC_3 (struct nn_sock *VAR_1, struct nn_pipe *VAR_2)
{
    int VAR_3;

    VAR_3 = VAR_1->sockbase->vfptr->add (VAR_1->sockbase, VAR_2);
    if (FUNC_0 (VAR_3 >= 0)) {
        FUNC_1 (VAR_1, VAR_0, 1);
    }
    return VAR_3;
}
