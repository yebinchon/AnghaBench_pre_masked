
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aucRef ;
typedef int aucMagic ;
typedef int FILE ;


 int FUNC_0 (int *,int,unsigned char*,int) ;

int FUNC_1(FILE *VAR_0)
{


   unsigned char VAR_1[] = {0x55, 0xAA};
   unsigned char VAR_2[] = {'N','T','F','S',' ',' ',' ',' '};

   if( ! FUNC_0(VAR_0, 0x1FE, VAR_1, sizeof(VAR_1)))
      return 0;
   if( ! FUNC_0(VAR_0, 0x03, VAR_2, sizeof(VAR_2)))
      return 0;
   return 1;
}
