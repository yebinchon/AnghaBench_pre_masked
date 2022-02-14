
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_7__ {int right; int left; int top; int bottom; } ;
struct TYPE_6__ {int cx; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ RECT ;
typedef int HPEN ;
typedef int HDC ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int const*,int,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int const*,int,TYPE_1__*,int ) ;
 int FUNC_7 (int ,int,int,int *) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int,int,int *) ;
 int FUNC_10 (int ,int,int ,int *) ;
 int FUNC_11 (int ,int,int) ;
 int FUNC_12 (int ,int ) ;
 int VAR_0 ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static void FUNC_14 (HDC VAR_1, int VAR_2, int VAR_3, const WCHAR *VAR_4, int VAR_5, const RECT *VAR_6)
{
    int VAR_7;
    int VAR_8;
    SIZE VAR_9;
    HPEN VAR_10;
    HPEN VAR_11;



    FUNC_3 (VAR_1, VAR_4, VAR_5, &VAR_9);

    VAR_7 = VAR_2 + VAR_9.cx;



    FUNC_3 (VAR_1, VAR_4, VAR_5+1, &VAR_9);

    VAR_8 = VAR_2 + VAR_9.cx - 1;



    if (VAR_6)
    {
        if (VAR_7 > VAR_6->right || VAR_8 < VAR_6->left ||
            VAR_3 < VAR_6->top || VAR_3 > VAR_6->bottom)
            return;

        if (VAR_7 < VAR_6->left ) VAR_7 = VAR_6->left;
        if (VAR_8 > VAR_6->right) VAR_8 = VAR_6->right;
    }
    VAR_10 = FUNC_0 (VAR_0, 1, FUNC_2 (VAR_1));
    VAR_11 = FUNC_13 (VAR_1, VAR_10);
    FUNC_9 (VAR_1, VAR_7, VAR_3, ((void*)0));
    FUNC_8 (VAR_1, VAR_8, VAR_3);
    FUNC_13 (VAR_1, VAR_11);
    FUNC_1 (VAR_10);

}
