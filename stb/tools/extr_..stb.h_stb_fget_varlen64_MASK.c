
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint64 ;
typedef int stb_uint ;
typedef int FILE ;


 int FUNC_0 (int *) ;

stb_uint64 FUNC_1(FILE *VAR_0)
{
   stb_uint64 VAR_1;
   unsigned char VAR_2;
   VAR_2 = FUNC_0(VAR_0);

   if (VAR_2 >= 0x80) {
      if (VAR_2 >= 0xc0) {
         if (VAR_2 >= 0xe0) {
            if (VAR_2 >= 0xf0) {
               if (VAR_2 >= 0xf8) {
                  if (VAR_2 >= 0xfc) {
                     if (VAR_2 >= 0xfe) {
                        if (VAR_2 >= 0xff)
                           VAR_1 = (stb_uint64) FUNC_0(VAR_0) << 56;
                        else
                           VAR_1 = (stb_uint64) (VAR_2 - 0xfe) << 56;
                        VAR_1 |= (stb_uint64) FUNC_0(VAR_0) << 48;
                     } else VAR_1 = (stb_uint64) (VAR_2 - 0xfc) << 48;
                     VAR_1 |= (stb_uint64) FUNC_0(VAR_0) << 40;
                  } else VAR_1 = (stb_uint64) (VAR_2 - 0xf8) << 40;
                  VAR_1 |= (stb_uint64) FUNC_0(VAR_0) << 32;
               } else VAR_1 = (stb_uint64) (VAR_2 - 0xf0) << 32;
               VAR_1 |= (stb_uint) FUNC_0(VAR_0) << 24;
            } else VAR_1 = (stb_uint) (VAR_2 - 0xe0) << 24;
            VAR_1 |= (stb_uint) FUNC_0(VAR_0) << 16;
         } else VAR_1 = (stb_uint) (VAR_2 - 0xc0) << 16;
         VAR_1 |= (stb_uint) FUNC_0(VAR_0) << 8;
      } else VAR_1 = (stb_uint) (VAR_2 - 0x80) << 8;
      VAR_1 |= FUNC_0(VAR_0);
   } else
      VAR_1 = VAR_2;

   return (VAR_1 & 1) ? ~(VAR_1 >> 1) : (VAR_1 >> 1);
}
