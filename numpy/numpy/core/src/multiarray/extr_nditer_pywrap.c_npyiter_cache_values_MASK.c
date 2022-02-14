
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int writeflags; int readflags; int * innerloopsizeptr; int * innerstrides; int operands; int dtypes; int dataptrs; int * get_multi_index; int * iternext; int * iter; } ;
typedef int NpyIter ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(NewNpyArrayIterObject *VAR_0)
{
    NpyIter *VAR_1 = VAR_0->iter;


    VAR_0->iternext = FUNC_5(VAR_1, ((void*)0));
    if (VAR_0->iternext == ((void*)0)) {
        return -1;
    }

    if (FUNC_11(VAR_1) && !FUNC_9(VAR_1)) {
        VAR_0->get_multi_index = FUNC_2(VAR_1, ((void*)0));
    }
    else {
        VAR_0->get_multi_index = ((void*)0);
    }


    VAR_0->dataptrs = FUNC_0(VAR_1);
    VAR_0->dtypes = FUNC_1(VAR_1);
    VAR_0->operands = FUNC_6(VAR_1);

    if (FUNC_10(VAR_1)) {
        VAR_0->innerstrides = FUNC_4(VAR_1);
        VAR_0->innerloopsizeptr = FUNC_3(VAR_1);
    }
    else {
        VAR_0->innerstrides = ((void*)0);
        VAR_0->innerloopsizeptr = ((void*)0);
    }


    FUNC_7(VAR_1, VAR_0->readflags);
    FUNC_8(VAR_1, VAR_0->writeflags);
    return 0;
}
