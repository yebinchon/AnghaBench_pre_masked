
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_5__ {scalar_t__ helper_pid; int pipe_in; int pipe_out; struct TYPE_5__* session_key; struct TYPE_5__* com_buf; } ;
typedef TYPE_1__* PNegoHelper ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,int *,int ) ;

void FUNC_5(PNegoHelper VAR_2)
{

    FUNC_2("Killing helper %p\n", VAR_2);
    if(VAR_2 == ((void*)0))
        return;

    FUNC_1(FUNC_0(), 0, VAR_2->com_buf);
    FUNC_1(FUNC_0(), 0, VAR_2->session_key);


    FUNC_3(VAR_2->pipe_out);
    FUNC_3(VAR_2->pipe_in);
    FUNC_1(FUNC_0(), 0, VAR_2);
}
