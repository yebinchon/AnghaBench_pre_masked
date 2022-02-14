
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {int right; int left; scalar_t__ bottom; scalar_t__ top; } ;
struct TYPE_6__ {int left; int right; scalar_t__ bottom; scalar_t__ top; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__* LPRECT ;
typedef int HDC ;
typedef int HBRUSH ;
typedef int COLOR_SCHEME ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ,int ,int *) ;

VOID
FUNC_2(HDC VAR_3, LPRECT VAR_4, HBRUSH VAR_5, COLOR_SCHEME *VAR_6)
{
    RECT VAR_7;
    RECT VAR_8;
    RECT VAR_9;
    int VAR_10;

    VAR_10 = VAR_4->right - VAR_4->left;

    VAR_7.left = VAR_4->left;
    VAR_7.right = VAR_4->right;
    VAR_7.top = VAR_4->top;
    VAR_7.bottom = VAR_4->top + VAR_10;

    VAR_9.left = VAR_4->left;
    VAR_9.right = VAR_4->right;
    VAR_9.top = VAR_4->top + VAR_10;
    VAR_9.bottom = VAR_4->bottom - VAR_10;

    VAR_8.left = VAR_4->left;
    VAR_8.right = VAR_4->right;
    VAR_8.top = VAR_4->bottom - VAR_10;
    VAR_8.bottom = VAR_4->bottom;

    FUNC_1(VAR_3, &VAR_7, VAR_2, VAR_1, VAR_6);
    FUNC_1(VAR_3, &VAR_8, VAR_2, VAR_0, VAR_6);

    FUNC_0(VAR_3, &VAR_9, VAR_5);
}
