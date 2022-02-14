
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tracing_map_cmp_fn_t ;
struct tracing_map {int* key_idx; int n_keys; TYPE_1__* fields; } ;
struct TYPE_2__ {unsigned int offset; } ;


 int FUNC_0 (struct tracing_map*,int ) ;

int FUNC_1(struct tracing_map *VAR_0,
         unsigned int VAR_1,
         tracing_map_cmp_fn_t VAR_2)

{
 int VAR_3 = FUNC_0(VAR_0, VAR_2);

 if (VAR_3 < 0)
  return VAR_3;

 VAR_0->fields[VAR_3].offset = VAR_1;

 VAR_0->key_idx[VAR_0->n_keys++] = VAR_3;

 return VAR_3;
}
