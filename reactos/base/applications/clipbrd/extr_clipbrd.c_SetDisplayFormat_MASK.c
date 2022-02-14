
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int hMainWnd; scalar_t__ uDisplayFormat; scalar_t__ uCheckedItem; int hMenu; } ;
struct TYPE_7__ {scalar_t__ iWheelCarryoverY; scalar_t__ iWheelCarryoverX; scalar_t__ CurrentY; scalar_t__ CurrentX; } ;
struct TYPE_6__ {int bottom; int right; } ;
typedef TYPE_1__ RECT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 TYPE_4__ VAR_1 ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(UINT VAR_7)
{
    RECT VAR_8;

    FUNC_0(VAR_1.hMenu, VAR_1.uCheckedItem, VAR_2 | VAR_4);
    VAR_1.uCheckedItem = VAR_7 + VAR_0;
    FUNC_0(VAR_1.hMenu, VAR_1.uCheckedItem, VAR_2 | VAR_3);

    if (VAR_7 == 0)
    {
        VAR_1.uDisplayFormat = FUNC_1();
    }
    else
    {
        VAR_1.uDisplayFormat = VAR_7;
    }

    FUNC_2(VAR_1.uDisplayFormat, &VAR_8);
    VAR_5.CurrentX = VAR_5.CurrentY = 0;
    VAR_5.iWheelCarryoverX = VAR_5.iWheelCarryoverY = 0;
    FUNC_4(VAR_1.hMainWnd, VAR_8.right, VAR_8.bottom, &VAR_5);

    FUNC_3(VAR_1.hMainWnd, ((void*)0), VAR_6);
}
