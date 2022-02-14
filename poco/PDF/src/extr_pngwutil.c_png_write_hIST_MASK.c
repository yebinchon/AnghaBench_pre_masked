
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int * png_uint_16p ;
typedef TYPE_1__* png_structp ;
typedef int png_size_t ;
typedef int png_byte ;
struct TYPE_7__ {scalar_t__ num_palette; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;

void
FUNC_7(png_structp VAR_2, png_uint_16p VAR_3, int VAR_4)
{



   int VAR_5;
   png_byte VAR_6[3];

   FUNC_0(1, "in png_write_hIST\n");
   if (VAR_4 > (int)VAR_2->num_palette)
   {
      FUNC_1(3, "num_hist = %d, num_palette = %d\n", VAR_4,
         VAR_2->num_palette);
      FUNC_3(VAR_2, "Invalid number of histogram entries specified");
      return;
   }

   FUNC_6(VAR_2, VAR_1, (png_uint_32)(VAR_4 * 2));
   for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   {
      FUNC_2(VAR_6, VAR_3[VAR_5]);
      FUNC_4(VAR_2, VAR_6, (png_size_t)2);
   }
   FUNC_5(VAR_2);
}
