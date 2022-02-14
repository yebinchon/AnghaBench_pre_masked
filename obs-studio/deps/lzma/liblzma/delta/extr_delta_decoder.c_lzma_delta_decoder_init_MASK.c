
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lzma_ret ;
struct TYPE_4__ {int * code; } ;
typedef TYPE_1__ lzma_next_coder ;
typedef int lzma_filter_info ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int const*) ;

extern lzma_ret
FUNC_1(lzma_next_coder *VAR_1, lzma_allocator *VAR_2,
  const lzma_filter_info *VAR_3)
{
 VAR_1->code = &VAR_0;
 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
