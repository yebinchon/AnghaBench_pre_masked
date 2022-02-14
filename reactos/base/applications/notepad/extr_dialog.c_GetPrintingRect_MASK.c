
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int left; int top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef int HDC ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static RECT
FUNC_1(HDC VAR_8, RECT VAR_9)
{
    int VAR_10, VAR_11;
    int VAR_12, VAR_13;
    int VAR_14, VAR_15, VAR_16, VAR_17;
    RECT VAR_18;

    VAR_14 = FUNC_0(VAR_8, VAR_4);
    VAR_15 = FUNC_0(VAR_8, VAR_5);
    VAR_16 = FUNC_0(VAR_8, VAR_6);
    VAR_17 = FUNC_0(VAR_8, VAR_3);
    VAR_10 = FUNC_0(VAR_8, VAR_1);
    VAR_11 = FUNC_0(VAR_8, VAR_2);
    VAR_12 = FUNC_0(VAR_8, VAR_0);
    VAR_13 = FUNC_0(VAR_8, VAR_7);

    VAR_18.left = (VAR_9.left * VAR_10 / 2540) - VAR_14;
    VAR_18.top = (VAR_9.top * VAR_11 / 2540) - VAR_15;
    VAR_18.right = VAR_12 - (((VAR_9.left * VAR_10 / 2540) - VAR_14) + ((VAR_9.right * VAR_10 / 2540) - (VAR_16 - VAR_14 - VAR_12)));
    VAR_18.bottom = VAR_13 - (((VAR_9.top * VAR_11 / 2540) - VAR_15) + ((VAR_9.bottom * VAR_11 / 2540) - (VAR_17 - VAR_15 - VAR_13)));

    return VAR_18;
}
