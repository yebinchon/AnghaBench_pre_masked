
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_optset {int * vfptr; } ;
struct nn_tcp_optset {struct nn_optset base; scalar_t__ nodelay; } ;


 int FUNC_0 (struct nn_tcp_optset*) ;
 struct nn_tcp_optset* FUNC_1 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static struct nn_optset *FUNC_2 ()
{
    struct nn_tcp_optset *VAR_1;

    VAR_1 = FUNC_1 (sizeof (struct nn_tcp_optset), "optset (tcp)");
    FUNC_0 (VAR_1);
    VAR_1->base.vfptr = &VAR_0;


    VAR_1->nodelay = 0;

    return &VAR_1->base;
}
