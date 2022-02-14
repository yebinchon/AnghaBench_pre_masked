
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef int png_byte ;
struct TYPE_7__ {int flags; int chunk_name; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,scalar_t__) ;

int
FUNC_5(png_structrp VAR_3, png_uint_32 VAR_4)
{



   while (VAR_4 > 0)
   {
      png_uint_32 VAR_5;
      png_byte VAR_6[VAR_2];

      VAR_5 = (sizeof VAR_6);
      if (VAR_5 > VAR_4)
         VAR_5 = VAR_4;
      VAR_4 -= VAR_5;

      FUNC_4(VAR_3, VAR_6, VAR_5);
   }

   if (FUNC_3(VAR_3) != 0)
   {
      if (FUNC_0(VAR_3->chunk_name) != 0 ?
          (VAR_3->flags & VAR_0) == 0 :
          (VAR_3->flags & VAR_1) != 0)
      {
         FUNC_2(VAR_3, "CRC error");
      }

      else
         FUNC_1(VAR_3, "CRC error");

      return (1);
   }

   return (0);
}
