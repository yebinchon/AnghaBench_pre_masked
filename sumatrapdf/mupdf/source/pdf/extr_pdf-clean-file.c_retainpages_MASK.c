
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_document ;
struct TYPE_3__ {int * doc; } ;
typedef TYPE_1__ globals ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,int *,int,int*,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int*,int) ;
 int* FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int*) ;
 char* FUNC_5 (int *,char const*,int*,int*,int) ;
 int FUNC_6 (int *,int *,int) ;
 int * FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int ) ;
 int * FUNC_13 (int *,int *,int ) ;
 int * FUNC_14 (int *,int *,int) ;
 int * FUNC_15 (int *,int *,int) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *,int ,int *) ;
 int FUNC_18 (int *,int *,int ,int *) ;
 int FUNC_19 (int *,int *) ;
 int * FUNC_20 (int *,int *,int ) ;
 int * FUNC_21 (int *,int *,int) ;
 int FUNC_22 (int *,int *,int ) ;
 int * FUNC_23 (int *,int *,int) ;
 int * FUNC_24 (int *,int *,int) ;
 int * FUNC_25 (int *,int) ;
 int * FUNC_26 (int *,int ,int ) ;
 int FUNC_27 (int *,int *) ;
 int FUNC_28 (int *,int *) ;
 int * FUNC_29 (int *,int *) ;
 int FUNC_30 (int *,int *,int,int *) ;
 int FUNC_31 (int *,int *,int *,int *,int) ;
 scalar_t__ FUNC_32 (int *,int *,int *,int,int*,int *) ;
 int FUNC_33 (int ) ;

