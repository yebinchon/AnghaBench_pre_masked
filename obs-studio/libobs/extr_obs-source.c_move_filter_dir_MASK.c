
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int num; TYPE_1__** array; } ;
struct TYPE_11__ {struct TYPE_11__* filter_target; TYPE_8__ filters; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum obs_order_movement { ____Placeholder_obs_order_movement } obs_order_movement ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (TYPE_8__,TYPE_1__**,int ) ;
 int FUNC_1 (TYPE_8__,size_t,int) ;
 size_t FUNC_2 (TYPE_1__*,TYPE_1__*,size_t) ;
 size_t FUNC_3 (TYPE_1__*,TYPE_1__*,size_t) ;

__attribute__((used)) static bool FUNC_4(obs_source_t *VAR_5, obs_source_t *VAR_6,
       enum obs_order_movement VAR_7)
{
 size_t VAR_8;

 VAR_8 = FUNC_0(VAR_5->filters, &VAR_6, 0);
 if (VAR_8 == VAR_0)
  return 0;

 if (VAR_7 == VAR_4) {
  size_t VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_8);
  if (VAR_9 == VAR_0)
   return 0;
  FUNC_1(VAR_5->filters, VAR_8, VAR_9);

 } else if (VAR_7 == VAR_2) {
  size_t VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_8);
  if (VAR_10 == VAR_0)
   return 0;
  FUNC_1(VAR_5->filters, VAR_8, VAR_10);

 } else if (VAR_7 == VAR_3) {
  if (VAR_8 == VAR_5->filters.num - 1)
   return 0;
  FUNC_1(VAR_5->filters, VAR_8, VAR_5->filters.num - 1);

 } else if (VAR_7 == VAR_1) {
  if (VAR_8 == 0)
   return 0;
  FUNC_1(VAR_5->filters, VAR_8, 0);
 }


 for (size_t VAR_11 = 0; VAR_11 < VAR_5->filters.num; VAR_11++) {
  obs_source_t *VAR_12 =
   (VAR_11 == VAR_5->filters.num - 1)
    ? VAR_5
    : VAR_5->filters.array[VAR_11 + 1];

  VAR_5->filters.array[VAR_11]->filter_target = VAR_12;
 }

 return 1;
}
