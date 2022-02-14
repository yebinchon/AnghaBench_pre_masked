
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__** array; } ;
struct TYPE_8__ {int rendering_filter; int filter_mutex; TYPE_1__ filters; } ;
typedef TYPE_2__ obs_source_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(obs_source_t *VAR_0)
{
 obs_source_t *VAR_1;

 FUNC_3(&VAR_0->filter_mutex);
 VAR_1 = VAR_0->filters.array[0];
 FUNC_0(VAR_1);
 FUNC_4(&VAR_0->filter_mutex);

 VAR_0->rendering_filter = 1;
 FUNC_2(VAR_1);
 VAR_0->rendering_filter = 0;

 FUNC_1(VAR_1);
}
