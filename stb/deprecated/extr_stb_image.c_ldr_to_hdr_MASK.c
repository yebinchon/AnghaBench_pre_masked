
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float stbi_uc ;


 float* FUNC_0 (char*,char*) ;
 int FUNC_1 (float*) ;
 int VAR_0 ;
 float VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (float,int ) ;

__attribute__((used)) static float *FUNC_4(stbi_uc *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
   int VAR_6,VAR_7,VAR_8;
   float *VAR_9 = (float *) FUNC_2(VAR_3 * VAR_4 * VAR_5 * sizeof(float));
   if (VAR_9 == ((void*)0)) { FUNC_1(VAR_2); return FUNC_0("outofmem", "Out of memory"); }

   if (VAR_5 & 1) VAR_8 = VAR_5; else VAR_8 = VAR_5-1;
   for (VAR_6=0; VAR_6 < VAR_3*VAR_4; ++VAR_6) {
      for (VAR_7=0; VAR_7 < VAR_8; ++VAR_7) {
         VAR_9[VAR_6*VAR_5 + VAR_7] = (float) FUNC_3(VAR_2[VAR_6*VAR_5+VAR_7]/255.0f, VAR_0) * VAR_1;
      }
      if (VAR_7 < VAR_5) VAR_9[VAR_6*VAR_5 + VAR_7] = VAR_2[VAR_6*VAR_5+VAR_7]/255.0f;
   }
   FUNC_1(VAR_2);
   return VAR_9;
}
