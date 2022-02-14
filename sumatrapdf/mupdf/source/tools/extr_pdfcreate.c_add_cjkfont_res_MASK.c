
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_font ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 unsigned char* FUNC_2 (int ,int,int*,int*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ,int *,unsigned char const*,int,int,int ) ;
 int * FUNC_5 (int ,int ,int *,int,int,int) ;
 int * FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ,int *,int ,int *) ;
 int FUNC_8 (int ,int *,char*,int *) ;
 int FUNC_9 (int ,int *) ;
 int * FUNC_10 (int ,int ,int) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static void FUNC_12(pdf_obj *VAR_3, char *VAR_4, char *VAR_5, char *VAR_6, char *VAR_7)
{
 const unsigned char *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 fz_font *VAR_14;
 pdf_obj *VAR_15, *VAR_16;

 VAR_11 = FUNC_3(VAR_5);

 if (VAR_6 && !FUNC_11(VAR_6, "V"))
  VAR_12 = 1;
 else
  VAR_12 = 0;

 if (VAR_7 && (!FUNC_11(VAR_7, "sans") || !FUNC_11(VAR_7, "sans-serif")))
  VAR_13 = 0;
 else
  VAR_13 = 1;

 VAR_8 = FUNC_2(VAR_1, VAR_11, &VAR_9, &VAR_10);
 VAR_14 = FUNC_4(VAR_1, ((void*)0), VAR_8, VAR_9, VAR_10, 0);

 VAR_15 = FUNC_6(VAR_1, VAR_3, FUNC_0(VAR_0));
 if (!VAR_15)
 {
  VAR_15 = FUNC_10(VAR_1, VAR_2, 10);
  FUNC_7(VAR_1, VAR_3, FUNC_0(VAR_0), VAR_15);
 }

 VAR_16 = FUNC_5(VAR_1, VAR_2, VAR_14, VAR_11, VAR_12, VAR_13);
 FUNC_8(VAR_1, VAR_15, VAR_4, VAR_16);
 FUNC_9(VAR_1, VAR_16);

 FUNC_1(VAR_1, VAR_14);
}
