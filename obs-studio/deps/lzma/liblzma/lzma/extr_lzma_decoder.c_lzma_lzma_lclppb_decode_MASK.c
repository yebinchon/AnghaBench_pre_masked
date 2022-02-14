
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int pb; int lp; int lc; } ;
typedef TYPE_1__ lzma_options_lzma ;


 int VAR_0 ;

extern bool
FUNC_0(lzma_options_lzma *VAR_1, uint8_t VAR_2)
{
 if (VAR_2 > (4 * 5 + 4) * 9 + 8)
  return 1;


 VAR_1->pb = VAR_2 / (9 * 5);
 VAR_2 -= VAR_1->pb * 9 * 5;
 VAR_1->lp = VAR_2 / 9;
 VAR_1->lc = VAR_2 - VAR_1->lp * 9;

 return VAR_1->lc + VAR_1->lp > VAR_0;
}
