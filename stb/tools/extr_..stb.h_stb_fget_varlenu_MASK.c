
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 unsigned int FUNC_0 (int *) ;

unsigned int FUNC_1(FILE *VAR_0)
{
   unsigned int VAR_1;
   unsigned char VAR_2;
   VAR_2 = FUNC_0(VAR_0);

   if (VAR_2 >= 0x80) {
      if (VAR_2 >= 0xc0) {
         if (VAR_2 >= 0xe0) {
            if (VAR_2 == 0xf0) VAR_1 = FUNC_0(VAR_0) << 24;
            else VAR_1 = (VAR_2 - 0xe0) << 24;
            VAR_1 += FUNC_0(VAR_0) << 16;
         }
         else
            VAR_1 = (VAR_2 - 0xc0) << 16;
         VAR_1 += FUNC_0(VAR_0) << 8;
      } else
         VAR_1 = (VAR_2 - 0x80) << 8;
      VAR_1 += FUNC_0(VAR_0);
   } else
      VAR_1 = VAR_2;
   return VAR_1;
}
