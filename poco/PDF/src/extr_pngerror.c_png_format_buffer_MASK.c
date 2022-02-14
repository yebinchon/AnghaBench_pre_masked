
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* png_structp ;
typedef int * png_const_charp ;
typedef char* png_charp ;
typedef char png_byte ;
struct TYPE_3__ {int* chunk_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 char* VAR_1 ;
 int FUNC_1 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_2(png_structp VAR_2, png_charp VAR_3, png_const_charp
   VAR_4)
{
   int VAR_5 = 0, VAR_6 = 0;

   while (VAR_6 < 4)
   {
      int VAR_7 = VAR_2->chunk_name[VAR_6++];
      if (FUNC_0(VAR_7))
      {
         VAR_3[VAR_5++] = '[';
         VAR_3[VAR_5++] = VAR_1[(VAR_7 & 0xf0) >> 4];
         VAR_3[VAR_5++] = VAR_1[VAR_7 & 0x0f];
         VAR_3[VAR_5++] = ']';
      }
      else
      {
         VAR_3[VAR_5++] = (png_byte)VAR_7;
      }
   }

   if (VAR_4 == ((void*)0))
      VAR_3[VAR_5] = '\0';
   else
   {
      VAR_3[VAR_5++] = ':';
      VAR_3[VAR_5++] = ' ';
      FUNC_1(VAR_3+VAR_5, VAR_4, VAR_0);
      VAR_3[VAR_5+VAR_0-1] = '\0';
   }
}
