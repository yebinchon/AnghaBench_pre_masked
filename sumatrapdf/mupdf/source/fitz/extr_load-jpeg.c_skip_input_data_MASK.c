
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct jpeg_source_mgr {size_t bytes_in_buffer; size_t next_input_byte; } ;
typedef TYPE_1__* j_decompress_ptr ;
struct TYPE_3__ {struct jpeg_source_mgr* src; } ;



__attribute__((used)) static void FUNC_0(j_decompress_ptr VAR_0, long VAR_1)
{
 struct jpeg_source_mgr *VAR_2 = VAR_0->src;
 if (VAR_1 > 0)
 {
  size_t VAR_3 = (size_t)VAR_1;
  if (VAR_3 > VAR_2->bytes_in_buffer)
   VAR_3 = (size_t)VAR_2->bytes_in_buffer;
  VAR_2->next_input_byte += VAR_3;
  VAR_2->bytes_in_buffer -= VAR_3;
 }
}
