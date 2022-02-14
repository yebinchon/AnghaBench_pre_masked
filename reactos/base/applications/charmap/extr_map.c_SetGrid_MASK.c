
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_9__ {size_t left; size_t top; size_t right; size_t bottom; } ;
struct TYPE_6__ {size_t cx; size_t cy; } ;
struct TYPE_8__ {TYPE_2__** Cells; TYPE_1__ CellSize; } ;
struct TYPE_7__ {int CellInt; TYPE_5__ CellExt; } ;
typedef TYPE_3__* PMAP ;
typedef size_t INT ;


 int FUNC_0 (int *,TYPE_5__*) ;
 int FUNC_1 (int *,int,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static
VOID
FUNC_2(PMAP VAR_2)
{
    INT VAR_3, VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
        VAR_2->Cells[VAR_4][VAR_3].CellExt.left = VAR_3 * VAR_2->CellSize.cx + 1;
        VAR_2->Cells[VAR_4][VAR_3].CellExt.top = VAR_4 * VAR_2->CellSize.cy + 1;
        VAR_2->Cells[VAR_4][VAR_3].CellExt.right = (VAR_3 + 1) * VAR_2->CellSize.cx + 2;
        VAR_2->Cells[VAR_4][VAR_3].CellExt.bottom = (VAR_4 + 1) * VAR_2->CellSize.cy + 2;

        FUNC_0(&VAR_2->Cells[VAR_4][VAR_3].CellInt,
                 &VAR_2->Cells[VAR_4][VAR_3].CellExt);

        FUNC_1(&VAR_2->Cells[VAR_4][VAR_3].CellInt,
                    -1,
                    -1);
    }
}
