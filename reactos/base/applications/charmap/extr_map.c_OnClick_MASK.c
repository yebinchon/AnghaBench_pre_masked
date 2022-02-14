
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* WORD ;
typedef int VOID ;
struct TYPE_10__ {TYPE_1__* pActiveCell; int * hLrgWnd; TYPE_1__** Cells; int hMapWnd; } ;
struct TYPE_9__ {void* y; void* x; } ;
struct TYPE_8__ {void* bLarge; void* bActive; int CellInt; } ;
typedef TYPE_2__ POINT ;
typedef TYPE_3__* PMAP ;
typedef size_t INT ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 void* VAR_0 ;
 int FUNC_2 (int ,int *,void*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_2__) ;
 void* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static
VOID
FUNC_5(PMAP VAR_4,
        WORD VAR_5,
        WORD VAR_6)
{
    POINT VAR_7;
    INT VAR_8, VAR_9;

    VAR_7.x = VAR_5;
    VAR_7.y = VAR_6;

    for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
    {
        if (FUNC_4(&VAR_4->Cells[VAR_9][VAR_8].CellInt,
                     VAR_7))
        {

            if (!VAR_4->Cells[VAR_9][VAR_8].bActive)
            {

                if (VAR_4->pActiveCell)
                {


                    if (!VAR_4->pActiveCell->bLarge)
                    {
                        FUNC_2(VAR_4->hMapWnd,
                                       &VAR_4->pActiveCell->CellInt,
                                       VAR_1);
                    }

                    VAR_4->pActiveCell->bActive = VAR_0;
                    VAR_4->pActiveCell->bLarge = VAR_0;
                }


                VAR_4->pActiveCell = &VAR_4->Cells[VAR_9][VAR_8];
                VAR_4->pActiveCell->bActive = VAR_1;
                VAR_4->pActiveCell->bLarge = VAR_1;
                if (VAR_4->hLrgWnd)
                    FUNC_3(VAR_4);
                else
                    FUNC_0(VAR_4);
            }
            else
            {

                if (VAR_4->pActiveCell->bLarge)
                {
                    FUNC_1(VAR_4->hLrgWnd);
                    VAR_4->hLrgWnd = ((void*)0);
                }
                else
                {
                    FUNC_0(VAR_4);
                }

                VAR_4->pActiveCell->bLarge = (VAR_4->pActiveCell->bLarge) ? VAR_0 : VAR_1;
            }

            break;
        }
    }
}
