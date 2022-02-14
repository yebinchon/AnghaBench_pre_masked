
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
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int *,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,scalar_t__,int,scalar_t__,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_10 (int ,...) ;
 int VAR_23 ;
 int* VAR_24 ;
 int VAR_25 ;
 int FUNC_11 (int ,int *,int) ;
 int ** VAR_26 ;

void FUNC_12(BOOL VAR_27)
{
 RECT VAR_28;
 SIZE VAR_29;
 TBBUTTONINFO VAR_30;
 int VAR_31, VAR_32 = VAR_14;

 if (!VAR_27)
  VAR_32 = -VAR_32;
 VAR_24[1] += VAR_32;
 VAR_24[2] += VAR_32;


 FUNC_11(FUNC_10((VAR_27) ? VAR_5 : VAR_4, FUNC_10(VAR_3)), VAR_26[0], FUNC_0(VAR_26[0]));
 VAR_30.cbSize = sizeof(VAR_30);
 VAR_30.dwMask = VAR_8;
 VAR_30.pszText = VAR_26[0];
 FUNC_7(VAR_17, VAR_10, (WPARAM)VAR_2, (LPARAM)&VAR_30);
 FUNC_7(VAR_17, VAR_11, (WPARAM)0, (LPARAM)((VAR_27) ? VAR_22 : VAR_19));
 FUNC_2(VAR_17, &VAR_28);
 FUNC_4(((void*)0), VAR_20, (POINT*)&VAR_28, 2);
 FUNC_7(VAR_17, VAR_9, (WPARAM)VAR_0, (LPARAM)&VAR_29);

 if (VAR_29.cx < 16)
  VAR_29.cx = VAR_16;
 FUNC_8(VAR_17, VAR_21, VAR_28.left, VAR_28.top, VAR_29.cx, VAR_28.bottom - VAR_28.top, 0);


 for (VAR_31 = 0; VAR_31<FUNC_0(VAR_13); VAR_31++)
  FUNC_5(VAR_20, VAR_13[VAR_31], VAR_32);


 for (VAR_31 = 0; VAR_31<FUNC_0(VAR_15); VAR_31++)
  FUNC_9(FUNC_1(VAR_20, VAR_15[VAR_31]), VAR_27 ? VAR_7 : VAR_6);

 FUNC_2(VAR_18, &VAR_28);
 FUNC_4(((void*)0), VAR_20, (POINT*)&VAR_28, 2);
 FUNC_8(VAR_18, VAR_1, VAR_28.left, VAR_28.top, VAR_27 ? VAR_16 - VAR_25 - VAR_23 : VAR_16, VAR_28.bottom - VAR_28.top, 0);


 FUNC_6(VAR_32);


 FUNC_3(VAR_20, ((void*)0), VAR_12);
}
