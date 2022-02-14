
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int focus_item; int self; int horz_pos; scalar_t__ font; int in_focus; int caret_on; } ;
typedef int RECT ;
typedef TYPE_1__ LB_DESCR ;
typedef scalar_t__ HFONT ;
typedef int HDC ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int *,int,int ,int) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_10( LB_DESCR *VAR_3, BOOL VAR_4 )
{
    HDC VAR_5;
    RECT VAR_6;
    HFONT VAR_7 = 0;


    if (!FUNC_3(VAR_3->self)) return;

    if (VAR_3->focus_item == -1) return;
    if (!VAR_3->caret_on || !VAR_3->in_focus) return;

    if (FUNC_4( VAR_3, VAR_3->focus_item, &VAR_6 ) != 1) return;
    if (!(VAR_5 = FUNC_0( VAR_3->self, 0, VAR_1 ))) return;
    if (VAR_3->font) VAR_7 = FUNC_7( VAR_5, VAR_3->font );
    if (!FUNC_2(VAR_3->self))
        FUNC_8( VAR_5, FUNC_1( VAR_0 ) );
    FUNC_9( VAR_5, VAR_3->horz_pos, 0, ((void*)0) );
    FUNC_5( VAR_3, VAR_5, &VAR_6, VAR_3->focus_item, VAR_2, !VAR_4 );
    if (VAR_7) FUNC_7( VAR_5, VAR_7 );
    FUNC_6( VAR_3->self, VAR_5 );
}
