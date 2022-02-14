
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;

type_t *FUNC_1(void)
{
    static type_t *VAR_1 = ((void*)0);
    if (!VAR_1)
        VAR_1 = FUNC_0(VAR_0);
    return VAR_1;
}
