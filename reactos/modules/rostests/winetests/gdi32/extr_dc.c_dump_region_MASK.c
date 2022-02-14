
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int left; int top; int right; int bottom; } ;
struct TYPE_7__ {int nCount; } ;
struct TYPE_8__ {TYPE_1__ rdh; scalar_t__ Buffer; } ;
typedef TYPE_2__ RGNDATA ;
typedef TYPE_3__ RECT ;
typedef int HRGN ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,scalar_t__,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(HRGN VAR_0)
{
    DWORD VAR_1, VAR_2;
    RGNDATA *VAR_3 = ((void*)0);
    RECT *VAR_4;

    if (!VAR_0)
    {
        FUNC_4( "(null) region\n" );
        return;
    }
    if (!(VAR_2 = FUNC_1( VAR_0, 0, ((void*)0) ))) return;
    if (!(VAR_3 = FUNC_2( FUNC_0(), 0, VAR_2 ))) return;
    FUNC_1( VAR_0, VAR_2, VAR_3 );
    FUNC_4( "%d rects:", VAR_3->rdh.nCount );
    for (VAR_1 = 0, VAR_4 = (RECT *)VAR_3->Buffer; VAR_1 < VAR_3->rdh.nCount; VAR_1++, VAR_4++)
        FUNC_4( " (%d,%d)-(%d,%d)", VAR_4->left, VAR_4->top, VAR_4->right, VAR_4->bottom );
    FUNC_4( "\n" );
    FUNC_3( FUNC_0(), 0, VAR_3 );
}
