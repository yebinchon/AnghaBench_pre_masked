
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_10__ {int hLrgWnd; int hParent; int hMapWnd; TYPE_1__* pActiveCell; } ;
struct TYPE_9__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_8__ {int CellExt; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__* PMAP ;
typedef int BOOL ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int ,int ,int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int *,int ,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static
BOOL
FUNC_4(PMAP VAR_10)
{
    RECT VAR_11;

    FUNC_0(&VAR_11,
             &VAR_10->pActiveCell->CellExt);

    FUNC_3(VAR_10->hMapWnd,
                    VAR_10->hParent,
                    (VOID*)&VAR_11,
                    2);

    FUNC_2(&VAR_11,
                VAR_5 - VAR_4,
                VAR_7 - VAR_6);

    VAR_10->hLrgWnd = FUNC_1(0,
                                       VAR_9,
                                       ((void*)0),
                                       VAR_2 | VAR_3,
                                       VAR_11.left,
                                       VAR_11.top,
                                       VAR_11.right - VAR_11.left,
                                       VAR_11.bottom - VAR_11.top,
                                       VAR_10->hParent,
                                       ((void*)0),
                                       VAR_8,
                                       VAR_10);
    if (!VAR_10->hLrgWnd)
        return VAR_0;

    return VAR_1;
}
