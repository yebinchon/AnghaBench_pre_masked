
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {int hMainWnd; scalar_t__ bMinOnRun; } ;
struct TYPE_4__ {int nCmdShow; int hWorkDir; int hCmdLine; } ;
typedef TYPE_1__ PROGRAM ;


 int FUNC_0 (int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (int *,int *,int ,int *,int ,int ) ;

VOID FUNC_2(PROGRAM* VAR_1)
{


    FUNC_1(((void*)0), ((void*)0), VAR_1->hCmdLine, ((void*)0), VAR_1->hWorkDir, VAR_1->nCmdShow);

    if (VAR_0.bMinOnRun)
        FUNC_0(VAR_0.hMainWnd);
}
