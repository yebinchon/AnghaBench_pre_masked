
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int Zoom; int hSelf; TYPE_2__* MainWnd; struct TYPE_10__* Next; TYPE_1__* OpenInfo; int * hDCMem; } ;
struct TYPE_9__ {TYPE_3__* ImageEditors; } ;
struct TYPE_8__ {scalar_t__ CreateNew; } ;
typedef TYPE_3__* PEDIT_WND_INFO ;
typedef int HDC ;
typedef int BOOL ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static BOOL
FUNC_8(PEDIT_WND_INFO VAR_1)
{


    VAR_1->Zoom = 100;

    if (VAR_1->OpenInfo != ((void*)0))
    {
        HDC VAR_2;

        if (VAR_1->hDCMem)
        {
            FUNC_1(VAR_1->hDCMem);
            VAR_1->hDCMem = ((void*)0);
        }

        VAR_2 = FUNC_3(VAR_1->hSelf);
        VAR_1->hDCMem = FUNC_0(VAR_2);
        FUNC_7(VAR_1->hSelf, VAR_2);

        if (VAR_1->OpenInfo->CreateNew)
        {
            FUNC_5(VAR_1);
        }
        else
        {
            FUNC_6(VAR_1);
        }

        VAR_1->OpenInfo = ((void*)0);
    }

    FUNC_2(VAR_1);


    VAR_1->Next = VAR_1->MainWnd->ImageEditors;
    VAR_1->MainWnd->ImageEditors = VAR_1;

    FUNC_4(VAR_1->hSelf,
                   ((void*)0),
                   VAR_0);


    return VAR_0;
}
