
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_9__ {int hLrgWnd; int hParent; int hMapWnd; TYPE_1__* pActiveCell; } ;
struct TYPE_8__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_7__ {int CellExt; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__* PMAP ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static
VOID
FUNC_5(PMAP VAR_5)
{
    RECT VAR_6;

    FUNC_0(&VAR_6,
             &VAR_5->pActiveCell->CellExt);

    FUNC_3(VAR_5->hMapWnd,
                    VAR_5->hParent,
                    (VOID*)&VAR_6,
                    2);

    FUNC_1(&VAR_6,
                VAR_2 - VAR_1,
                VAR_4 - VAR_3);

    FUNC_4(VAR_5->hLrgWnd,
               VAR_6.left,
               VAR_6.top,
               VAR_6.right - VAR_6.left,
               VAR_6.bottom - VAR_6.top,
               VAR_0);

    FUNC_2(VAR_5->hLrgWnd,
                   ((void*)0),
                   VAR_0);
}
