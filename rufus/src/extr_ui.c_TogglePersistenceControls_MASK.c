
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef int POINT ;
typedef int LONG_PTR ;
typedef scalar_t__ LONG ;
typedef int HWND ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

void FUNC_8(BOOL VAR_14)
{
 RECT VAR_15;
 HWND VAR_16, VAR_17;
 LONG_PTR VAR_18;
 LONG VAR_19 = VAR_10 - VAR_9 - VAR_13;
 VAR_16 = FUNC_1(VAR_11, VAR_2);
 VAR_17 = FUNC_1(VAR_11, VAR_4);

 VAR_18 = FUNC_2(VAR_16, VAR_1);
 if (VAR_14)
  VAR_18 |= VAR_8;
 else
  VAR_18 &= ~VAR_8;
 FUNC_5(VAR_16, VAR_1, VAR_18);

 if (VAR_14) {
  FUNC_3(VAR_17, &VAR_15);
  FUNC_4(((void*)0), VAR_11, (POINT*)&VAR_15, 2);
  VAR_19 -= (VAR_15.right - VAR_15.left) + VAR_13;
 }

 FUNC_3(VAR_16, &VAR_15);
 FUNC_4(((void*)0), VAR_11, (POINT*)&VAR_15, 2);
 FUNC_6(VAR_16, FUNC_1(VAR_11, VAR_3), VAR_12 + VAR_9 + VAR_13, VAR_15.top, VAR_19, VAR_15.bottom - VAR_15.top, 0);

 FUNC_0(VAR_16, VAR_14 ? VAR_7 : VAR_0);
 FUNC_0(VAR_17, VAR_14 ? VAR_7 : VAR_0);
 FUNC_7(VAR_17, VAR_14 ? VAR_6 : VAR_5);
}
