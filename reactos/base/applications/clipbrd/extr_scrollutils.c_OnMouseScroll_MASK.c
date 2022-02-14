
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
typedef int WORD ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {scalar_t__ uLinesToScroll; scalar_t__ nPageY; scalar_t__ iWheelCarryoverY; scalar_t__ nPageX; scalar_t__ iWheelCarryoverX; } ;
typedef TYPE_1__* LPSCROLLSTATE ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef int HWND ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ,scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int) ;

void FUNC_4(HWND VAR_7, UINT VAR_8, WPARAM VAR_9, LPARAM VAR_10, LPSCROLLSTATE VAR_11)
{
    INT VAR_12;
    INT VAR_13;
    INT VAR_14;
    UINT VAR_15 = VAR_11->uLinesToScroll;
    INT VAR_16 = FUNC_0(VAR_9);
    WORD VAR_17;

    FUNC_3(VAR_8 == VAR_6 || VAR_8 == VAR_5);

    if (VAR_8 == VAR_6)
    {
        VAR_12 = VAR_3;
        VAR_13 = VAR_11->nPageY;


        VAR_16 += VAR_11->iWheelCarryoverY;
        VAR_11->iWheelCarryoverY = VAR_16 % VAR_4;
    }
    else
    {
        VAR_12 = VAR_0;
        VAR_13 = VAR_11->nPageX;


        VAR_16 += VAR_11->iWheelCarryoverX;
        VAR_11->iWheelCarryoverX = VAR_16 % VAR_4;
    }
    if (VAR_15 > VAR_13)
        VAR_15 = VAR_13;

    else if (VAR_15 == 0)
        return;


    if (VAR_16 > 0)
    {
        VAR_17 = VAR_2;
    }
    else
    {
        VAR_17 = VAR_1;
        VAR_16 = -VAR_16;
    }


    VAR_14 = (INT)VAR_15 * VAR_16 / VAR_4;

    FUNC_2(VAR_7, VAR_12, FUNC_1(VAR_17, 0), VAR_14, VAR_11);
}
