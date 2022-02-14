
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi_uc ;
typedef int stbi__context ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static stbi_uc *FUNC_3(stbi__context *VAR_0, int VAR_1, stbi_uc *VAR_2)
{
   int VAR_3=0x80, VAR_4;

   for (VAR_4=0; VAR_4<4; ++VAR_4, VAR_3>>=1) {
      if (VAR_1 & VAR_3) {
         if (FUNC_0(VAR_0)) return FUNC_1("bad file","PIC file too short");
         VAR_2[VAR_4]=FUNC_2(VAR_0);
      }
   }

   return VAR_2;
}
