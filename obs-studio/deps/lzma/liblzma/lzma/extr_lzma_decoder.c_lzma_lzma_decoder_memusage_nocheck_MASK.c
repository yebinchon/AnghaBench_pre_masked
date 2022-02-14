
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int dict_size; } ;
typedef TYPE_1__ lzma_options_lzma ;
typedef int lzma_coder ;


 scalar_t__ FUNC_0 (int ) ;

extern uint64_t
FUNC_1(const void *VAR_0)
{
 const lzma_options_lzma *const VAR_1 = VAR_0;
 return sizeof(lzma_coder) + FUNC_0(VAR_1->dict_size);
}
