
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {int cy; } ;
struct TYPE_10__ {int iYStart; int * hLrgWnd; int hMapWnd; TYPE_1__ CellSize; int NumRows; } ;
struct TYPE_9__ {int top; int bottom; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__* PMAP ;
typedef int INT ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int *,int ) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int,TYPE_2__*,TYPE_2__*,int *,int *,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static
VOID
FUNC_8(PMAP VAR_6,
          INT VAR_7,
          INT VAR_8)
{
    INT VAR_9, VAR_10 = VAR_6->iYStart;

    switch (VAR_7)
    {
        case 131:
            VAR_6->iYStart -= 1;
            break;

        case 132:
            VAR_6->iYStart += 1;
            break;

        case 129:
            VAR_6->iYStart -= VAR_5;
            break;

        case 130:
            VAR_6->iYStart += VAR_5;
            break;

        case 128:
            VAR_6->iYStart = VAR_8;
            break;

       default:
            break;
       }

    VAR_6->iYStart = FUNC_6(0, VAR_6->iYStart);
    VAR_6->iYStart = FUNC_7(VAR_6->iYStart, VAR_6->NumRows);

    VAR_9 = VAR_10 - VAR_6->iYStart;
    if (VAR_9)
    {
        if (VAR_6->hLrgWnd != ((void*)0))
        {
            FUNC_4(VAR_6->hLrgWnd, VAR_1);
        }

        FUNC_3(VAR_6->hMapWnd,
                     VAR_0,
                     VAR_6->iYStart,
                     VAR_4);

        if (FUNC_5(VAR_9) < VAR_5)
        {
            RECT VAR_11;
            FUNC_0(VAR_6->hMapWnd, &VAR_11);
            VAR_11.top += 2;
            VAR_11.bottom -= 2;
            FUNC_2(VAR_6->hMapWnd,
                           0,
                           VAR_9 * VAR_6->CellSize.cy,
                           &VAR_11,
                           &VAR_11,
                           ((void*)0),
                           ((void*)0),
                           VAR_2);
        }
        else
        {
            FUNC_1(VAR_6->hMapWnd,
                           ((void*)0),
                           VAR_4);
        }

        if (VAR_6->hLrgWnd != ((void*)0))
        {
            FUNC_4(VAR_6->hLrgWnd, VAR_3);
        }
    }
}
