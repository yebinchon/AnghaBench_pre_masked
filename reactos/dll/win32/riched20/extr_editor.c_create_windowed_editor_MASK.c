
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int hwndParent; } ;
struct TYPE_6__ {int exStyleFlags; int styleFlags; int hwndParent; int hWnd; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef int LONG_PTR ;
typedef int ITextHost ;
typedef int HWND ;
typedef TYPE_2__ CREATESTRUCTW ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,TYPE_2__*,int ) ;
 TYPE_1__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_5(HWND VAR_5, CREATESTRUCTW *VAR_6, BOOL VAR_7)
{
    ITextHost *VAR_8 = FUNC_2( VAR_5, VAR_6, VAR_7 );
    ME_TextEditor *VAR_9;

    if (!VAR_8) return VAR_1;

    VAR_9 = FUNC_3( VAR_8, VAR_7 );
    if (!VAR_9)
    {
        FUNC_1( VAR_8 );
        return VAR_1;
    }

    VAR_9->exStyleFlags = FUNC_0( VAR_5, VAR_2 );
    VAR_9->styleFlags |= FUNC_0( VAR_5, VAR_3 ) & VAR_0;
    VAR_9->hWnd = VAR_5;
    VAR_9->hwndParent = VAR_6->hwndParent;

    FUNC_4( VAR_5, 0, (LONG_PTR)VAR_9 );

    return VAR_4;
}
