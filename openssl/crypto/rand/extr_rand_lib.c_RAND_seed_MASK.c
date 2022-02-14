
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* seed ) (void const*,int) ;} ;
typedef TYPE_1__ RAND_METHOD ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (void const*,int) ;

void FUNC_2(const void *VAR_0, int VAR_1)
{
    const RAND_METHOD *VAR_2 = FUNC_0();

    if (VAR_2->seed != ((void*)0))
        VAR_2->seed(VAR_0, VAR_1);
}
