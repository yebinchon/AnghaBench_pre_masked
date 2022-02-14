
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi_uc ;



__attribute__((used)) static void FUNC_0(int VAR_0,stbi_uc *VAR_1,const stbi_uc *VAR_2)
{
   int VAR_3=0x80,VAR_4;

   for (VAR_4=0;VAR_4<4; ++VAR_4, VAR_3>>=1)
      if (VAR_0&VAR_3)
         VAR_1[VAR_4]=VAR_2[VAR_4];
}
