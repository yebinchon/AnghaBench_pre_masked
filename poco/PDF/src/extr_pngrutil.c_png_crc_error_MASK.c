
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef int png_byte ;
struct TYPE_4__ {int* chunk_name; int flags; scalar_t__ crc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;

int
FUNC_2(png_structp VAR_4)
{
   png_byte VAR_5[4];
   png_uint_32 VAR_6;
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

   FUNC_1(VAR_4, VAR_5, 4);

   if (VAR_7)
   {
      VAR_6 = FUNC_0(VAR_5);
      return ((int)(VAR_6 != VAR_4->crc));
   }
   else
      return (0);
}
