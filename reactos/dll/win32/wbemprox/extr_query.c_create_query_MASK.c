
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query {int refs; int mem; } ;


 struct query* FUNC_0 (int) ;
 int FUNC_1 (int *) ;

struct query *FUNC_2(void)
{
    struct query *VAR_0;

    if (!(VAR_0 = FUNC_0( sizeof(*VAR_0) ))) return ((void*)0);
    FUNC_1( &VAR_0->mem );
    VAR_0->refs = 1;
    return VAR_0;
}
