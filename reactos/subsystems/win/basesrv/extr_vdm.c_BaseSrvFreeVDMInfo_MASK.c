
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {struct TYPE_4__* Reserved; struct TYPE_4__* Title; struct TYPE_4__* Desktop; struct TYPE_4__* Env; struct TYPE_4__* CurDirectory; struct TYPE_4__* PifFile; struct TYPE_4__* AppName; struct TYPE_4__* CmdLine; } ;
typedef TYPE_1__* PVDM_COMMAND_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;

VOID FUNC_1(PVDM_COMMAND_INFO VAR_1)
{

    if (VAR_1->CmdLine != ((void*)0)) FUNC_0(VAR_0, 0, VAR_1->CmdLine);
    if (VAR_1->AppName != ((void*)0)) FUNC_0(VAR_0, 0, VAR_1->AppName);
    if (VAR_1->PifFile != ((void*)0)) FUNC_0(VAR_0, 0, VAR_1->PifFile);
    if (VAR_1->CurDirectory != ((void*)0)) FUNC_0(VAR_0, 0, VAR_1->CurDirectory);
    if (VAR_1->Env != ((void*)0)) FUNC_0(VAR_0, 0, VAR_1->Env);
    if (VAR_1->Desktop != ((void*)0)) FUNC_0(VAR_0, 0, VAR_1->Desktop);
    if (VAR_1->Title != ((void*)0)) FUNC_0(VAR_0, 0, VAR_1->Title);
    if (VAR_1->Reserved != ((void*)0)) FUNC_0(VAR_0, 0, VAR_1->Reserved);


    FUNC_0(VAR_0, 0, VAR_1);
}
