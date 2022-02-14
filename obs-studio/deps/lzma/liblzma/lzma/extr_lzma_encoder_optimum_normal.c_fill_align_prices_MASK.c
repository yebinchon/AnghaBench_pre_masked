
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {scalar_t__ align_price_count; int pos_align; int * align_prices; } ;
typedef TYPE_1__ lzma_coder ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,size_t) ;

__attribute__((used)) static void
FUNC_1(lzma_coder *VAR_2)
{
 for (uint32_t VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
  VAR_2->align_prices[VAR_3] = FUNC_0(
    VAR_2->pos_align, VAR_0, VAR_3);

 VAR_2->align_price_count = 0;
 return;
}
