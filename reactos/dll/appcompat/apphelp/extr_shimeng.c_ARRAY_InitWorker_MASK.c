
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ItemSize__; scalar_t__ MaxSize__; scalar_t__ Size__; int * Data__; } ;
typedef TYPE_1__* PARRAY ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;

__attribute__((used)) static inline BOOL FUNC_0(PARRAY VAR_1, DWORD VAR_2)
{
    VAR_1->Data__ = ((void*)0);
    VAR_1->Size__ = VAR_1->MaxSize__ = 0;
    VAR_1->ItemSize__ = VAR_2;

    return VAR_0;
}
