
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uncompressed_size; int compressed_size; int need_properties; int need_dictionary_reset; int* buf; int need_state_reset; size_t buf_pos; int opt_cur; } ;
typedef TYPE_1__ lzma_coder ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,size_t*) ;

__attribute__((used)) static void
FUNC_2(lzma_coder *VAR_3)
{
 FUNC_0(VAR_3->uncompressed_size > 0);
 FUNC_0(VAR_3->uncompressed_size <= VAR_2);
 FUNC_0(VAR_3->compressed_size > 0);
 FUNC_0(VAR_3->compressed_size <= VAR_0);

 size_t VAR_4;

 if (VAR_3->need_properties) {
  VAR_4 = 0;

  if (VAR_3->need_dictionary_reset)
   VAR_3->buf[VAR_4] = 0x80 + (3 << 5);
  else
   VAR_3->buf[VAR_4] = 0x80 + (2 << 5);
 } else {
  VAR_4 = 1;

  if (VAR_3->need_state_reset)
   VAR_3->buf[VAR_4] = 0x80 + (1 << 5);
  else
   VAR_3->buf[VAR_4] = 0x80;
 }


 VAR_3->buf_pos = VAR_4;


 size_t VAR_5 = VAR_3->uncompressed_size - 1;
 VAR_3->buf[VAR_4++] += VAR_5 >> 16;
 VAR_3->buf[VAR_4++] = (VAR_5 >> 8) & 0xFF;
 VAR_3->buf[VAR_4++] = VAR_5 & 0xFF;


 VAR_5 = VAR_3->compressed_size - 1;
 VAR_3->buf[VAR_4++] = VAR_5 >> 8;
 VAR_3->buf[VAR_4++] = VAR_5 & 0xFF;


 if (VAR_3->need_properties)
  FUNC_1(&VAR_3->opt_cur, VAR_3->buf + VAR_4);

 VAR_3->need_properties = 0;
 VAR_3->need_state_reset = 0;
 VAR_3->need_dictionary_reset = 0;



 VAR_3->compressed_size += VAR_1;

 return;
}
