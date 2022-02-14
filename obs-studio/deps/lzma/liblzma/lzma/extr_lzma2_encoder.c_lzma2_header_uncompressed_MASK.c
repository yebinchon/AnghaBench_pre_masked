
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uncompressed_size; int need_dictionary_reset; int* buf; scalar_t__ buf_pos; } ;
typedef TYPE_1__ lzma_coder ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(lzma_coder *VAR_1)
{
 FUNC_0(VAR_1->uncompressed_size > 0);
 FUNC_0(VAR_1->uncompressed_size <= VAR_0);



 if (VAR_1->need_dictionary_reset)
  VAR_1->buf[0] = 1;
 else
  VAR_1->buf[0] = 2;

 VAR_1->need_dictionary_reset = 0;


 VAR_1->buf[1] = (VAR_1->uncompressed_size - 1) >> 8;
 VAR_1->buf[2] = (VAR_1->uncompressed_size - 1) & 0xFF;


 VAR_1->buf_pos = 0;
 return;
}
