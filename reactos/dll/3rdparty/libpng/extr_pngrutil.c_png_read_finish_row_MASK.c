
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef int png_byte ;
struct TYPE_4__ {int row_number; int num_rows; scalar_t__ interlaced; int iwidth; int pass; int const width; int transformations; int const height; scalar_t__ rowbytes; int prev_row; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(png_structrp VAR_1)
{



   static const png_byte VAR_2[7] = {0, 4, 0, 2, 0, 1, 0};


   static const png_byte VAR_3[7] = {8, 8, 4, 4, 2, 2, 1};


   static const png_byte VAR_4[7] = {0, 0, 4, 0, 2, 0, 1};


   static const png_byte VAR_5[7] = {8, 8, 8, 4, 4, 2, 2};

   FUNC_1(1, "in png_read_finish_row");
   VAR_1->row_number++;
   if (VAR_1->row_number < VAR_1->num_rows)
      return;

   if (VAR_1->interlaced != 0)
   {
      VAR_1->row_number = 0;




      FUNC_0(VAR_1->prev_row, 0, VAR_1->rowbytes + 1);

      do
      {
         VAR_1->pass++;

         if (VAR_1->pass >= 7)
            break;

         VAR_1->iwidth = (VAR_1->width +
            VAR_3[VAR_1->pass] - 1 -
            VAR_2[VAR_1->pass]) /
            VAR_3[VAR_1->pass];

         if ((VAR_1->transformations & VAR_0) == 0)
         {
            VAR_1->num_rows = (VAR_1->height +
                VAR_5[VAR_1->pass] - 1 -
                VAR_4[VAR_1->pass]) /
                VAR_5[VAR_1->pass];
         }

         else
            break;

      } while (VAR_1->num_rows == 0 || VAR_1->iwidth == 0);

      if (VAR_1->pass < 7)
         return;
   }


   FUNC_2(VAR_1);
}
