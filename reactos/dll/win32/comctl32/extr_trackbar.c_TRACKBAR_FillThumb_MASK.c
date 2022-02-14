
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int x; int y; } ;
struct TYPE_9__ {int bottom; int top; int right; int left; } ;
struct TYPE_8__ {int dwStyle; TYPE_2__ rcThumb; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ POINT ;
typedef int HDC ;
typedef int HBRUSH ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_2__ const*,int ) ;
 int FUNC_2 (int ,TYPE_3__*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5 (const TRACKBAR_INFO *VAR_5, HDC VAR_6, HBRUSH VAR_7)
{
    const RECT *VAR_8 = &VAR_5->rcThumb;
    POINT VAR_9[6];
    int VAR_10;
    HBRUSH VAR_11;

    if (VAR_5->dwStyle & VAR_0)
    {
        FUNC_1(VAR_6, VAR_8, VAR_7);
        return 0;
    }

    if (VAR_5->dwStyle & VAR_3)
    {
        VAR_10 = (VAR_8->bottom - VAR_8->top) / 2;
        if (VAR_5->dwStyle & VAR_1)
        {
            VAR_9[0].x = VAR_8->right-1;
            VAR_9[0].y = VAR_8->top;
            VAR_9[1].x = VAR_8->right-1;
            VAR_9[1].y = VAR_8->bottom-1;
            VAR_9[2].x = VAR_8->left + VAR_10;
            VAR_9[2].y = VAR_8->bottom-1;
            VAR_9[3].x = VAR_8->left;
            VAR_9[3].y = VAR_8->top + VAR_10;
            VAR_9[4].x = VAR_8->left + VAR_10;
            VAR_9[4].y = VAR_8->top;
            VAR_9[5].x = VAR_9[0].x;
            VAR_9[5].y = VAR_9[0].y;
        }
        else
        {
            VAR_9[0].x = VAR_8->right;
            VAR_9[0].y = VAR_8->top + VAR_10;
            VAR_9[1].x = VAR_8->right - VAR_10;
            VAR_9[1].y = VAR_8->bottom-1;
            VAR_9[2].x = VAR_8->left;
            VAR_9[2].y = VAR_8->bottom-1;
            VAR_9[3].x = VAR_8->left;
            VAR_9[3].y = VAR_8->top;
            VAR_9[4].x = VAR_8->right - VAR_10;
            VAR_9[4].y = VAR_8->top;
            VAR_9[5].x = VAR_9[0].x;
            VAR_9[5].y = VAR_9[0].y;
        }
    }
    else
    {
        VAR_10 = (VAR_8->right - VAR_8->left) / 2;
        if (VAR_5->dwStyle & VAR_2)
        {
            VAR_9[0].x = VAR_8->left + VAR_10;
            VAR_9[0].y = VAR_8->top+1;
            VAR_9[1].x = VAR_8->right-1;
            VAR_9[1].y = VAR_8->top + VAR_10 + 1;
            VAR_9[2].x = VAR_8->right-1;
            VAR_9[2].y = VAR_8->bottom-1;
            VAR_9[3].x = VAR_8->left;
            VAR_9[3].y = VAR_8->bottom-1;
            VAR_9[4].x = VAR_8->left;
            VAR_9[4].y = VAR_8->top + VAR_10 + 1;
            VAR_9[5].x = VAR_9[0].x;
            VAR_9[5].y = VAR_9[0].y;
        }
        else
        {
            VAR_9[0].x = VAR_8->right-1;
            VAR_9[0].y = VAR_8->top;
            VAR_9[1].x = VAR_8->right-1;
            VAR_9[1].y = VAR_8->bottom - VAR_10 - 1;
            VAR_9[2].x = VAR_8->left + VAR_10;
            VAR_9[2].y = VAR_8->bottom-1;
            VAR_9[3].x = VAR_8->left;
            VAR_9[3].y = VAR_8->bottom - VAR_10 - 1;
            VAR_9[4].x = VAR_8->left;
            VAR_9[4].y = VAR_8->top;
            VAR_9[5].x = VAR_9[0].x;
            VAR_9[5].y = VAR_9[0].y;
        }
    }

    VAR_11 = FUNC_3(VAR_6, VAR_7);
    FUNC_4(VAR_6, VAR_4);
    FUNC_2(VAR_6, VAR_9, FUNC_0(VAR_9));
    FUNC_3(VAR_6, VAR_11);

    return VAR_10;
}
