
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_optset {int * vfptr; } ;
struct nn_ipc_optset {int outbuffersz; int inbuffersz; struct nn_optset base; int * sec_attr; } ;


 int FUNC_0 (struct nn_ipc_optset*) ;
 struct nn_ipc_optset* FUNC_1 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static struct nn_optset *FUNC_2 ()
{
    struct nn_ipc_optset *VAR_1;

    VAR_1 = FUNC_1 (sizeof (struct nn_ipc_optset), "optset (ipc)");
    FUNC_0 (VAR_1);
    VAR_1->base.vfptr = &VAR_0;


    VAR_1->sec_attr = ((void*)0);
    VAR_1->outbuffersz = 4096;
    VAR_1->inbuffersz = 4096;

    return &VAR_1->base;
}
