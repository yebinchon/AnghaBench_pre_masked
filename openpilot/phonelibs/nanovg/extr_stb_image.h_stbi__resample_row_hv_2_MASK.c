
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi_uc ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static stbi_uc *FUNC_3(stbi_uc *VAR_0, stbi_uc *VAR_1, stbi_uc *VAR_2, int VAR_3, int VAR_4)
{

   int VAR_5,VAR_6,VAR_7;
   if (VAR_3 == 1) {
      VAR_0[0] = VAR_0[1] = FUNC_2(3*VAR_1[0] + VAR_2[0] + 2);
      return VAR_0;
   }

   VAR_7 = 3*VAR_1[0] + VAR_2[0];
   VAR_0[0] = FUNC_2(VAR_7+2);
   for (VAR_5=1; VAR_5 < VAR_3; ++VAR_5) {
      VAR_6 = VAR_7;
      VAR_7 = 3*VAR_1[VAR_5]+VAR_2[VAR_5];
      VAR_0[VAR_5*2-1] = FUNC_1(3*VAR_6 + VAR_7 + 8);
      VAR_0[VAR_5*2 ] = FUNC_1(3*VAR_7 + VAR_6 + 8);
   }
   VAR_0[VAR_3*2-1] = FUNC_2(VAR_7+2);

   FUNC_0(VAR_4);

   return VAR_0;
}
