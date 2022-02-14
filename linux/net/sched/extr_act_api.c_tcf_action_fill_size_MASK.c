
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_action {TYPE_1__* ops; } ;
struct TYPE_2__ {size_t (* get_fill_size ) (struct tc_action const*) ;} ;


 size_t FUNC_0 (struct tc_action const*) ;
 size_t FUNC_1 (struct tc_action const*) ;

__attribute__((used)) static size_t FUNC_2(const struct tc_action *VAR_0)
{
 size_t VAR_1 = FUNC_1(VAR_0);

 if (VAR_0->ops->get_fill_size)
  return VAR_0->ops->get_fill_size(VAR_0) + VAR_1;
 return VAR_1;
}
