
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_optset {int * vfptr; } ;
struct nn_ws_optset {struct nn_optset base; int msg_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct nn_ws_optset*) ;
 struct nn_ws_optset* FUNC_1 (int,char*) ;
 int VAR_1 ;

__attribute__((used)) static struct nn_optset *FUNC_2 ()
{
    struct nn_ws_optset *VAR_2;

    VAR_2 = FUNC_1 (sizeof (struct nn_ws_optset), "optset (ws)");
    FUNC_0 (VAR_2);
    VAR_2->base.vfptr = &VAR_1;


    VAR_2->msg_type = VAR_0;

    return &VAR_2->base;
}
