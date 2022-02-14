
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {int right; scalar_t__ bottom; scalar_t__ top; } ;
struct TYPE_5__ {int left; int right; scalar_t__ bottom; scalar_t__ top; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__* LPRECT ;
typedef int HDC ;
typedef int COLOR_SCHEME ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*,int ,int ,int *) ;

VOID
FUNC_1(HDC VAR_4, LPRECT VAR_5, BOOL VAR_6, int VAR_7, COLOR_SCHEME *VAR_8)
{
    RECT VAR_9;
    RECT VAR_10;
    RECT VAR_11;

    VAR_9 = VAR_5->right - 2 - VAR_7;
    VAR_9 = VAR_5->top + 2;
    VAR_9 = VAR_5->right - 2;
    VAR_9 = VAR_5->bottom - 2;

    FUNC_0(VAR_4, &VAR_9, VAR_3, VAR_0, VAR_8);

    if (VAR_6)
    {
        VAR_10 = VAR_9 - VAR_7 - 2;
        VAR_10 = VAR_9;
        VAR_10 = VAR_9 - VAR_7 - 2;
        VAR_10 = VAR_9;

        FUNC_0(VAR_4, &VAR_10, VAR_3, VAR_1, VAR_8);

        VAR_11 = VAR_10 - VAR_7;
        VAR_11 = VAR_10;
        VAR_11 = VAR_10 - VAR_7;
        VAR_11 = VAR_10;

        FUNC_0(VAR_4, &VAR_11, VAR_3, VAR_2, VAR_8);
    }
}
