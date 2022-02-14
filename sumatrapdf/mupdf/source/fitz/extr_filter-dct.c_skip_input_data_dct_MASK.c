
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct jpeg_source_mgr {size_t bytes_in_buffer; long next_input_byte; int (* fill_input_buffer ) (TYPE_1__*) ;} ;
typedef TYPE_1__* j_decompress_ptr ;
struct TYPE_4__ {struct jpeg_source_mgr* src; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(j_decompress_ptr VAR_0, long VAR_1)
{
 struct jpeg_source_mgr *VAR_2 = VAR_0->src;
 if (VAR_1 > 0)
 {
  while ((size_t)VAR_1 > VAR_2->bytes_in_buffer)
  {
   VAR_1 -= (long)VAR_2->bytes_in_buffer;
   (void) VAR_2->fill_input_buffer(VAR_0);
  }
  VAR_2->next_input_byte += VAR_1;
  VAR_2->bytes_in_buffer -= VAR_1;
 }
}
