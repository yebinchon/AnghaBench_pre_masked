
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef int * png_bytep ;
typedef void* png_byte ;
struct TYPE_3__ {int * prev_row; int * row_buf; int * try_row; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static size_t
FUNC_1(png_structrp VAR_1, png_uint_32 VAR_2,
    size_t VAR_3, size_t VAR_4)
{
   png_bytep VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
   size_t VAR_10;
   size_t VAR_11 = 0;
   unsigned int VAR_12;

   VAR_1->try_row[0] = VAR_0;

   for (VAR_10 = 0, VAR_5 = VAR_1->row_buf + 1, VAR_6 = VAR_1->try_row + 1,
       VAR_7 = VAR_1->prev_row + 1; VAR_10 < VAR_2; VAR_10++)
   {
      VAR_12 = *VAR_6++ = (png_byte)(((int)*VAR_5++ - (int)*VAR_7++) & 0xff);




      VAR_11 += (VAR_12 < 128) ? VAR_12 : 256 - VAR_12;

   }

   for (VAR_9 = VAR_1->row_buf + 1, VAR_8 = VAR_1->prev_row + 1; VAR_10 < VAR_3;
        VAR_10++)
   {
      int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

      VAR_14 = *VAR_7++;
      VAR_15 = *VAR_8++;
      VAR_13 = *VAR_9++;

      VAR_19 = VAR_14 - VAR_15;
      VAR_18 = VAR_13 - VAR_15;






      VAR_16 = VAR_19 < 0 ? -VAR_19 : VAR_19;
      VAR_17 = VAR_18 < 0 ? -VAR_18 : VAR_18;
      VAR_18 = (VAR_19 + VAR_18) < 0 ? -(VAR_19 + VAR_18) : VAR_19 + VAR_18;


      VAR_19 = (VAR_16 <= VAR_17 && VAR_16 <=VAR_18) ? VAR_13 : (VAR_17 <= VAR_18) ? VAR_14 : VAR_15;

      VAR_12 = *VAR_6++ = (png_byte)(((int)*VAR_5++ - VAR_19) & 0xff);




      VAR_11 += (VAR_12 < 128) ? VAR_12 : 256 - VAR_12;


      if (VAR_11 > VAR_4)
        break;
   }

   return (VAR_11);
}
