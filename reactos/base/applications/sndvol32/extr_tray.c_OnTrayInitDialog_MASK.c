
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_6__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_5__ {scalar_t__ right; scalar_t__ left; scalar_t__ bottom; scalar_t__ top; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef int LPARAM ;
typedef scalar_t__ LONG ;
typedef int HWND ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,scalar_t__,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static VOID
FUNC_4(
    HWND VAR_2,
    WPARAM VAR_3,
    LPARAM VAR_4)
{
    POINT VAR_5;
    RECT VAR_6;
    RECT VAR_7;
    LONG VAR_8, VAR_9, VAR_10, VAR_11;

    FUNC_0(&VAR_5);

    FUNC_2(VAR_2, &VAR_6);

    FUNC_2(FUNC_1(), &VAR_7);

    VAR_10 = VAR_6.right - VAR_6.left;
    VAR_11 = VAR_6.bottom - VAR_6.top;

    if (VAR_5.y + VAR_11 > VAR_7.bottom)
        VAR_9 = VAR_5.y - VAR_11;
    else
        VAR_9 = VAR_5.y;

    if (VAR_5.x + VAR_10 > VAR_7.right)
        VAR_8 = VAR_5.x - VAR_10;
    else
        VAR_8 = VAR_5.x;

    FUNC_3(VAR_2, VAR_0, VAR_8, VAR_9, 0, 0, VAR_1);
}
