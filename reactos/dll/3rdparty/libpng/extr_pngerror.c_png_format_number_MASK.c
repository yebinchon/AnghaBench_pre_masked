
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* png_const_charp ;
typedef char* png_charp ;
typedef scalar_t__ png_alloc_size_t ;
png_charp
FUNC_0(png_const_charp VAR_0, png_charp VAR_1, int VAR_2,
    png_alloc_size_t VAR_3)
{
   int VAR_4 = 0;
   int VAR_5 = 1;
   int VAR_6 = 0;

   *--VAR_1 = '\0';




   while (VAR_1 > VAR_0 && (VAR_3 != 0 || VAR_4 < VAR_5))
   {

      static const char VAR_7[] = "0123456789ABCDEF";

      switch (VAR_2)
      {
         case 130:

            VAR_5 = 5;
            if (VAR_6 != 0 || VAR_3 % 10 != 0)
            {
               *--VAR_1 = VAR_7[VAR_3 % 10];
               VAR_6 = 1;
            }
            VAR_3 /= 10;
            break;

         case 132:

            VAR_5 = 2;


         case 129:
            *--VAR_1 = VAR_7[VAR_3 % 10];
            VAR_3 /= 10;
            break;

         case 131:

            VAR_5 = 2;


         case 128:
            *--VAR_1 = VAR_7[VAR_3 & 0xf];
            VAR_3 >>= 4;
            break;

         default:
            VAR_3 = 0;
            break;
      }


      ++VAR_4;


      if ((VAR_2 == 130) && (VAR_4 == 5) && (VAR_1 > VAR_0))
      {




         if (VAR_6 != 0)
            *--VAR_1 = '.';
         else if (VAR_3 == 0)
            *--VAR_1 = '0';
      }
   }

   return VAR_1;
}
