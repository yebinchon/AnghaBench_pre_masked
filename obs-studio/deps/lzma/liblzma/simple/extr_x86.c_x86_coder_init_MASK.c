
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int lzma_simple ;
typedef scalar_t__ lzma_ret ;
struct TYPE_8__ {TYPE_2__* coder; } ;
typedef TYPE_3__ lzma_next_coder ;
typedef int lzma_filter_info ;
typedef int lzma_allocator ;
struct TYPE_7__ {TYPE_1__* simple; } ;
struct TYPE_6__ {scalar_t__ prev_pos; scalar_t__ prev_mask; } ;


 scalar_t__ const VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int *,int const*,int *,int,int,int,int) ;
 int VAR_1 ;

__attribute__((used)) static lzma_ret
FUNC_1(lzma_next_coder *VAR_2, lzma_allocator *VAR_3,
  const lzma_filter_info *VAR_4, bool VAR_5)
{
 const lzma_ret VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4,
   &VAR_1, sizeof(lzma_simple), 5, 1, VAR_5);

 if (VAR_6 == VAR_0) {
  VAR_2->coder->simple->prev_mask = 0;
  VAR_2->coder->simple->prev_pos = (uint32_t)(-5);
 }

 return VAR_6;
}
