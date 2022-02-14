
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aucRef ;
typedef int FILE ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *,unsigned long,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(FILE *VAR_1)
{
   unsigned char VAR_2[] = {0x55, 0xAA};
   unsigned long VAR_3 = 0x1FE;

   for (VAR_3 = 0x1FE; VAR_3 < VAR_0; VAR_3 += 0x200) {
      if (!FUNC_0(VAR_1, VAR_3, VAR_2, sizeof(VAR_2)))
      return 0;
   }
   return 1;
}
