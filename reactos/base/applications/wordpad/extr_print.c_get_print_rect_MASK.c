
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bottom; scalar_t__ right; int top; int left; } ;
typedef int RECT ;
typedef scalar_t__ HDC ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static RECT FUNC_4(HDC VAR_5)
{
    RECT VAR_6;
    int VAR_7, VAR_8;

    if(VAR_5)
    {
        int VAR_9 = FUNC_0(VAR_5, VAR_1);
        int VAR_10 = FUNC_0(VAR_5, VAR_0);
        VAR_7 = FUNC_3(FUNC_0(VAR_5, VAR_3), VAR_10);
        VAR_8 = FUNC_3(FUNC_0(VAR_5, VAR_2), VAR_9);
    } else
    {
        VAR_7 = FUNC_2(18500);
        VAR_8 = FUNC_2(27000);
    }

    FUNC_1(&VAR_6, VAR_4.left, VAR_4.top, VAR_7 - VAR_4.right, VAR_8 - VAR_4.bottom);

    return VAR_6;
}
