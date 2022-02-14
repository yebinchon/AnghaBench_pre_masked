
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ stbi_uc ;


 int FUNC_0 (float*) ;
 scalar_t__ FUNC_1 (float,int ) ;
 scalar_t__* FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (float) ;
 int VAR_0 ;
 float VAR_1 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static stbi_uc *FUNC_5(float *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
   int VAR_6,VAR_7,VAR_8;
   stbi_uc *VAR_9 = (stbi_uc *) FUNC_4(VAR_3 * VAR_4 * VAR_5);
   if (VAR_9 == ((void*)0)) { FUNC_0(VAR_2); return FUNC_2("outofmem", "Out of memory"); }

   if (VAR_5 & 1) VAR_8 = VAR_5; else VAR_8 = VAR_5-1;
   for (VAR_6=0; VAR_6 < VAR_3*VAR_4; ++VAR_6) {
      for (VAR_7=0; VAR_7 < VAR_8; ++VAR_7) {
         float VAR_10 = (float) FUNC_1(VAR_2[VAR_6*VAR_5+VAR_7]*VAR_1, VAR_0) * 255 + 0.5f;
         if (VAR_10 < 0) VAR_10 = 0;
         if (VAR_10 > 255) VAR_10 = 255;
         VAR_9[VAR_6*VAR_5 + VAR_7] = (stbi_uc) FUNC_3(VAR_10);
      }
      if (VAR_7 < VAR_5) {
         float VAR_11 = VAR_2[VAR_6*VAR_5+VAR_7] * 255 + 0.5f;
         if (VAR_11 < 0) VAR_11 = 0;
         if (VAR_11 > 255) VAR_11 = 255;
         VAR_9[VAR_6*VAR_5 + VAR_7] = (stbi_uc) FUNC_3(VAR_11);
      }
   }
   FUNC_0(VAR_2);
   return VAR_9;
}
