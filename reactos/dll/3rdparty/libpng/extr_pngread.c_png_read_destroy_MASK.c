
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* png_structrp ;
struct TYPE_7__ {int * data; } ;
struct TYPE_8__ {int free_me; int * riffled_palette; int * chunk_list; TYPE_1__ unknown_chunk; int * save_buffer; int zstream; int * trans_alpha; int * palette; int * quantize_index; int * palette_lookup; int * read_buffer; int * big_prev_row; int * big_row_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_5(png_structrp VAR_2)
{
   FUNC_1(1, "in png_read_destroy");





   FUNC_3(VAR_2, VAR_2->big_row_buf);
   VAR_2->big_row_buf = ((void*)0);
   FUNC_3(VAR_2, VAR_2->big_prev_row);
   VAR_2->big_prev_row = ((void*)0);
   FUNC_3(VAR_2, VAR_2->read_buffer);
   VAR_2->read_buffer = ((void*)0);
   if ((VAR_2->free_me & VAR_0) != 0)
   {
      FUNC_4(VAR_2, VAR_2->palette);
      VAR_2->palette = ((void*)0);
   }
   VAR_2->free_me &= ~VAR_0;
   FUNC_0(&VAR_2->zstream);
}
