
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef scalar_t__ png_size_t ;
struct TYPE_6__ {scalar_t__ skip_length; scalar_t__ save_buffer_size; int buffer_size; scalar_t__ current_buffer_size; int process_mode; int current_buffer_ptr; int save_buffer_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(png_structp VAR_1)
{
   if (VAR_1->skip_length && VAR_1->save_buffer_size)
   {
      png_size_t VAR_2;

      if (VAR_1->skip_length < (png_uint_32)VAR_1->save_buffer_size)
         VAR_2 = (png_size_t)VAR_1->skip_length;
      else
         VAR_2 = VAR_1->save_buffer_size;

      FUNC_0(VAR_1, VAR_1->save_buffer_ptr, VAR_2);

      VAR_1->skip_length -= VAR_2;
      VAR_1->buffer_size -= VAR_2;
      VAR_1->save_buffer_size -= VAR_2;
      VAR_1->save_buffer_ptr += VAR_2;
   }
   if (VAR_1->skip_length && VAR_1->current_buffer_size)
   {
      png_size_t VAR_3;

      if (VAR_1->skip_length < (png_uint_32)VAR_1->current_buffer_size)
         VAR_3 = (png_size_t)VAR_1->skip_length;
      else
         VAR_3 = VAR_1->current_buffer_size;

      FUNC_0(VAR_1, VAR_1->current_buffer_ptr, VAR_3);

      VAR_1->skip_length -= VAR_3;
      VAR_1->buffer_size -= VAR_3;
      VAR_1->current_buffer_size -= VAR_3;
      VAR_1->current_buffer_ptr += VAR_3;
   }
   if (!VAR_1->skip_length)
   {
      if (VAR_1->buffer_size < 4)
      {
         FUNC_2(VAR_1);
         return;
      }

      FUNC_1(VAR_1, 0);
      VAR_1->process_mode = VAR_0;
   }
}
