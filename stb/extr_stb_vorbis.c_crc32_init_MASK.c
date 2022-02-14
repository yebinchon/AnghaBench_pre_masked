
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(void)
{
   int VAR_2,VAR_3;
   uint32 VAR_4;
   for(VAR_2=0; VAR_2 < 256; VAR_2++) {
      for (VAR_4=(uint32) VAR_2 << 24, VAR_3=0; VAR_3 < 8; ++VAR_3)
         VAR_4 = (VAR_4 << 1) ^ (VAR_4 >= (1U<<31) ? VAR_0 : 0);
      VAR_1[VAR_2] = VAR_4;
   }
}
