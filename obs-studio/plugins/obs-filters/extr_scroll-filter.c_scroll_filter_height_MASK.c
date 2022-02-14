
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scroll_filter_data {int cy; scalar_t__ limit_cy; int context; } ;
typedef int obs_source_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static uint32_t FUNC_2(void *VAR_0)
{
 struct scroll_filter_data *VAR_1 = VAR_0;
 obs_source_t *VAR_2 = FUNC_0(VAR_1->context);

 return VAR_1->limit_cy ? VAR_1->cy
    : FUNC_1(VAR_2);
}
