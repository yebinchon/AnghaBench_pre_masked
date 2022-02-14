
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef int * png_bytep ;
typedef void* png_byte ;
struct TYPE_3__ {int * row_buf; int * prev_row; int * try_row; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(png_structrp VAR_1, png_uint_32 VAR_2,
    size_t VAR_3)
{
   png_bytep VAR_4, VAR_5, VAR_6, VAR_7;
   png_uint_32 VAR_8;

   VAR_1->try_row[0] = VAR_0;

   for (VAR_8 = 0, VAR_4 = VAR_1->row_buf + 1, VAR_5 = VAR_1->try_row + 1,
       VAR_6 = VAR_1->prev_row + 1; VAR_8 < VAR_2; VAR_8++)
   {
      *VAR_5++ = (png_byte)(((int)*VAR_4++ - ((int)*VAR_6++ / 2)) & 0xff);
   }

   for (VAR_7 = VAR_1->row_buf + 1; VAR_8 < VAR_3; VAR_8++)
   {
      *VAR_5++ = (png_byte)(((int)*VAR_4++ - (((int)*VAR_6++ + (int)*VAR_7++) / 2))
          & 0xff);
   }
}
