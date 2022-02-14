
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t USHORT ;
struct TYPE_5__ {scalar_t__ Allocated; } ;
typedef size_t* PUSHORT ;
typedef TYPE_1__* PEMS_HANDLE ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static PEMS_HANDLE FUNC_1(PUSHORT VAR_2)
{
    PEMS_HANDLE VAR_3;
    USHORT VAR_4;


    for (VAR_4 = 1; VAR_4 < FUNC_0(VAR_0); VAR_4++)
    {
        VAR_3 = &VAR_0[VAR_4];
        if (!VAR_3->Allocated)
        {
            *VAR_2 = VAR_4;
            VAR_3->Allocated = VAR_1;
            return VAR_3;
        }
    }

    return ((void*)0);
}
