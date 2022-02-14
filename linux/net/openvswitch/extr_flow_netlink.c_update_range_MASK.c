
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sw_flow_key_range {size_t start; size_t end; } ;
struct sw_flow_match {TYPE_1__* mask; struct sw_flow_key_range range; } ;
struct TYPE_2__ {struct sw_flow_key_range range; } ;


 size_t FUNC_0 (size_t,int) ;
 size_t FUNC_1 (size_t,int) ;

__attribute__((used)) static void FUNC_2(struct sw_flow_match *VAR_0,
    size_t VAR_1, size_t VAR_2, bool VAR_3)
{
 struct sw_flow_key_range *VAR_4;
 size_t VAR_5 = FUNC_0(VAR_1, sizeof(long));
 size_t VAR_6 = FUNC_1(VAR_1 + VAR_2, sizeof(long));

 if (!VAR_3)
  VAR_4 = &VAR_0->range;
 else
  VAR_4 = &VAR_0->mask->range;

 if (VAR_4->start == VAR_4->end) {
  VAR_4->start = VAR_5;
  VAR_4->end = VAR_6;
  return;
 }

 if (VAR_4->start > VAR_5)
  VAR_4->start = VAR_5;

 if (VAR_4->end < VAR_6)
  VAR_4->end = VAR_6;
}
