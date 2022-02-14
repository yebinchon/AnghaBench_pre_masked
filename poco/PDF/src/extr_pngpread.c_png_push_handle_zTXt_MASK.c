
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef void* png_size_t ;
typedef int png_infop ;
typedef char* png_charp ;
struct TYPE_7__ {int mode; char* current_text; char* current_text_ptr; int process_mode; void* current_text_left; void* current_text_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;

void
FUNC_4(png_structp VAR_3, png_infop VAR_4, png_uint_32
   VAR_5)
{
   if (!(VAR_3->mode & VAR_1) || (VAR_3->mode & VAR_0))
      {
         FUNC_0(VAR_3, "Out of place zTXt");
         VAR_4 = VAR_4;
      }
   VAR_3->current_text = (png_charp)FUNC_1(VAR_3,
       (png_uint_32)(VAR_5+1));
   VAR_3->current_text[VAR_5] = '\0';
   VAR_3->current_text_ptr = VAR_3->current_text;
   VAR_3->current_text_size = (png_size_t)VAR_5;
   VAR_3->current_text_left = (png_size_t)VAR_5;
   VAR_3->process_mode = VAR_2;
}
