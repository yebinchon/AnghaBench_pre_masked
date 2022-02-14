
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__context ;


 float* FUNC_0 (char*,char*) ;
 int FUNC_1 (float*,int*,int*,int*,int) ;
 float* FUNC_2 (int *,int*,int*,int*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 float* FUNC_4 (unsigned char*,int,int,int) ;
 unsigned char* FUNC_5 (int *,int*,int*,int*,int) ;

__attribute__((used)) static float *FUNC_6(stbi__context *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int VAR_4)
{
   unsigned char *VAR_5;

   if (FUNC_3(VAR_0)) {
      float *VAR_6 = FUNC_2(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4);
      if (VAR_6)
         FUNC_1(VAR_6,VAR_1,VAR_2,VAR_3,VAR_4);
      return VAR_6;
   }

   VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
   if (VAR_5)
      return FUNC_4(VAR_5, *VAR_1, *VAR_2, VAR_4 ? VAR_4 : *VAR_3);
   return FUNC_0("unknown image type", "Image not of any known type, or corrupt");
}
