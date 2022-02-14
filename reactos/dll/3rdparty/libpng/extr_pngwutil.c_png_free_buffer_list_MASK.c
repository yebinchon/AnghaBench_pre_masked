
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int png_structrp ;
typedef TYPE_1__* png_compression_bufferp ;
struct TYPE_4__ {struct TYPE_4__* next; } ;


 int FUNC_0 (int ,TYPE_1__*) ;

void
FUNC_1(png_structrp VAR_0, png_compression_bufferp *VAR_1)
{
   png_compression_bufferp VAR_2 = *VAR_1;

   if (VAR_2 != ((void*)0))
   {
      *VAR_1 = ((void*)0);

      do
      {
         png_compression_bufferp VAR_3 = VAR_2->next;

         FUNC_0(VAR_0, VAR_2);
         VAR_2 = VAR_3;
      }
      while (VAR_2 != ((void*)0));
   }
}
