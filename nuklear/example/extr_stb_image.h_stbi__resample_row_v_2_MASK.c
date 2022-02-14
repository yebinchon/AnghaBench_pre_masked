
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi_uc ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static stbi_uc* FUNC_2(stbi_uc *VAR_0, stbi_uc *VAR_1, stbi_uc *VAR_2, int VAR_3, int VAR_4)
{

   int VAR_5;
   FUNC_0(VAR_4);
   for (VAR_5=0; VAR_5 < VAR_3; ++VAR_5)
      VAR_0[VAR_5] = FUNC_1(3*VAR_1[VAR_5] + VAR_2[VAR_5] + 2);
   return VAR_0;
}
