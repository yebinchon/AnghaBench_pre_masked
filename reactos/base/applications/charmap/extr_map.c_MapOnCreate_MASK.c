
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int cx; int cy; } ;
struct TYPE_10__ {int cx; int cy; } ;
struct TYPE_13__ {void* hParent; int * pActiveCell; TYPE_2__ ClientSize; TYPE_1__ CellSize; void* hMapWnd; } ;
struct TYPE_12__ {int right; int bottom; } ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__* PMAP ;
typedef int MAP ;
typedef void* HWND ;
typedef int DWORD_PTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (void*,TYPE_3__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_4__* FUNC_3 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*,int ,int ,int ) ;
 int FUNC_7 (void*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (TYPE_4__*,int) ;

__attribute__((used)) static
BOOL
FUNC_9(PMAP VAR_5,
            HWND VAR_6,
            HWND VAR_7)
{
    RECT VAR_8;
    BOOL VAR_9 = VAR_0;

    VAR_5 = FUNC_3(FUNC_2(),
                        0,
                        sizeof(MAP));
    if (VAR_5)
    {
        FUNC_5(0);
        FUNC_7(VAR_6,
                          0,
                          (DWORD_PTR)VAR_5);
        if (FUNC_1() == 0)
        {
            FUNC_8(VAR_5,
                       sizeof(MAP));

            VAR_5->hMapWnd = VAR_6;
            VAR_5->hParent = VAR_7;

            FUNC_0(VAR_6, &VAR_8);
            VAR_5->ClientSize.cx = VAR_8.right;
            VAR_5->ClientSize.cy = VAR_8.bottom;
            VAR_5->CellSize.cx = VAR_5->ClientSize.cx / VAR_3;
            VAR_5->CellSize.cy = VAR_5->ClientSize.cy / VAR_4;

            VAR_5->pActiveCell = ((void*)0);

            FUNC_4(VAR_5);

            FUNC_6(VAR_5->hParent, VAR_1, 0, VAR_2);

            VAR_9 = VAR_2;
        }
    }

    return VAR_9;
}
