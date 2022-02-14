
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_pipebase {scalar_t__ outstate; TYPE_1__* vfptr; } ;
struct nn_pipe {int dummy; } ;
struct nn_msg {int dummy; } ;
struct TYPE_2__ {int (* send ) (struct nn_pipebase*,struct nn_msg*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct nn_pipebase*,struct nn_msg*) ;

int FUNC_4 (struct nn_pipe *VAR_5, struct nn_msg *VAR_6)
{
    int VAR_7;
    struct nn_pipebase *VAR_8;

    VAR_8 = (struct nn_pipebase*) VAR_5;
    FUNC_1 (VAR_8->outstate == VAR_1);
    VAR_8->outstate = VAR_2;
    VAR_7 = VAR_8->vfptr->send (VAR_8, VAR_6);
    FUNC_0 (VAR_7 >= 0, -VAR_7);
    if (FUNC_2 (VAR_8->outstate == VAR_3)) {
        VAR_8->outstate = VAR_1;
        return VAR_7;
    }
    FUNC_1 (VAR_8->outstate == VAR_2);
    VAR_8->outstate = VAR_0;
    return VAR_7 | VAR_4;
}
