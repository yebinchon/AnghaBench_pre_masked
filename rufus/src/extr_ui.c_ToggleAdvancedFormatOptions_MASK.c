
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int button_info ;
typedef int WPARAM ;
struct TYPE_7__ {scalar_t__ top; scalar_t__ bottom; int left; } ;
struct TYPE_6__ {int cx; } ;
struct TYPE_5__ {int cbSize; int * pszText; int dwMask; } ;
typedef TYPE_1__ TBBUTTONINFO ;
typedef TYPE_2__ SIZE ;
typedef TYPE_3__ RECT ;
typedef int POINT ;
typedef int LPARAM ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int *,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,scalar_t__,int,scalar_t__,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_10 (int ,...) ;
 int* VAR_21 ;
 int FUNC_11 (int ,int *,int) ;
 int ** VAR_22 ;

void FUNC_12(BOOL VAR_23)
{
 RECT VAR_24;
 SIZE VAR_25;
 TBBUTTONINFO VAR_26;
 int VAR_27, VAR_28 = VAR_13;

 if (!VAR_23)
  VAR_28 = -VAR_28;
 VAR_21[2] += VAR_28;


 FUNC_11(FUNC_10((VAR_23) ? VAR_4 : VAR_3, FUNC_10(VAR_2)), VAR_22[1], FUNC_0(VAR_22[0]));
 VAR_26.cbSize = sizeof(VAR_26);
 VAR_26.dwMask = VAR_7;
 VAR_26.pszText = VAR_22[1];
 FUNC_7(VAR_16, VAR_9, (WPARAM)VAR_1, (LPARAM)&VAR_26);
 FUNC_7(VAR_16, VAR_10, (WPARAM)0, (LPARAM)((VAR_23) ? VAR_20 : VAR_18));
 FUNC_2(VAR_16, &VAR_24);
 FUNC_4(((void*)0), VAR_19, (POINT*)&VAR_24, 2);
 FUNC_7(VAR_16, VAR_8, (WPARAM)VAR_0, (LPARAM)&VAR_25);
 if (VAR_25.cx < 16)
  VAR_25.cx = VAR_15;
 FUNC_8(VAR_16, VAR_17, VAR_24.left, VAR_24.top, VAR_25.cx, VAR_24.bottom - VAR_24.top, 0);


 for (VAR_27 = 0; VAR_27<FUNC_0(VAR_12); VAR_27++)
  FUNC_5(VAR_19, VAR_12[VAR_27], VAR_28);


 for (VAR_27 = 0; VAR_27<FUNC_0(VAR_14); VAR_27++)
  FUNC_9(FUNC_1(VAR_19, VAR_14[VAR_27]), VAR_23 ? VAR_6 : VAR_5);


 FUNC_6(VAR_28);


 FUNC_3(VAR_19, ((void*)0), VAR_11);
}
