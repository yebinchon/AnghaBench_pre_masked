
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int png_uint_32 ;
typedef TYPE_1__* png_row_infop ;
typedef TYPE_2__* png_const_color_8p ;
typedef unsigned int* png_bytep ;
typedef void* png_byte ;
struct TYPE_6__ {int red; int green; int blue; int gray; int alpha; } ;
struct TYPE_5__ {int color_type; int bit_depth; size_t rowbytes; unsigned int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 unsigned int FUNC_1 (unsigned int*) ;

__attribute__((used)) static void
FUNC_2(png_row_infop VAR_3, png_bytep VAR_4,
    png_const_color_8p VAR_5)
{
   FUNC_0(1, "in png_do_shift");

   if (VAR_3->color_type != VAR_2)
   {
      int VAR_6[4], VAR_7[4];
      unsigned int VAR_8 = 0;

      if ((VAR_3->color_type & VAR_1) != 0)
      {
         VAR_6[VAR_8] = VAR_3->bit_depth - VAR_5->red;
         VAR_7[VAR_8] = VAR_5->red;
         VAR_8++;

         VAR_6[VAR_8] = VAR_3->bit_depth - VAR_5->green;
         VAR_7[VAR_8] = VAR_5->green;
         VAR_8++;

         VAR_6[VAR_8] = VAR_3->bit_depth - VAR_5->blue;
         VAR_7[VAR_8] = VAR_5->blue;
         VAR_8++;
      }

      else
      {
         VAR_6[VAR_8] = VAR_3->bit_depth - VAR_5->gray;
         VAR_7[VAR_8] = VAR_5->gray;
         VAR_8++;
      }

      if ((VAR_3->color_type & VAR_0) != 0)
      {
         VAR_6[VAR_8] = VAR_3->bit_depth - VAR_5->alpha;
         VAR_7[VAR_8] = VAR_5->alpha;
         VAR_8++;
      }


      if (VAR_3->bit_depth < 8)
      {
         png_bytep VAR_9 = VAR_4;
         size_t VAR_10;
         unsigned int VAR_11;
         size_t VAR_12 = VAR_3->rowbytes;

         if (VAR_5->gray == 1 && VAR_3->bit_depth == 2)
            VAR_11 = 0x55;

         else if (VAR_3->bit_depth == 4 && VAR_5->gray == 3)
            VAR_11 = 0x11;

         else
            VAR_11 = 0xff;

         for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++, VAR_9++)
         {
            int VAR_13;
            unsigned int VAR_14, VAR_15;

            VAR_14 = *VAR_9;
            VAR_15 = 0;

            for (VAR_13 = VAR_6[0]; VAR_13 > -VAR_7[0]; VAR_13 -= VAR_7[0])
            {
               if (VAR_13 > 0)
                  VAR_15 |= VAR_14 << VAR_13;

               else
                  VAR_15 |= (VAR_14 >> (-VAR_13)) & VAR_11;
            }

            *VAR_9 = (png_byte)(VAR_15 & 0xff);
         }
      }

      else if (VAR_3->bit_depth == 8)
      {
         png_bytep VAR_16 = VAR_4;
         png_uint_32 VAR_17;
         png_uint_32 VAR_18 = VAR_8 * VAR_3->width;

         for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++, VAR_16++)
         {
            unsigned int VAR_19 = VAR_17%VAR_8;
            int VAR_20;
            unsigned int VAR_21, VAR_22;

            VAR_21 = *VAR_16;
            VAR_22 = 0;

            for (VAR_20 = VAR_6[VAR_19]; VAR_20 > -VAR_7[VAR_19]; VAR_20 -= VAR_7[VAR_19])
            {
               if (VAR_20 > 0)
                  VAR_22 |= VAR_21 << VAR_20;

               else
                  VAR_22 |= VAR_21 >> (-VAR_20);
            }

            *VAR_16 = (png_byte)(VAR_22 & 0xff);
         }
      }

      else
      {
         png_bytep VAR_23;
         png_uint_32 VAR_24;
         png_uint_32 VAR_25 = VAR_8 * VAR_3->width;

         for (VAR_23 = VAR_4, VAR_24 = 0; VAR_24 < VAR_25; VAR_24++)
         {
            unsigned int VAR_26 = VAR_24%VAR_8;
            int VAR_27;
            unsigned int VAR_28, VAR_29;

            VAR_29 = FUNC_1(VAR_23);
            VAR_28 = 0;

            for (VAR_27 = VAR_6[VAR_26]; VAR_27 > -VAR_7[VAR_26]; VAR_27 -= VAR_7[VAR_26])
            {
               if (VAR_27 > 0)
                  VAR_28 |= VAR_29 << VAR_27;

               else
                  VAR_28 |= VAR_29 >> (-VAR_27);
            }
            *VAR_23++ = (png_byte)((VAR_28 >> 8) & 0xff);
            *VAR_23++ = (png_byte)(VAR_28 & 0xff);
         }
      }
   }
}
