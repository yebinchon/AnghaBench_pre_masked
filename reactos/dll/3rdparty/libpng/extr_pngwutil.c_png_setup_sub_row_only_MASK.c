
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef scalar_t__* png_bytep ;
typedef scalar_t__ png_byte ;
struct TYPE_3__ {scalar_t__* row_buf; scalar_t__* try_row; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(png_structrp VAR_1, png_uint_32 VAR_2,
    size_t VAR_3)
{
   png_bytep VAR_4, VAR_5, VAR_6;
   size_t VAR_7;

   VAR_1->try_row[0] = VAR_0;

   for (VAR_7 = 0, VAR_4 = VAR_1->row_buf + 1, VAR_5 = VAR_1->try_row + 1; VAR_7 < VAR_2;
        VAR_7++, VAR_4++, VAR_5++)
   {
      *VAR_5 = *VAR_4;
   }

   for (VAR_6 = VAR_1->row_buf + 1; VAR_7 < VAR_3;
      VAR_7++, VAR_4++, VAR_6++, VAR_5++)
   {
      *VAR_5 = (png_byte)(((int)*VAR_4 - (int)*VAR_6) & 0xff);
   }
}
