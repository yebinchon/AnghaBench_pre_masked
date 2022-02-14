
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {void** Name11_12; void** Name5_10; void** Name0_4; } ;
typedef TYPE_1__* PLFN_DIRENTRY ;


 int FUNC_0 (TYPE_1__*,int ) ;
 void* FUNC_1 (void*) ;
 int VAR_0 ;

VOID FUNC_2(PLFN_DIRENTRY VAR_1)
{
    int VAR_2;
    FUNC_0(VAR_1, VAR_0);
    for(VAR_2 = 0; VAR_2 < 5; VAR_2++)
        VAR_1->Name0_4[VAR_2] = FUNC_1(VAR_1->Name0_4[VAR_2]);
    for(VAR_2 = 0; VAR_2 < 6; VAR_2++)
        VAR_1->Name5_10[VAR_2] = FUNC_1(VAR_1->Name5_10[VAR_2]);
    for(VAR_2 = 0; VAR_2 < 2; VAR_2++)
        VAR_1->Name11_12[VAR_2] = FUNC_1(VAR_1->Name11_12[VAR_2]);
}
