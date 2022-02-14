
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef int POINT ;
typedef int HWND ;


 int FUNC_0 (scalar_t__**) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int *,int ,int *,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_2 ;
 scalar_t__** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 float VAR_6 ;
 int* VAR_7 ;

void FUNC_8(HWND VAR_8)
{
 static int VAR_9 = 4;
 int VAR_10, VAR_11;
 RECT VAR_12;
 HWND VAR_13, VAR_14;
 int VAR_15 = 0;

 if (VAR_6 >= 1.3f)
  return;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++) {
  VAR_15 += VAR_9;



  if (VAR_3[VAR_10][0] == VAR_1)
   VAR_15 += 1;
  for (VAR_11 = 0; VAR_11 < 5; VAR_11++) {
   if (VAR_3[VAR_10][VAR_11] == 0)
    break;
   VAR_13 = FUNC_1(VAR_8, VAR_3[VAR_10][VAR_11]);
   FUNC_3(VAR_13, &VAR_12);
   FUNC_5(((void*)0), VAR_8, (POINT*)&VAR_12, 2);
   VAR_14 = FUNC_2(VAR_13, VAR_0);
   FUNC_7(VAR_13, VAR_14, VAR_12.left, VAR_12.top + VAR_15,
    VAR_12.right - VAR_12.left, VAR_12.bottom - VAR_12.top, 0);
  }
 }

 VAR_7[1] += 9 * VAR_9;
 VAR_7[2] += 16 * VAR_9 + 1;
 VAR_4 += 3 * VAR_9;
 VAR_5 += 3 * VAR_9 + 1;

 FUNC_6(VAR_15 + 2 * VAR_9);
 FUNC_4(VAR_8, ((void*)0), VAR_2);
}
