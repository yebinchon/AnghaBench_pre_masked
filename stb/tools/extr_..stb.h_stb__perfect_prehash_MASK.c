
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int stb_uint16 ;
typedef int stb_uint ;
struct TYPE_3__ {int multiplicand; int b_mask; int table_mask; } ;
typedef TYPE_1__ stb_perfect ;



__attribute__((used)) static void FUNC_0(stb_perfect *VAR_0, stb_uint VAR_1, stb_uint16 *VAR_2, stb_uint16 *VAR_3)
{
   stb_uint VAR_4 = VAR_1 * VAR_0->multiplicand;
   stb_uint VAR_5 = VAR_1 >> 16;
   stb_uint VAR_6 = (VAR_4 >> 24) + VAR_5;
   stb_uint VAR_7 = (VAR_4 + VAR_5) >> 12;
   VAR_6 &= VAR_0->b_mask;
   VAR_7 &= VAR_0->table_mask;
   *VAR_3 = VAR_6;
   *VAR_2 = VAR_7;
}
