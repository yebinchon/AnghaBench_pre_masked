
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {struct TYPE_5__* Next; TYPE_1__* MainWnd; int pBits; int pbmi; int hDCMem; } ;
struct TYPE_4__ {TYPE_2__* ImageEditors; } ;
typedef TYPE_2__* PEDIT_WND_INFO ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static VOID
FUNC_2(PEDIT_WND_INFO VAR_1)
{
    PEDIT_WND_INFO *VAR_2;
    PEDIT_WND_INFO VAR_3;

    FUNC_0(VAR_1->hDCMem);


    FUNC_1(VAR_0,
             0,
             VAR_1->pbmi);
    FUNC_1(VAR_0,
             0,
             VAR_1->pBits);


    VAR_2 = &VAR_1->MainWnd->ImageEditors;
    VAR_3 = VAR_1->MainWnd->ImageEditors;
    do
    {
        if (VAR_3 == VAR_1)
        {
            *VAR_2 = VAR_1->Next;
            break;
        }
        VAR_2 = &VAR_3->Next;
        VAR_3 = VAR_3->Next;
    } while (VAR_3 != ((void*)0));
}
