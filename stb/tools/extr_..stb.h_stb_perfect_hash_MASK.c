
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int stb_uint ;
struct TYPE_3__ {unsigned int multiplicand; unsigned int* table; int b_mask; int table_mask; int* large_bmap; int* small_bmap; } ;
typedef TYPE_1__ stb_perfect ;



int FUNC_0(stb_perfect *VAR_0, unsigned int VAR_1)
{
   stb_uint VAR_2 = VAR_1 * VAR_0->multiplicand;
   stb_uint VAR_3 = VAR_1 >> 16;
   stb_uint VAR_4 = (VAR_2 >> 24) + VAR_3;
   stb_uint VAR_5 = (VAR_2 + VAR_3) >> 12;
   if (VAR_0->table == ((void*)0)) return -1;
   VAR_4 &= VAR_0->b_mask;
   VAR_5 &= VAR_0->table_mask;
   if (VAR_0->large_bmap)
      VAR_5 ^= VAR_0->large_bmap[VAR_4];
   else
      VAR_5 ^= VAR_0->small_bmap[VAR_4];
   return VAR_0->table[VAR_5] == VAR_1 ? VAR_5 : -1;
}
