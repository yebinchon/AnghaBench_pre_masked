
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {scalar_t__ ServerEvent; scalar_t__ ProcessHandle; scalar_t__ CurDirsLength; struct TYPE_4__* CurrentDirs; } ;
typedef TYPE_1__* PVDM_CONSOLE_RECORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;

VOID FUNC_2(PVDM_CONSOLE_RECORD VAR_1)
{
    if (VAR_1->CurrentDirs != ((void*)0))
    {

        FUNC_1(VAR_0, 0, VAR_1->CurrentDirs);
        VAR_1->CurrentDirs = ((void*)0);
        VAR_1->CurDirsLength = 0;
    }


    if (VAR_1->ProcessHandle)
        FUNC_0(VAR_1->ProcessHandle);


    if (VAR_1->ServerEvent)
        FUNC_0(VAR_1->ServerEvent);



    FUNC_1(VAR_0, 0, VAR_1);

}
