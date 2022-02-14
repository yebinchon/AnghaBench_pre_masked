
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cx; } ;
struct TYPE_5__ {int right; int left; } ;
typedef TYPE_1__ RECT ;
typedef int POINT ;
typedef int HWND ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_3__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *,int ,int *,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int ,...) ;
 int FUNC_8 (int,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void FUNC_9(HWND VAR_19)
{
 RECT VAR_20;
 int VAR_21;


 FUNC_5(VAR_19, &VAR_20);
 VAR_10 = VAR_20.right - VAR_20.left;
 FUNC_1(VAR_19, &VAR_20);
 VAR_10 -= VAR_20.right - VAR_20.left;


 FUNC_5(FUNC_2(VAR_19, VAR_0), &VAR_20);
 FUNC_6(((void*)0), VAR_19, (POINT*)&VAR_20, 2);

 VAR_8 = FUNC_8(VAR_20.right - VAR_20.left, FUNC_3(VAR_14, FUNC_7(VAR_5)).cx + VAR_11);
 VAR_8 = FUNC_8(VAR_8, FUNC_3(VAR_14, FUNC_7(VAR_7, FUNC_7(VAR_6))).cx + VAR_11);


 FUNC_5(FUNC_2(VAR_19, VAR_2), &VAR_20);
 FUNC_6(((void*)0), VAR_19, (POINT*)&VAR_20, 2);
 VAR_13 = VAR_20.right - VAR_20.left - VAR_11;


 VAR_13 = FUNC_8(VAR_13, FUNC_3(FUNC_2(VAR_19, VAR_1), FUNC_7(VAR_3)).cx);
 VAR_13 = FUNC_8(VAR_13, FUNC_3(FUNC_2(VAR_19, VAR_1), FUNC_7(VAR_4)).cx);


 for (VAR_21 = 0; VAR_21<FUNC_0(VAR_12); VAR_21++)
  VAR_13 = FUNC_8(VAR_13, FUNC_4(VAR_19, VAR_12[VAR_21]));


 VAR_13 += VAR_11;


 VAR_13 = FUNC_8(VAR_13, 2 * VAR_15 + VAR_18);



 VAR_9 = FUNC_8(VAR_9, (VAR_13 - 2 * VAR_17 - VAR_18) / 4);

 VAR_9 = FUNC_8(VAR_9, (VAR_8 + VAR_16 - VAR_18) / 3);


 VAR_9 = FUNC_8(VAR_9, (VAR_15 / 2) - VAR_17);


 VAR_15 = FUNC_8(VAR_15, 2 * VAR_9 + VAR_17);
 VAR_13 = FUNC_8(VAR_13, 2 * VAR_15 + VAR_18);

 VAR_8 = FUNC_8(VAR_8, VAR_13 - VAR_9 - 2 * VAR_17 - VAR_16);


}
