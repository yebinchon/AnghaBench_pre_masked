
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef unsigned int* png_bytep ;
typedef unsigned int png_byte ;
struct TYPE_3__ {unsigned int* try_row; unsigned int* row_buf; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static size_t
FUNC_1(png_structrp VAR_1, png_uint_32 VAR_2,
    size_t VAR_3, size_t VAR_4)
{
   png_bytep VAR_5, VAR_6, VAR_7;
   size_t VAR_8;
   size_t VAR_9 = 0;
   unsigned int VAR_10;

   VAR_1->try_row[0] = VAR_0;

   for (VAR_8 = 0, VAR_5 = VAR_1->row_buf + 1, VAR_6 = VAR_1->try_row + 1; VAR_8 < VAR_2;
        VAR_8++, VAR_5++, VAR_6++)
   {
      VAR_10 = *VAR_6 = *VAR_5;



      VAR_9 += (VAR_10 < 128) ? VAR_10 : 256 - VAR_10;

   }

   for (VAR_7 = VAR_1->row_buf + 1; VAR_8 < VAR_3;
      VAR_8++, VAR_5++, VAR_7++, VAR_6++)
   {
      VAR_10 = *VAR_6 = (png_byte)(((int)*VAR_5 - (int)*VAR_7) & 0xff);



      VAR_9 += (VAR_10 < 128) ? VAR_10 : 256 - VAR_10;


      if (VAR_9 > VAR_4)
        break;
   }

   return (VAR_9);
}
