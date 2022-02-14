
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_3__ {scalar_t__ iBitmap; void* fsState; void* fsStyle; int idCommand; } ;
typedef TYPE_1__ TBBUTTON ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HMENU ;
typedef scalar_t__ HIMAGELIST ;
typedef int HICON ;
typedef int DWORD ;


 void* VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int ,int,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int *,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 unsigned char* FUNC_3 (int ,int ,int ,char*,int *,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int,int,int,int,int ) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_11 ;
 int FUNC_8 (int ,int ,int ,int ) ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_9 (TYPE_1__*,int ,int) ;

void FUNC_10(HWND VAR_24)
{
 HIMAGELIST VAR_25;
 HICON VAR_26, VAR_27;
 int VAR_28 = 0, VAR_29 = FUNC_4(VAR_11);
 TBBUTTON VAR_30[1];
 unsigned char* VAR_31;
 DWORD VAR_32;

 if (VAR_29 >= 28)
  VAR_28 = 20;
 else if (VAR_29 >= 20)
  VAR_28 = 10;

 VAR_23 = FUNC_1(0, VAR_16, ((void*)0), VAR_17,
  0, 0, 0, 0, VAR_21, (HMENU)VAR_5, VAR_22, ((void*)0));
 VAR_25 = FUNC_6(VAR_29, VAR_29, VAR_8 | VAR_9 | VAR_10, 1, 0);
 VAR_31 = FUNC_3(VAR_22, FUNC_7(VAR_7 + VAR_28), VAR_19, "save icon", &VAR_32, VAR_1);
 VAR_26 = FUNC_0(VAR_31, VAR_32, VAR_18, 0x30000, 0, 0, 0);
 FUNC_5(VAR_25, VAR_26);
 FUNC_2(VAR_26);
 FUNC_8(VAR_23, VAR_15, (WPARAM)0, (LPARAM)VAR_25);
 FUNC_8(VAR_23, VAR_14, (WPARAM)sizeof(TBBUTTON), 0);
 FUNC_9(VAR_30, 0, sizeof(TBBUTTON));
 VAR_30[0].idCommand = VAR_4;
 VAR_30[0].fsStyle = VAR_0;
 VAR_30[0].fsState = VAR_12;
 VAR_30[0].iBitmap = 0;
 FUNC_8(VAR_23, VAR_13, (WPARAM)1, (LPARAM)&VAR_30);

 VAR_20 = FUNC_1(0, VAR_16, ((void*)0), VAR_17,
  0, 0, 0, 0, VAR_21, (HMENU)VAR_3, VAR_22, ((void*)0));
 VAR_25 = FUNC_6(VAR_29, VAR_29, VAR_8 | VAR_9 | VAR_10, 1, 0);
 VAR_31 = FUNC_3(VAR_22, FUNC_7(VAR_6 + VAR_28), VAR_19, "hash icon", &VAR_32, VAR_1);
 VAR_27 = FUNC_0(VAR_31, VAR_32, VAR_18, 0x30000, 0, 0, 0);
 FUNC_5(VAR_25, VAR_27);
 FUNC_2(VAR_27);
 FUNC_8(VAR_20, VAR_15, (WPARAM)0, (LPARAM)VAR_25);
 FUNC_8(VAR_20, VAR_14, (WPARAM)sizeof(TBBUTTON), 0);
 FUNC_9(VAR_30, 0, sizeof(TBBUTTON));
 VAR_30[0].idCommand = VAR_2;
 VAR_30[0].fsStyle = VAR_0;
 VAR_30[0].fsState = VAR_12;
 VAR_30[0].iBitmap = 0;
 FUNC_8(VAR_20, VAR_13, (WPARAM)1, (LPARAM)&VAR_30);
}
