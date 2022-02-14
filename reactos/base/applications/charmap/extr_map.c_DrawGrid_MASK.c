
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_11__ {int bottom; int right; int top; int left; } ;
struct TYPE_10__ {int hdc; int rcPaint; } ;
struct TYPE_9__ {TYPE_4__ CellExt; } ;
struct TYPE_8__ {TYPE_2__* pActiveCell; TYPE_2__** Cells; } ;
typedef int RECT ;
typedef TYPE_1__* PMAP ;
typedef TYPE_2__* PCELL ;
typedef TYPE_3__ PAINTSTRUCT ;
typedef size_t INT ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int *,TYPE_4__*) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static
VOID
FUNC_3(PMAP VAR_2,
         PAINTSTRUCT *VAR_3)
{
    INT VAR_4, VAR_5;
    RECT VAR_6;
    PCELL VAR_7;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    {
        VAR_7 = &VAR_2->Cells[VAR_5][VAR_4];

        if (!FUNC_1(&VAR_6,
                           &VAR_3->rcPaint,
                           &VAR_7->CellExt))
        {
            continue;
        }

        FUNC_2(VAR_3->hdc,
                  VAR_7->CellExt.left,
                  VAR_7->CellExt.top,
                  VAR_7->CellExt.right,
                  VAR_7->CellExt.bottom);

        if (VAR_2->pActiveCell == VAR_7)
        {
            FUNC_0(VAR_2, VAR_3->hdc);
        }
    }
}
