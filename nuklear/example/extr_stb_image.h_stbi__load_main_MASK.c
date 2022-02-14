
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__context ;


 unsigned char* FUNC_0 (int *,int*,int*,int*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned char* FUNC_2 (char*,char*) ;
 unsigned char* FUNC_3 (int *,int*,int*,int*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 float* FUNC_5 (int *,int*,int*,int*,int) ;
 scalar_t__ FUNC_6 (int *) ;
 unsigned char* FUNC_7 (float*,int,int,int) ;
 unsigned char* FUNC_8 (int *,int*,int*,int*,int) ;
 scalar_t__ FUNC_9 (int *) ;
 unsigned char* FUNC_10 (int *,int*,int*,int*,int) ;
 scalar_t__ FUNC_11 (int *) ;
 unsigned char* FUNC_12 (int *,int*,int*,int*,int) ;
 scalar_t__ FUNC_13 (int *) ;
 unsigned char* FUNC_14 (int *,int*,int*,int*,int) ;
 scalar_t__ FUNC_15 (int *) ;
 unsigned char* FUNC_16 (int *,int*,int*,int*,int) ;
 scalar_t__ FUNC_17 (int *) ;
 unsigned char* FUNC_18 (int *,int*,int*,int*,int) ;
 scalar_t__ FUNC_19 (int *) ;

__attribute__((used)) static unsigned char *FUNC_20(stbi__context *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int VAR_4)
{

   if (FUNC_9(VAR_0)) return FUNC_8(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4);


   if (FUNC_13(VAR_0)) return FUNC_12(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4);


   if (FUNC_1(VAR_0)) return FUNC_0(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4);


   if (FUNC_4(VAR_0)) return FUNC_3(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4);


   if (FUNC_17(VAR_0)) return FUNC_16(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4);


   if (FUNC_11(VAR_0)) return FUNC_10(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4);


   if (FUNC_15(VAR_0)) return FUNC_14(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4);



   if (FUNC_6(VAR_0)) {
      float *VAR_5 = FUNC_5(VAR_0, VAR_1,VAR_2,VAR_3,VAR_4);
      return FUNC_7(VAR_5, *VAR_1, *VAR_2, VAR_4 ? VAR_4 : *VAR_3);
   }




   if (FUNC_19(VAR_0))
      return FUNC_18(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4);


   return FUNC_2("unknown image type", "Image not of any known type, or corrupt");
}
