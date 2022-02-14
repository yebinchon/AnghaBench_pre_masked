
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef int * png_const_uint_16p ;
typedef int png_byte ;
struct TYPE_7__ {scalar_t__ num_palette; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;

void
FUNC_7(png_structrp VAR_1, png_const_uint_16p VAR_2, int VAR_3)
{
   int VAR_4;
   png_byte VAR_5[3];

   FUNC_0(1, "in png_write_hIST");

   if (VAR_3 > (int)VAR_1->num_palette)
   {
      FUNC_1(3, "num_hist = %d, num_palette = %d", VAR_3,
          VAR_1->num_palette);

      FUNC_3(VAR_1, "Invalid number of histogram entries specified");
      return;
   }

   FUNC_6(VAR_1, VAR_0, (png_uint_32)(VAR_3 * 2));

   for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   {
      FUNC_2(VAR_5, VAR_2[VAR_4]);
      FUNC_4(VAR_1, VAR_5, 2);
   }

   FUNC_5(VAR_1);
}
