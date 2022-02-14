
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * data; scalar_t__ is_mapped_file; } ;
typedef int HRESULT ;
typedef scalar_t__ HMODULE ;
typedef int BYTE ;
typedef TYPE_1__ ASSEMBLY ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

HRESULT FUNC_5(ASSEMBLY **VAR_2, HMODULE VAR_3)
{
    ASSEMBLY *VAR_4;
    HRESULT VAR_5;

    *VAR_2 = ((void*)0);

    VAR_4 = FUNC_1(FUNC_0(), VAR_1, sizeof(ASSEMBLY));
    if (!VAR_4)
        return VAR_0;

    VAR_4->is_mapped_file = 0;

    VAR_4->data = (BYTE*)VAR_3;

    VAR_5 = FUNC_4(VAR_4);
    if (FUNC_2(VAR_5))
        *VAR_2 = VAR_4;
    else
        FUNC_3(VAR_4);

    return VAR_5;
}
