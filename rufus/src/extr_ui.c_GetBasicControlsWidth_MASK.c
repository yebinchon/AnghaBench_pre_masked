
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_6__ {int member_2; int member_3; scalar_t__ right; int left; scalar_t__ top; scalar_t__ bottom; int member_1; int member_0; } ;
struct TYPE_5__ {scalar_t__ cx; scalar_t__ cy; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ RECT ;
typedef int POINT ;
typedef int LPARAM ;
typedef int HWND ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int *,int ,int *,int) ;
 void* FUNC_4 (int,scalar_t__,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void FUNC_6(HWND VAR_19)
{
 int VAR_20 = 12, VAR_21 = 15;
 RECT VAR_22 = { 0, 0, 4, 8 };
 SIZE VAR_23;



 FUNC_2(VAR_19, &VAR_22);
 VAR_23.cx = VAR_22.right;
 VAR_23.cy = VAR_22.bottom;


 if (VAR_14 == VAR_6) {
  VAR_20 = 10;
  VAR_21 = 13;
 }


 VAR_8 = FUNC_4(VAR_20, VAR_23.cx, 4);
 VAR_9 = FUNC_4(VAR_21, VAR_23.cx, 4);


 FUNC_1(FUNC_0(VAR_19, VAR_3), &VAR_22);
 FUNC_3(((void*)0), VAR_19, (POINT*)&VAR_22, 2);
 VAR_17 = VAR_22.left;
 FUNC_1(FUNC_0(VAR_19, VAR_1), &VAR_22);
 FUNC_3(((void*)0), VAR_19, (POINT*)&VAR_22, 2);
 VAR_17 -= VAR_22.right;
 VAR_13 = VAR_22.left;


 FUNC_5(VAR_11, VAR_5, (WPARAM)VAR_0, (LPARAM)&VAR_23);
 VAR_15 = VAR_23.cx;


 FUNC_1(FUNC_0(VAR_19, VAR_2), &VAR_22);
 FUNC_3(((void*)0), VAR_19, (POINT*)&VAR_22, 2);
 VAR_7 = VAR_22.bottom - VAR_22.top;
 VAR_16 = VAR_22.left;
 FUNC_1(VAR_10, &VAR_22);
 FUNC_3(((void*)0), VAR_19, (POINT*)&VAR_22, 2);
 VAR_16 -= VAR_22.right;


 FUNC_1(FUNC_0(VAR_19, VAR_4), &VAR_22);
 FUNC_3(((void*)0), VAR_19, (POINT*)&VAR_22, 2);
 VAR_18 = VAR_22.left;
 FUNC_1(VAR_12, &VAR_22);
 FUNC_3(((void*)0), VAR_19, (POINT*)&VAR_22, 2);
 VAR_18 -= VAR_22.right;
}
