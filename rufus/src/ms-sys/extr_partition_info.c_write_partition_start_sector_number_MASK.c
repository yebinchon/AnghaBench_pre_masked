
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,int,unsigned char*,int) ;

int FUNC_1(FILE *VAR_0, int VAR_1)
{
   unsigned char VAR_2[4];
   unsigned long VAR_3 = (unsigned long)VAR_1;

   if(!VAR_3)
      return 0;



   VAR_2[0] = (unsigned char)(VAR_3 & 0xff);
   VAR_2[1] = (unsigned char)((VAR_3 & 0xff00) >> 8);
   VAR_2[2] = (unsigned char)((VAR_3 & 0xff0000) >> 16);
   VAR_2[3] = (unsigned char)((VAR_3 & 0xff000000) >> 24);
   return FUNC_0(VAR_0, 0x1c, VAR_2, 4);
}
