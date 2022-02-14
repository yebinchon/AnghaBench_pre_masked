
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int pdf_crypt ;
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
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 unsigned char* FUNC_3 (int *,int *) ;
 unsigned char* FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 unsigned char* FUNC_8 (int *,int *) ;
 unsigned char* FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *,int ,int ) ;
 int * FUNC_12 (int *,int *,int ,int) ;
 int FUNC_13 (int *,int *,int ,int) ;
 int FUNC_14 (int *,int *,int ,char*) ;
 int FUNC_15 (int *,int *,int ,char*,int) ;
 int * FUNC_16 (int *,int *) ;

__attribute__((used)) static void
FUNC_17(fz_context *VAR_18, pdf_document *VAR_19, pdf_crypt *VAR_20)
{
 unsigned char *VAR_21, *VAR_22;
 pdf_obj *VAR_23;
 int VAR_24;

 VAR_24 = FUNC_7(VAR_18, VAR_20);

 VAR_23 = FUNC_12(VAR_18, FUNC_16(VAR_18, VAR_19), FUNC_0(VAR_3), 10);

 FUNC_14(VAR_18, VAR_23, FUNC_0(VAR_5), "Standard");
 FUNC_13(VAR_18, VAR_23, FUNC_0(VAR_11), VAR_24);
 FUNC_13(VAR_18, VAR_23, FUNC_0(VAR_17), FUNC_10(VAR_18, VAR_20));
 FUNC_13(VAR_18, VAR_23, FUNC_0(VAR_6), FUNC_2(VAR_18, VAR_20));
 FUNC_13(VAR_18, VAR_23, FUNC_0(VAR_9), FUNC_5(VAR_18, VAR_20));
 FUNC_11(VAR_18, VAR_23, FUNC_0(VAR_4), FUNC_1(VAR_18, VAR_20));

 VAR_21 = FUNC_4(VAR_18, VAR_20);
 VAR_22 = FUNC_9(VAR_18, VAR_20);

 if (VAR_24 < 4)
 {
  FUNC_15(VAR_18, VAR_23, FUNC_0(VAR_7), (char *) VAR_21, 32);
  FUNC_15(VAR_18, VAR_23, FUNC_0(VAR_15), (char *) VAR_22, 32);
 }
 else if (VAR_24 == 4)
 {
  pdf_obj *VAR_25;

  FUNC_14(VAR_18, VAR_23, FUNC_0(VAR_13), "StdCF");
  FUNC_14(VAR_18, VAR_23, FUNC_0(VAR_14), "StdCF");

  VAR_25 = FUNC_12(VAR_18, VAR_23, FUNC_0(VAR_1), 1);
  VAR_25 = FUNC_12(VAR_18, VAR_25, FUNC_0(VAR_12), 3);
  FUNC_14(VAR_18, VAR_25, FUNC_0(VAR_0), "DocOpen");
  FUNC_14(VAR_18, VAR_25, FUNC_0(VAR_2), "AESV2");
  FUNC_13(VAR_18, VAR_25, FUNC_0(VAR_6), 16);
  FUNC_15(VAR_18, VAR_23, FUNC_0(VAR_7), (char *) VAR_21, 32);
  FUNC_15(VAR_18, VAR_23, FUNC_0(VAR_15), (char *) VAR_22, 32);
 }
 else if (VAR_24 == 6)
 {
  unsigned char *VAR_26 = FUNC_3(VAR_18, VAR_20);
  unsigned char *VAR_27 = FUNC_8(VAR_18, VAR_20);
  pdf_obj *VAR_28;

  FUNC_14(VAR_18, VAR_23, FUNC_0(VAR_13), "StdCF");
  FUNC_14(VAR_18, VAR_23, FUNC_0(VAR_14), "StdCF");

  VAR_28 = FUNC_12(VAR_18, VAR_23, FUNC_0(VAR_1), 1);
  VAR_28 = FUNC_12(VAR_18, VAR_28, FUNC_0(VAR_12), 3);
  FUNC_14(VAR_18, VAR_28, FUNC_0(VAR_0), "DocOpen");
  FUNC_14(VAR_18, VAR_28, FUNC_0(VAR_2), "AESV3");
  FUNC_13(VAR_18, VAR_28, FUNC_0(VAR_6), 32);
  FUNC_15(VAR_18, VAR_23, FUNC_0(VAR_7), (char *) VAR_21, 48);
  FUNC_15(VAR_18, VAR_23, FUNC_0(VAR_15), (char *) VAR_22, 48);
  FUNC_15(VAR_18, VAR_23, FUNC_0(VAR_8), (char *) VAR_26, 32);
  FUNC_15(VAR_18, VAR_23, FUNC_0(VAR_16), (char *) VAR_27, 32);
  FUNC_15(VAR_18, VAR_23, FUNC_0(VAR_10), (char *) FUNC_6(VAR_18, VAR_20), 16);
 }
}
