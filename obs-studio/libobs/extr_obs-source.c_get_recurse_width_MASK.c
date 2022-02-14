
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_2__** array; scalar_t__ num; } ;
struct TYPE_6__ {int filter_mutex; TYPE_1__ filters; } ;
typedef TYPE_2__ obs_source_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static uint32_t FUNC_3(obs_source_t *VAR_0)
{
 uint32_t VAR_1;

 FUNC_1(&VAR_0->filter_mutex);

 VAR_1 = (VAR_0->filters.num) ? FUNC_0(VAR_0->filters.array[0])
          : FUNC_0(VAR_0);

 FUNC_2(&VAR_0->filter_mutex);

 return VAR_1;
}
