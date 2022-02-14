
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tracing_map_cmp_fn_t ;
struct tracing_map {int n_fields; TYPE_1__* fields; } ;
struct TYPE_2__ {int cmp_fn; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct tracing_map *VAR_2,
     tracing_map_cmp_fn_t VAR_3)
{
 int VAR_4 = -VAR_0;

 if (VAR_2->n_fields < VAR_1) {
  VAR_4 = VAR_2->n_fields;
  VAR_2->fields[VAR_2->n_fields++].cmp_fn = VAR_3;
 }

 return VAR_4;
}
