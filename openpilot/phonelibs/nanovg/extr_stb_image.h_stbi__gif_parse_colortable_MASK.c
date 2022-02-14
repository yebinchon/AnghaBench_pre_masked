
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi_uc ;
typedef int stbi__context ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(stbi__context *VAR_0, stbi_uc VAR_1[256][4], int VAR_2, int VAR_3)
{
   int VAR_4;
   for (VAR_4=0; VAR_4 < VAR_2; ++VAR_4) {
      VAR_1[VAR_4][2] = FUNC_0(VAR_0);
      VAR_1[VAR_4][1] = FUNC_0(VAR_0);
      VAR_1[VAR_4][0] = FUNC_0(VAR_0);
      VAR_1[VAR_4][3] = VAR_3 == VAR_4 ? 0 : 255;
   }
}
