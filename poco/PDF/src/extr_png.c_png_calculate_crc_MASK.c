
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uInt ;
typedef TYPE_1__* png_structp ;
typedef scalar_t__ png_size_t ;
typedef int png_bytep ;
struct TYPE_3__ {int* chunk_name; int flags; int crc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;

void
FUNC_1(png_structp VAR_4, png_bytep VAR_5, png_size_t VAR_6)
{
   int VAR_7 = 1;

   if (VAR_4->chunk_name[0] & 0x20)
   {
      if ((VAR_4->flags & VAR_0) ==
          (VAR_2 | VAR_1))
         VAR_7 = 0;
   }
   else
   {
      if (VAR_4->flags & VAR_3)
         VAR_7 = 0;
   }

   if (VAR_7)
      VAR_4->crc = FUNC_0(VAR_4->crc, VAR_5, (uInt)VAR_6);
}
