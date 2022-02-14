
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct dim_cq_moder {size_t cq_period_mode; } ;


 struct dim_cq_moder** VAR_0 ;

struct dim_cq_moder
FUNC_0(u8 VAR_1, int VAR_2)
{
 struct dim_cq_moder VAR_3 = VAR_0[VAR_1][VAR_2];

 VAR_3.cq_period_mode = VAR_1;
 return VAR_3;
}
