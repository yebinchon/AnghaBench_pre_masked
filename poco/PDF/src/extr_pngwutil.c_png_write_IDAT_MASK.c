
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef int png_size_t ;
typedef int* png_bytep ;
typedef int png_byte ;
struct TYPE_5__ {int mode; scalar_t__ compression_type; int height; int width; int channels; int bit_depth; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int*,int) ;

void
FUNC_3(png_structp VAR_4, png_bytep VAR_5, png_size_t VAR_6)
{



   FUNC_0(1, "in png_write_IDAT\n");



   if (!(VAR_4->mode & VAR_1) &&
       VAR_4->compression_type == VAR_0)
   {
      unsigned int VAR_7 = VAR_5[0];
      if ((VAR_7 & 0x0f) == 8 && (VAR_7 & 0xf0) <= 0x70)
      {



         if (VAR_6 >= 2 &&
             VAR_4->height < 16384 && VAR_4->width < 16384)
         {
            png_uint_32 VAR_8 = VAR_4->height *
               ((VAR_4->width *
               VAR_4->channels * VAR_4->bit_depth + 15) >> 3);
            unsigned int VAR_9 = VAR_7 >> 4;
            unsigned int VAR_10 = 1 << (VAR_9 + 7);
            while (VAR_8 <= VAR_10 &&
                   VAR_10 >= 256)
            {
               VAR_9--;
               VAR_10 >>= 1;
            }
            VAR_7 = (VAR_7 & 0x0f) | (VAR_9 << 4);
            if (VAR_5[0] != (png_byte)VAR_7)
            {
               VAR_5[0] = (png_byte)VAR_7;
               VAR_5[1] &= 0xe0;
               VAR_5[1] += (png_byte)(0x1f - ((VAR_7 << 8) + VAR_5[1]) % 0x1f);
            }
         }
      }
      else
         FUNC_1(VAR_4,
            "Invalid zlib compression method or flags in IDAT");
   }

   FUNC_2(VAR_4, VAR_3, VAR_5, VAR_6);
   VAR_4->mode |= VAR_1;
}
