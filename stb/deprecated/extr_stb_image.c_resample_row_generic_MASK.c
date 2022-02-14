
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__uint8 ;


 int FUNC_0 (int *) ;

__attribute__((used)) static stbi__uint8 *FUNC_1(stbi__uint8 *VAR_0, stbi__uint8 *VAR_1, stbi__uint8 *VAR_2, int VAR_3, int VAR_4)
{

   int VAR_5,VAR_6;
   FUNC_0(VAR_2);
   for (VAR_5=0; VAR_5 < VAR_3; ++VAR_5)
      for (VAR_6=0; VAR_6 < VAR_4; ++VAR_6)
         VAR_0[VAR_5*VAR_4+VAR_6] = VAR_1[VAR_5];
   return VAR_0;
}
