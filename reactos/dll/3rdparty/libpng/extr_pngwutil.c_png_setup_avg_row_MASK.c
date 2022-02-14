
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
 int FUNC_0 (int) ;

__attribute__((used)) static size_t
FUNC_1(png_structrp VAR_1, png_uint_32 VAR_2,
    size_t VAR_3, size_t VAR_4)
{
   png_bytep VAR_5, VAR_6, VAR_7, VAR_8;
   png_uint_32 VAR_9;
   size_t VAR_10 = 0;
   unsigned int VAR_11;

   VAR_1->try_row[0] = VAR_0;

   for (VAR_9 = 0, VAR_5 = VAR_1->row_buf + 1, VAR_6 = VAR_1->try_row + 1,
       VAR_7 = VAR_1->prev_row + 1; VAR_9 < VAR_2; VAR_9++)
   {
      VAR_11 = *VAR_6++ = (png_byte)(((int)*VAR_5++ - ((int)*VAR_7++ / 2)) & 0xff);




      VAR_10 += (VAR_11 < 128) ? VAR_11 : 256 - VAR_11;

   }

   for (VAR_8 = VAR_1->row_buf + 1; VAR_9 < VAR_3; VAR_9++)
   {
      VAR_11 = *VAR_6++ = (png_byte)(((int)*VAR_5++ - (((int)*VAR_7++ + (int)*VAR_8++) / 2))
          & 0xff);




      VAR_10 += (VAR_11 < 128) ? VAR_11 : 256 - VAR_11;


      if (VAR_10 > VAR_4)
        break;
   }

   return (VAR_10);
}
