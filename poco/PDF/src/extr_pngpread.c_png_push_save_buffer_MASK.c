
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef scalar_t__ png_size_t ;
typedef int * png_bytep ;
struct TYPE_6__ {scalar_t__ save_buffer_size; scalar_t__ save_buffer_ptr; scalar_t__ save_buffer; scalar_t__ current_buffer_size; scalar_t__ save_buffer_max; scalar_t__ buffer_size; int * current_buffer_ptr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,int *,scalar_t__) ;

void
FUNC_4(png_structp VAR_1)
{
   if (VAR_1->save_buffer_size)
   {
      if (VAR_1->save_buffer_ptr != VAR_1->save_buffer)
      {
         png_size_t VAR_2,VAR_3;
         png_bytep VAR_4;
         png_bytep VAR_5;

         VAR_3 = VAR_1->save_buffer_size;
         for (VAR_2 = 0, VAR_4 = VAR_1->save_buffer_ptr, VAR_5 = VAR_1->save_buffer;
            VAR_2 < VAR_3; VAR_2++, VAR_4++, VAR_5++)
         {
            *VAR_5 = *VAR_4;
         }
      }
   }
   if (VAR_1->save_buffer_size + VAR_1->current_buffer_size >
      VAR_1->save_buffer_max)
   {
      png_size_t VAR_6;
      png_bytep VAR_7;

      if (VAR_1->save_buffer_size > VAR_0 -
         (VAR_1->current_buffer_size + 256))
      {
        FUNC_0(VAR_1, "Potential overflow of save_buffer");
      }
      VAR_6 = VAR_1->save_buffer_size + VAR_1->current_buffer_size + 256;
      VAR_7 = VAR_1->save_buffer;
      VAR_1->save_buffer = (png_bytep)FUNC_2(VAR_1,
         (png_uint_32)VAR_6);
      FUNC_3(VAR_1->save_buffer, VAR_7, VAR_1->save_buffer_size);
      FUNC_1(VAR_1, VAR_7);
      VAR_1->save_buffer_max = VAR_6;
   }
   if (VAR_1->current_buffer_size)
   {
      FUNC_3(VAR_1->save_buffer + VAR_1->save_buffer_size,
         VAR_1->current_buffer_ptr, VAR_1->current_buffer_size);
      VAR_1->save_buffer_size += VAR_1->current_buffer_size;
      VAR_1->current_buffer_size = 0;
   }
   VAR_1->save_buffer_ptr = VAR_1->save_buffer;
   VAR_1->buffer_size = 0;
}