__attribute__((used)) static void FUNC_34(fz_context *VAR_13, globals *VAR_14, int VAR_15, char **VAR_16)
{
 pdf_obj *VAR_17, *VAR_18, *VAR_19, *VAR_20, *VAR_21, *VAR_22;
 pdf_document *VAR_23 = VAR_14->doc;
 int VAR_24 = 0;
 pdf_obj *VAR_25 = ((void*)0);
 pdf_obj *VAR_26;
 pdf_obj *VAR_27;
 int VAR_28;
 int VAR_29;
 int *VAR_30;



 VAR_17 = FUNC_13(VAR_13, FUNC_29(VAR_13, VAR_23), FUNC_0(VAR_10));
 VAR_19 = FUNC_13(VAR_13, VAR_17, FUNC_0(VAR_9));
 VAR_22 = FUNC_20(VAR_13, VAR_23, FUNC_0(VAR_3));
 VAR_26 = FUNC_13(VAR_13, VAR_17, FUNC_0(VAR_8));
 VAR_27 = FUNC_13(VAR_13, VAR_17, FUNC_0(VAR_7));

 VAR_18 = FUNC_24(VAR_13, VAR_23, 3);
 FUNC_17(VAR_13, VAR_18, FUNC_0(VAR_12), FUNC_13(VAR_13, VAR_17, FUNC_0(VAR_12)));
 FUNC_17(VAR_13, VAR_18, FUNC_0(VAR_9), FUNC_13(VAR_13, VAR_17, FUNC_0(VAR_9)));
 if (VAR_26)
  FUNC_17(VAR_13, VAR_18, FUNC_0(VAR_8), VAR_26);
 if (VAR_27)
  FUNC_17(VAR_13, VAR_18, FUNC_0(VAR_7), VAR_27);

 FUNC_30(VAR_13, VAR_23, FUNC_28(VAR_13, VAR_17), VAR_18);


 VAR_20 = FUNC_23(VAR_13, VAR_23, 1);


 while (VAR_15 - VAR_24)
 {
  int VAR_31, VAR_32, VAR_33;
  const char *VAR_34 = VAR_16[VAR_24];

  VAR_28 = FUNC_11(VAR_13, VAR_23);

  while ((VAR_34 = FUNC_5(VAR_13, VAR_34, &VAR_32, &VAR_33, VAR_28)))
  {
   if (VAR_32 < VAR_33)
    for (VAR_31 = VAR_32; VAR_31 <= VAR_33; ++VAR_31)
     FUNC_31(VAR_13, VAR_23, VAR_19, VAR_20, VAR_31);
   else
    for (VAR_31 = VAR_32; VAR_31 >= VAR_33; --VAR_31)
     FUNC_31(VAR_13, VAR_23, VAR_19, VAR_20, VAR_31);
  }

  VAR_24++;
 }


 VAR_21 = FUNC_25(VAR_13, FUNC_8(VAR_13, VAR_20));
 FUNC_18(VAR_13, VAR_19, FUNC_0(VAR_1), VAR_21);
 FUNC_18(VAR_13, VAR_19, FUNC_0(VAR_4), VAR_20);

 VAR_28 = FUNC_11(VAR_13, VAR_23);
 VAR_30 = FUNC_3(VAR_13, VAR_28, sizeof(*VAR_30));
 for (VAR_29 = 0; VAR_29 < VAR_28; VAR_29++)
 {
  pdf_obj *VAR_35 = FUNC_21(VAR_13, VAR_23, VAR_29);
  VAR_30[VAR_29] = FUNC_28(VAR_13, VAR_35);
 }





 if (VAR_22)
 {
  pdf_obj *VAR_36 = FUNC_24(VAR_13, VAR_23, 1);
  pdf_obj *VAR_37 = FUNC_24(VAR_13, VAR_23, 1);
  int VAR_38 = FUNC_16(VAR_13, VAR_22);

  VAR_25 = FUNC_23(VAR_13, VAR_23, 32);

  for (VAR_29 = 0; VAR_29 < VAR_38; VAR_29++)
  {
   pdf_obj *VAR_39 = FUNC_14(VAR_13, VAR_22, VAR_29);
   pdf_obj *VAR_40 = FUNC_15(VAR_13, VAR_22, VAR_29);
   pdf_obj *VAR_41 = FUNC_13(VAR_13, VAR_40, FUNC_0(VAR_2));

   VAR_41 = FUNC_7(VAR_13, VAR_41 ? VAR_41 : VAR_40, 0);
   if (FUNC_2(VAR_13, VAR_41, VAR_30, VAR_28))
   {
    pdf_obj *VAR_42 = FUNC_26(VAR_13, FUNC_27(VAR_13, VAR_39), FUNC_33(FUNC_27(VAR_13, VAR_39)));
    FUNC_10(VAR_13, VAR_25, VAR_42);
    FUNC_9(VAR_13, VAR_25, VAR_40);
   }
  }

  FUNC_17(VAR_13, VAR_37, FUNC_0(VAR_6), VAR_25);
  FUNC_17(VAR_13, VAR_36, FUNC_0(VAR_3), VAR_37);
  FUNC_17(VAR_13, VAR_18, FUNC_0(VAR_6), VAR_36);

  FUNC_19(VAR_13, VAR_36);
  FUNC_19(VAR_13, VAR_37);
  FUNC_19(VAR_13, VAR_22);
 }


 for (VAR_29 = 0; VAR_29 < VAR_28; VAR_29++)
 {
  pdf_obj *VAR_43 = FUNC_21(VAR_13, VAR_23, VAR_29);

  pdf_obj *VAR_44 = FUNC_13(VAR_13, VAR_43, FUNC_0(VAR_0));

  int VAR_45 = FUNC_8(VAR_13, VAR_44);
  int VAR_46;

  for (VAR_46 = 0; VAR_46 < VAR_45; VAR_46++)
  {
   pdf_obj *VAR_47 = FUNC_7(VAR_13, VAR_44, VAR_46);

   if (!FUNC_22(VAR_13, FUNC_13(VAR_13, VAR_47, FUNC_0(VAR_11)), FUNC_0(VAR_5)))
    continue;

   if (!FUNC_1(VAR_13, VAR_47, VAR_28, VAR_30, VAR_25))
   {

    FUNC_6(VAR_13, VAR_44, VAR_46);
    VAR_45--;
    VAR_46--;
   }
  }
 }

 if (FUNC_32(VAR_13, VAR_23, VAR_26, VAR_28, VAR_30, VAR_25) == 0)
 {
  FUNC_12(VAR_13, VAR_18, FUNC_0(VAR_8));
 }

 FUNC_4(VAR_13, VAR_30);
 FUNC_19(VAR_13, VAR_25);
 FUNC_19(VAR_13, VAR_18);
}
