
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {int EntryNumber; } ;


 int FUNC_0 (int ,TYPE_1__*,int *) ;
 size_t FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
    UINT VAR_1;

    for (VAR_1 = 0; VAR_1 < FUNC_1(VAR_0); ++VAR_1)
    {
        FUNC_0(VAR_0[VAR_1].EntryNumber, &VAR_0[VAR_1], ((void*)0));
    }
}
