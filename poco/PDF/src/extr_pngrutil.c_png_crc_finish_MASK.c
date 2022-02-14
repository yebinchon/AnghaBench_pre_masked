
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef scalar_t__ png_size_t ;
struct TYPE_7__ {scalar_t__ zbuf_size; int* chunk_name; int flags; int zbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__) ;

int
FUNC_4(png_structp VAR_2, png_uint_32 VAR_3)
{
   png_size_t VAR_4;
   png_size_t VAR_5 = VAR_2->zbuf_size;

   for (VAR_4 = (png_size_t)VAR_3; VAR_4 > VAR_5; VAR_4 -= VAR_5)
   {
      FUNC_3(VAR_2, VAR_2->zbuf, VAR_2->zbuf_size);
   }
   if (VAR_4)
   {
      FUNC_3(VAR_2, VAR_2->zbuf, VAR_4);
   }

   if (FUNC_2(VAR_2))
   {
      if (((VAR_2->chunk_name[0] & 0x20) &&
           !(VAR_2->flags & VAR_0)) ||
          (!(VAR_2->chunk_name[0] & 0x20) &&
          (VAR_2->flags & VAR_1)))
      {
         FUNC_1(VAR_2, "CRC error");
      }
      else
      {
         FUNC_0(VAR_2, "CRC error");
      }
      return (1);
   }

   return (0);
}
