
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_7__ {scalar_t__ cx; scalar_t__ cy; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ POINT ;
typedef scalar_t__ LONG ;
typedef int HDC ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__,int *) ;
 int FUNC_5 (int,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_7(HDC VAR_0, LONG VAR_1, LONG VAR_2, LONG VAR_3, LONG VAR_4)
{
    SIZE VAR_5, VAR_6;
    POINT VAR_7, VAR_8, VAR_9, VAR_10;

    FUNC_3(VAR_0, &VAR_7);
    FUNC_1(VAR_0, &VAR_9);

    FUNC_4(VAR_0, VAR_1, VAR_2, ((void*)0));
    FUNC_2(VAR_0, &VAR_5);
    FUNC_5(VAR_5.cx == VAR_1 && VAR_5.cy == VAR_2,
       "Window extension: Expected %dx%d, got %dx%d\n",
       VAR_1, VAR_2, VAR_5.cx, VAR_5.cy);

    FUNC_0(VAR_0, &VAR_6);
    FUNC_5(FUNC_6(VAR_6.cx, VAR_3) && FUNC_6(VAR_6.cy, VAR_4),
        "Viewport extents have not been properly adjusted: Expected %dx%d, got %dx%d\n",
        VAR_3, VAR_4, VAR_6.cx, VAR_6.cy);

    FUNC_3(VAR_0, &VAR_8);
    FUNC_5(VAR_7.x == VAR_8.x && VAR_7.y == VAR_8.y,
        "Window origin changed from (%d,%d) to (%d,%d)\n",
        VAR_7.x, VAR_7.y, VAR_8.x, VAR_8.y);

    FUNC_1(VAR_0, &VAR_10);
    FUNC_5(VAR_9.x == VAR_10.x && VAR_9.y == VAR_10.y,
        "Viewport origin changed from (%d,%d) to (%d,%d)\n",
        VAR_9.x, VAR_9.y, VAR_10.x, VAR_10.y);
}
