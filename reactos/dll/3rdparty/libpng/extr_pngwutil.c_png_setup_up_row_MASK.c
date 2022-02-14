
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef unsigned int* png_bytep ;
typedef unsigned int png_byte ;
struct TYPE_3__ {unsigned int* try_row; unsigned int* row_buf; unsigned int* prev_row; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static size_t
FUNC_1(png_structrp VAR_1, size_t VAR_2, size_t VAR_3)
{
   png_bytep VAR_4, VAR_5, VAR_6;
   size_t VAR_7;
   size_t VAR_8 = 0;
   unsigned int VAR_9;

   VAR_1->try_row[0] = VAR_0;

   for (VAR_7 = 0, VAR_4 = VAR_1->row_buf + 1, VAR_5 = VAR_1->try_row + 1,
       VAR_6 = VAR_1->prev_row + 1; VAR_7 < VAR_2;
       VAR_7++, VAR_4++, VAR_6++, VAR_5++)
   {
      VAR_9 = *VAR_5 = (png_byte)(((int)*VAR_4 - (int)*VAR_6) & 0xff);



      VAR_8 += (VAR_9 < 128) ? VAR_9 : 256 - VAR_9;


      if (VAR_8 > VAR_3)
        break;
   }

   return (VAR_8);
}
