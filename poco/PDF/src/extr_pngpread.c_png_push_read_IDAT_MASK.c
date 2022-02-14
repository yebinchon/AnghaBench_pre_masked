
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef scalar_t__ png_size_t ;
typedef int png_byte ;
struct TYPE_12__ {int mode; int buffer_size; scalar_t__ push_length; int flags; scalar_t__ idat_size; scalar_t__ save_buffer_size; scalar_t__ current_buffer_size; int current_buffer_ptr; int save_buffer_ptr; int process_mode; int chunk_name; } ;
typedef int PNG_CONST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int *,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

void
FUNC_10(png_structp VAR_5)
{



   if (!(VAR_5->mode & VAR_2))
   {
      png_byte VAR_6[4];

      if (VAR_5->buffer_size < 8)
      {
         FUNC_8(VAR_5);
         return;
      }

      FUNC_7(VAR_5, VAR_6, 4);
      VAR_5->push_length = FUNC_4(VAR_5,VAR_6);
      FUNC_9(VAR_5);
      FUNC_2(VAR_5, VAR_5->chunk_name, 4);
      VAR_5->mode |= VAR_2;

      if (FUNC_5(VAR_5->chunk_name, VAR_4, 4))
      {
         VAR_5->process_mode = VAR_3;
         if (!(VAR_5->flags & VAR_1))
            FUNC_3(VAR_5, "Not enough compressed data");
         return;
      }

      VAR_5->idat_size = VAR_5->push_length;
   }
   if (VAR_5->idat_size && VAR_5->save_buffer_size)
   {
      png_size_t VAR_7;

      if (VAR_5->idat_size < (png_uint_32)VAR_5->save_buffer_size)
      {
         VAR_7 = (png_size_t)VAR_5->idat_size;

         if((png_uint_32)VAR_7 != VAR_5->idat_size)
            FUNC_3(VAR_5, "save_size overflowed in pngpread");
      }
      else
         VAR_7 = VAR_5->save_buffer_size;

      FUNC_0(VAR_5, VAR_5->save_buffer_ptr, VAR_7);
      if (!(VAR_5->flags & VAR_1))
         FUNC_6(VAR_5, VAR_5->save_buffer_ptr, VAR_7);
      VAR_5->idat_size -= VAR_7;
      VAR_5->buffer_size -= VAR_7;
      VAR_5->save_buffer_size -= VAR_7;
      VAR_5->save_buffer_ptr += VAR_7;
   }
   if (VAR_5->idat_size && VAR_5->current_buffer_size)
   {
      png_size_t VAR_8;

      if (VAR_5->idat_size < (png_uint_32)VAR_5->current_buffer_size)
      {
         VAR_8 = (png_size_t)VAR_5->idat_size;

         if((png_uint_32)VAR_8 != VAR_5->idat_size)
            FUNC_3(VAR_5, "save_size overflowed in pngpread");
      }
      else
         VAR_8 = VAR_5->current_buffer_size;

      FUNC_0(VAR_5, VAR_5->current_buffer_ptr, VAR_8);
      if (!(VAR_5->flags & VAR_1))
        FUNC_6(VAR_5, VAR_5->current_buffer_ptr, VAR_8);

      VAR_5->idat_size -= VAR_8;
      VAR_5->buffer_size -= VAR_8;
      VAR_5->current_buffer_size -= VAR_8;
      VAR_5->current_buffer_ptr += VAR_8;
   }
   if (!VAR_5->idat_size)
   {
      if (VAR_5->buffer_size < 4)
      {
         FUNC_8(VAR_5);
         return;
      }

      FUNC_1(VAR_5, 0);
      VAR_5->mode &= ~VAR_2;
      VAR_5->mode |= VAR_0;
   }
}
