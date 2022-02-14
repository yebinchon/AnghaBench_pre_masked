
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int IOleCommandTarget_iface; } ;
struct TYPE_9__ {TYPE_1__ basedoc; int hwnd; scalar_t__ hostui; } ;
struct TYPE_8__ {int y; int x; } ;
typedef TYPE_2__ POINT ;
typedef int IUnknown ;
typedef int IDispatch ;
typedef TYPE_3__ HTMLDocumentObj ;
typedef int HMENU ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,TYPE_2__*,int *,int *) ;
 int FUNC_3 (int *,int *,scalar_t__,int ,int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int ,int,int ,int ,int ,int ,int *) ;
 int FUNC_7 () ;

void FUNC_8(HTMLDocumentObj *VAR_6, DWORD VAR_7, POINT *VAR_8, IDispatch *VAR_9)
{
    HMENU VAR_10, VAR_11;
    DWORD VAR_12;

    if(VAR_6->hostui && VAR_2 == FUNC_2(VAR_6->hostui,
            VAR_7, VAR_8, (IUnknown*)&VAR_6->basedoc.IOleCommandTarget_iface, VAR_9))
        return;

    VAR_10 = FUNC_4(FUNC_7(), FUNC_5(VAR_1));
    VAR_11 = FUNC_1(VAR_10, VAR_7);

    VAR_12 = FUNC_6(VAR_11, VAR_3 | VAR_5 | VAR_4,
            VAR_8->x, VAR_8->y, 0, VAR_6->hwnd, ((void*)0));
    FUNC_0(VAR_10);

    if(VAR_12)
        FUNC_3(&VAR_6->basedoc.IOleCommandTarget_iface, &VAR_0, VAR_12, 0,
                ((void*)0), ((void*)0));
}
