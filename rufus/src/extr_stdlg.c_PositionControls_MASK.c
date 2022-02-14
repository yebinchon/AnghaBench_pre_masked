
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cx; } ;
struct TYPE_4__ {int right; int left; int top; scalar_t__ bottom; } ;
typedef TYPE_1__ RECT ;
typedef int POINT ;
typedef int * HWND ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ) ;
 TYPE_3__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int *,int *,int *,int) ;
 int FUNC_7 (int *,int ,int,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (int *,int *,int,int,int,scalar_t__,int) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (int ,...) ;
 int FUNC_10 (int,int) ;
 int * VAR_18 ;

__attribute__((used)) static void FUNC_11(HWND VAR_19)
{
 RECT VAR_20;
 HWND VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25;


 FUNC_5(FUNC_1(VAR_19, VAR_5), &VAR_20);
 FUNC_6(((void*)0), VAR_19, (POINT*)&VAR_20, 2);
 VAR_24 = VAR_20.right - VAR_20.left;
 VAR_25 = FUNC_4(VAR_19, VAR_5) - VAR_24;
 VAR_25 = FUNC_10(VAR_25, FUNC_4(VAR_19, VAR_4) - VAR_24);
 if (VAR_25 > 0) {
  FUNC_5(VAR_19, &VAR_20);
  FUNC_8(VAR_19, ((void*)0), -1, -1, VAR_20.right - VAR_20.left + VAR_25, VAR_20.bottom - VAR_20.top, VAR_13 | VAR_14);
  for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_18); VAR_23++)
   FUNC_7(VAR_19, VAR_18[VAR_23], (VAR_23 < 4) ? 0 : VAR_25, (VAR_23 >= 4) ? 0 : VAR_25);
 }

 VAR_21 = FUNC_1(VAR_19, VAR_3);
 FUNC_5(VAR_21, &VAR_20);
 FUNC_6(((void*)0), VAR_19, (POINT*)&VAR_20, 2);
 VAR_24 = VAR_20.right - VAR_20.left;

 VAR_25 = FUNC_3(VAR_21, FUNC_9(VAR_8)).cx;
 VAR_25 = FUNC_10(VAR_25, FUNC_3(VAR_21, FUNC_9(VAR_12, FUNC_9(VAR_9))).cx);
 VAR_25 = FUNC_10(VAR_25, FUNC_3(VAR_21, FUNC_9(VAR_10)).cx);
 VAR_25 = FUNC_10(VAR_25, FUNC_3(VAR_21, FUNC_9(VAR_11)).cx);
 VAR_25 = FUNC_10(VAR_25, FUNC_3(VAR_21, FUNC_9(VAR_6)).cx);
 VAR_25 = FUNC_10(VAR_25, FUNC_3(VAR_21, FUNC_9(VAR_7)).cx);
 VAR_25 -= VAR_24 - VAR_17;
 if (VAR_25 > 0) {
  FUNC_5(VAR_19, &VAR_20);
  FUNC_8(VAR_19, ((void*)0), -1, -1, VAR_20.right - VAR_20.left + VAR_25, VAR_20.bottom - VAR_20.top, VAR_13 | VAR_14);
  for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_18); VAR_23++) {
   if ((VAR_23 >= 2) && (VAR_23 <= 3))
    continue;
   FUNC_7(VAR_19, VAR_18[VAR_23], (VAR_23 < 6) ? 0 : VAR_25, (VAR_23 >= 6) ? 0 : VAR_25);
  }
 }

 FUNC_5(FUNC_1(VAR_19, VAR_2), &VAR_20);
 FUNC_6(((void*)0), VAR_19, (POINT*)&VAR_20, 2);
 VAR_24 = VAR_20.right - VAR_20.left;
 VAR_25 = FUNC_4(VAR_19, VAR_2) - VAR_24 + VAR_15;
 VAR_25 = FUNC_10(VAR_25, FUNC_4(VAR_19, VAR_1) - VAR_24 + VAR_15);
 if (VAR_25 > 0) {
  FUNC_5(VAR_19, &VAR_20);
  FUNC_8(VAR_19, ((void*)0), -1, -1, VAR_20.right - VAR_20.left + VAR_25, VAR_20.bottom - VAR_20.top, VAR_13 | VAR_14);
  for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_18); VAR_23++) {
   if ((VAR_23 >= 1) && (VAR_23 <= 5))
    continue;
   FUNC_7(VAR_19, VAR_18[VAR_23], 0, VAR_25);
  }
 }
 VAR_21 = FUNC_1(VAR_19, VAR_2);
 FUNC_5(VAR_21, &VAR_20);
 FUNC_6(((void*)0), VAR_19, (POINT*)&VAR_20, 2);
 VAR_22 = FUNC_2(VAR_21, VAR_0);
 FUNC_8(VAR_21, VAR_22, VAR_20.left, VAR_20.top, VAR_20.right - VAR_20.left, VAR_16, 0);
 VAR_21 = FUNC_1(VAR_19, VAR_1);
 FUNC_5(VAR_21, &VAR_20);
 FUNC_6(((void*)0), VAR_19, (POINT*)&VAR_20, 2);
 VAR_22 = FUNC_2(VAR_21, VAR_0);
 FUNC_8(VAR_21, VAR_22, VAR_20.left, VAR_20.top, VAR_20.right - VAR_20.left, VAR_16, 0);
}
