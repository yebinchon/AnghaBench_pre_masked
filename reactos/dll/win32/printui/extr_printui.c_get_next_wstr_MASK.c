
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t next_arg; size_t argc; scalar_t__* pNextCharW; scalar_t__** argv; } ;
typedef TYPE_1__ context_t ;
typedef scalar_t__* LPWSTR ;



__attribute__((used)) static LPWSTR FUNC_0(context_t * VAR_0)
{
    LPWSTR VAR_1;

    VAR_1 = VAR_0->pNextCharW;
    if (VAR_1 && VAR_1[0]) {
        VAR_0->pNextCharW = ((void*)0);
        return VAR_1;
    }


    if (VAR_0->next_arg < VAR_0->argc) {
        VAR_1 = VAR_0->argv[VAR_0->next_arg];
        VAR_0->next_arg++;
        VAR_0->pNextCharW = ((void*)0);
        return VAR_1;
    }
    return ((void*)0);
}
