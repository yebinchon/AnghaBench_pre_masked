
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef scalar_t__* png_bytep ;
typedef scalar_t__ png_byte ;
struct TYPE_3__ {scalar_t__* prev_row; scalar_t__* try_row; scalar_t__* row_buf; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(png_structrp VAR_1, size_t VAR_2)
{
   png_bytep VAR_3, VAR_4, VAR_5;
   size_t VAR_6;

   VAR_1->try_row[0] = VAR_0;

   for (VAR_6 = 0, VAR_3 = VAR_1->row_buf + 1, VAR_4 = VAR_1->try_row + 1,
       VAR_5 = VAR_1->prev_row + 1; VAR_6 < VAR_2;
       VAR_6++, VAR_3++, VAR_5++, VAR_4++)
   {
      *VAR_4 = (png_byte)(((int)*VAR_3 - (int)*VAR_5) & 0xff);
   }
}
