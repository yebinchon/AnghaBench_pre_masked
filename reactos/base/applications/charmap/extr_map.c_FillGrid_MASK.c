
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
typedef int VOID ;
struct TYPE_8__ {int hdc; int rcPaint; } ;
struct TYPE_7__ {int CellInt; scalar_t__ ch; int CellExt; } ;
struct TYPE_6__ {size_t iYStart; TYPE_2__** Cells; scalar_t__* ValidGlyphs; int hFont; } ;
typedef int RECT ;
typedef TYPE_1__* PMAP ;
typedef TYPE_2__* PCELL ;
typedef TYPE_3__ PAINTSTRUCT ;
typedef size_t INT ;
typedef int HFONT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__*,int,int *,int) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static
VOID
FUNC_3(PMAP VAR_5,
         PAINTSTRUCT *VAR_6)
{
    HFONT VAR_7;
    WCHAR VAR_8;
    INT VAR_9, VAR_10;
    RECT VAR_11;
    PCELL VAR_12;
    INT VAR_13, VAR_14;

    VAR_7 = FUNC_2(VAR_6->hdc,
                            VAR_5->hFont);

    VAR_13 = VAR_3 * VAR_5->iYStart;

    VAR_14 = 0;

    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
    {
        VAR_8 = (WCHAR)VAR_5->ValidGlyphs[VAR_13];

        VAR_12 = &VAR_5->Cells[VAR_10][VAR_9];

        if (FUNC_1(&VAR_11,
                            &VAR_6->rcPaint,
                            &VAR_12->CellExt))
        {
            VAR_12->ch = VAR_8;

            FUNC_0(VAR_6->hdc,
                        &VAR_8,
                        1,
                        &VAR_12->CellInt,
                        VAR_0 | VAR_2 | VAR_1);

            VAR_14++;
        }

        VAR_13++;
        VAR_8 = (WCHAR)VAR_13;
    }
    FUNC_2(VAR_6->hdc,
                 VAR_7);
}
