
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_document ;
struct TYPE_9__ {float x1; float x0; float y1; float y0; } ;
typedef TYPE_1__ fz_rect ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__ FUNC_1 (TYPE_1__,TYPE_1__) ;
 scalar_t__ FUNC_2 (TYPE_1__) ;
 TYPE_1__ FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int *,int *,int *,int ,TYPE_1__) ;
 int * FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int *,float) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int *,int *,int ,int *) ;
 int FUNC_13 (int *,int *,int ,int *) ;
 int FUNC_14 (int *,int *,int ,int) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int * FUNC_17 (int *,int *,int) ;
 int * FUNC_18 (int *,int *,int) ;
 int * FUNC_19 (int *,int *,int) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int *) ;
 TYPE_1__ FUNC_22 (int *,int ) ;
 int * FUNC_23 (int *,int *) ;
 int FUNC_24 (int *,int *,int ,int *) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_25(fz_context *VAR_14, pdf_document *VAR_15)
{
 pdf_obj *VAR_16, *VAR_17, *VAR_18, *VAR_19;
 int VAR_20 = FUNC_9(VAR_14, VAR_15);
 int VAR_21, VAR_22;
 fz_rect VAR_23, VAR_24;
 int VAR_25;

 VAR_16 = FUNC_10(VAR_14, FUNC_23(VAR_14, VAR_15), FUNC_0(VAR_8));
 VAR_18 = FUNC_10(VAR_14, VAR_16, FUNC_0(VAR_6));

 VAR_17 = FUNC_19(VAR_14, VAR_15, 2);
 FUNC_12(VAR_14, VAR_17, FUNC_0(VAR_11), FUNC_10(VAR_14, VAR_16, FUNC_0(VAR_11)));
 FUNC_12(VAR_14, VAR_17, FUNC_0(VAR_6), FUNC_10(VAR_14, VAR_16, FUNC_0(VAR_6)));

 FUNC_24(VAR_14, VAR_15, FUNC_21(VAR_14, VAR_16), VAR_17);

 FUNC_15(VAR_14, VAR_17);


 VAR_19 = FUNC_18(VAR_14, VAR_15, 1);

 VAR_22 = 0;
 for (VAR_21=0; VAR_21 < VAR_20; VAR_21++)
 {
  pdf_obj *VAR_26 = FUNC_17(VAR_14, VAR_15, VAR_21);
  int VAR_27 = VAR_12, VAR_28 = VAR_13;
  float VAR_29, VAR_30;
  int VAR_31, VAR_32;

  VAR_25 = FUNC_20(VAR_14, FUNC_11(VAR_14, VAR_26, FUNC_0(VAR_9)));
  VAR_23 = FUNC_22(VAR_14, FUNC_11(VAR_14, VAR_26, FUNC_0(VAR_5)));
  VAR_24 = FUNC_22(VAR_14, FUNC_11(VAR_14, VAR_26, FUNC_0(VAR_3)));
  if (FUNC_2(VAR_23))
   VAR_23 = FUNC_3(0, 0, 612, 792);
  if (!FUNC_2(VAR_24))
   VAR_23 = FUNC_1(VAR_23, VAR_24);

  VAR_29 = VAR_23.x1 - VAR_23.x0;
  VAR_30 = VAR_23.y1 - VAR_23.y0;

  if (VAR_25 == 90 || VAR_25 == 270)
  {
   VAR_27 = VAR_13;
   VAR_28 = VAR_12;
  }
  else
  {
   VAR_27 = VAR_12;
   VAR_28 = VAR_13;
  }

  if (VAR_27 == 0 && VAR_28 == 0)
  {

   if (VAR_29 > VAR_30)
    VAR_27 = 2, VAR_28 = 1;
   else
    VAR_27 = 1, VAR_28 = 2;
  }
  else if (VAR_27 == 0)
   VAR_27 = 1;
  else if (VAR_28 == 0)
   VAR_28 = 1;

  for (VAR_32 = VAR_28-1; VAR_32 >= 0; VAR_32--)
  {
   for (VAR_31 = 0; VAR_31 < VAR_27; VAR_31++)
   {
    pdf_obj *VAR_33, *VAR_34, *VAR_35;
    fz_rect VAR_36;

    VAR_33 = FUNC_8(VAR_14, FUNC_17(VAR_14, VAR_15, VAR_21));
    FUNC_16(VAR_14, VAR_33);
    VAR_34 = FUNC_5(VAR_14, VAR_15, VAR_33);

    VAR_35 = FUNC_18(VAR_14, VAR_15, 4);

    VAR_36.x0 = VAR_23.x0 + (VAR_29/VAR_27)*VAR_31;
    if (VAR_31 == VAR_27-1)
     VAR_36.x1 = VAR_23.x1;
    else
     VAR_36.x1 = VAR_23.x0 + (VAR_29/VAR_27)*(VAR_31+1);
    VAR_36.y0 = VAR_23.y0 + (VAR_30/VAR_28)*VAR_32;
    if (VAR_32 == VAR_28-1)
     VAR_36.y1 = VAR_23.y1;
    else
     VAR_36.y1 = VAR_23.y0 + (VAR_30/VAR_28)*(VAR_32+1);

    FUNC_7(VAR_14, VAR_35, VAR_36.x0);
    FUNC_7(VAR_14, VAR_35, VAR_36.y0);
    FUNC_7(VAR_14, VAR_35, VAR_36.x1);
    FUNC_7(VAR_14, VAR_35, VAR_36.y1);

    FUNC_12(VAR_14, VAR_33, FUNC_0(VAR_7), VAR_18);
    FUNC_13(VAR_14, VAR_33, FUNC_0(VAR_5), VAR_35);

    FUNC_4(VAR_14, VAR_15, VAR_33, FUNC_0(VAR_3), VAR_36);
    FUNC_4(VAR_14, VAR_15, VAR_33, FUNC_0(VAR_1), VAR_36);
    FUNC_4(VAR_14, VAR_15, VAR_33, FUNC_0(VAR_10), VAR_36);
    FUNC_4(VAR_14, VAR_15, VAR_33, FUNC_0(VAR_0), VAR_36);


    FUNC_15(VAR_14, VAR_33);
    FUNC_6(VAR_14, VAR_19, VAR_34);

    VAR_22++;
   }
  }
 }


 FUNC_14(VAR_14, VAR_18, FUNC_0(VAR_2), VAR_22);
 FUNC_13(VAR_14, VAR_18, FUNC_0(VAR_4), VAR_19);
}
