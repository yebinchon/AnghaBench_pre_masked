
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_13__ {scalar_t__ hIcon; int hWnd; } ;
struct TYPE_12__ {TYPE_1__* hPrograms; int hListView; TYPE_3__* hActiveProgram; } ;
struct TYPE_11__ {struct TYPE_11__* hWorkDir; struct TYPE_11__* hIconFile; struct TYPE_11__* hCmdLine; struct TYPE_11__* hName; struct TYPE_11__* Tags; TYPE_4__* hGroup; TYPE_2__* hPrior; TYPE_1__* hNext; int iItem; } ;
struct TYPE_10__ {TYPE_1__* hNext; } ;
struct TYPE_9__ {TYPE_2__* hPrior; } ;
typedef TYPE_3__ PROGRAM ;
typedef TYPE_4__ PROGGROUP ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 TYPE_5__* VAR_1 ;

VOID FUNC_5(PROGRAM* VAR_2, BOOL VAR_3)
{
    PROGGROUP* VAR_4;

    VAR_4 = VAR_2->hGroup;
    if (VAR_2->hGroup->hActiveProgram == VAR_2)
        VAR_4->hActiveProgram = ((void*)0);

    FUNC_4(VAR_4->hListView, VAR_0, VAR_2->iItem, 0);

    if (VAR_2->hPrior)
        VAR_2->hPrior->hNext = VAR_2->hNext;
    else
        VAR_2->hGroup->hPrograms = VAR_2->hNext;

    if (VAR_2->hNext)
        VAR_2->hNext->hPrior = VAR_2->hPrior;

    if (VAR_3)
        FUNC_3(VAR_2->hGroup);







    if (VAR_2->Tags)
        FUNC_2(VAR_2->Tags);
    FUNC_2(VAR_2->hName);
    FUNC_2(VAR_2->hCmdLine);
    FUNC_2(VAR_2->hIconFile);
    FUNC_2(VAR_2->hWorkDir);
    FUNC_2(VAR_2);
}
