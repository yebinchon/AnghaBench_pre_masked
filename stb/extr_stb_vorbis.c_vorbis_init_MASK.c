
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int alloc_buffer_length_in_bytes; } ;
typedef TYPE_1__ stb_vorbis_alloc ;
struct TYPE_7__ {int temp_offset; int page_crc_tests; int * f; int close_on_free; int * codebooks; int * stream; int error; scalar_t__ eof; TYPE_1__ alloc; } ;
typedef TYPE_2__ stb_vorbis ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_1(stb_vorbis *VAR_2, const stb_vorbis_alloc *VAR_3)
{
   FUNC_0(VAR_2, 0, sizeof(*VAR_2));
   if (VAR_3) {
      VAR_2->alloc = *VAR_3;
      VAR_2->alloc.alloc_buffer_length_in_bytes = (VAR_2->alloc.alloc_buffer_length_in_bytes+3) & ~3;
      VAR_2->temp_offset = VAR_2->alloc.alloc_buffer_length_in_bytes;
   }
   VAR_2->eof = 0;
   VAR_2->error = VAR_1;
   VAR_2->stream = ((void*)0);
   VAR_2->codebooks = ((void*)0);
   VAR_2->page_crc_tests = -1;

   VAR_2->close_on_free = VAR_0;
   VAR_2->f = ((void*)0);

}
