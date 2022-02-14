
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_6__ {scalar_t__ type; int (* get_height ) (scalar_t__) ;} ;
struct TYPE_7__ {int async_height; scalar_t__ async_active; struct TYPE_7__* filter_target; TYPE_1__ context; TYPE_2__ info; scalar_t__ enabled; int transition_actual_cy; int filter_parent; } ;
typedef TYPE_3__ obs_source_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static uint32_t FUNC_1(const obs_source_t *VAR_1)
{
 bool VAR_2 = !!VAR_1->filter_parent;
 bool VAR_3 = VAR_1->context.data && VAR_1->info.get_height;

 if (VAR_1->info.type == VAR_0) {
  return VAR_1->enabled ? VAR_1->transition_actual_cy : 0;

 } else if (VAR_3 && (!VAR_2 || VAR_1->enabled)) {
  return VAR_1->info.get_height(VAR_1->context.data);

 } else if (VAR_2) {
  return FUNC_1(VAR_1->filter_target);
 }

 return VAR_1->async_active ? VAR_1->async_height : 0;
}
