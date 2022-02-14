
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef int png_byte ;
struct TYPE_4__ {int flags; int io_state; scalar_t__ crc; int chunk_name; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;

int
FUNC_3(png_structrp VAR_6)
{
   png_byte VAR_7[4];
   png_uint_32 VAR_8;
   int VAR_9 = 1;

   if (FUNC_0(VAR_6->chunk_name) != 0)
   {
      if ((VAR_6->flags & VAR_0) ==
          (VAR_2 | VAR_1))
         VAR_9 = 0;
   }

   else
   {
      if ((VAR_6->flags & VAR_3) != 0)
         VAR_9 = 0;
   }






   FUNC_2(VAR_6, VAR_7, 4);

   if (VAR_9 != 0)
   {
      VAR_8 = FUNC_1(VAR_7);
      return ((int)(VAR_8 != VAR_6->crc));
   }

   else
      return (0);
}
