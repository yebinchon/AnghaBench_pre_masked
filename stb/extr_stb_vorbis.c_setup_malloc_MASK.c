
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ alloc_buffer; } ;
struct TYPE_5__ {int setup_memory_required; int setup_offset; scalar_t__ temp_offset; TYPE_1__ alloc; } ;
typedef TYPE_2__ vorb ;


 void* FUNC_0 (int) ;

__attribute__((used)) static void *FUNC_1(vorb *VAR_0, int VAR_1)
{
   VAR_1 = (VAR_1+3) & ~3;
   VAR_0->setup_memory_required += VAR_1;
   if (VAR_0->alloc.alloc_buffer) {
      void *VAR_2 = (char *) VAR_0->alloc.alloc_buffer + VAR_0->setup_offset;
      if (VAR_0->setup_offset + VAR_1 > VAR_0->temp_offset) return ((void*)0);
      VAR_0->setup_offset += VAR_1;
      return VAR_2;
   }
   return VAR_1 ? FUNC_0(VAR_1) : ((void*)0);
}
