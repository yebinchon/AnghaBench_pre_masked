
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map {unsigned int n_keys; unsigned int* key_idx; } ;



__attribute__((used)) static bool FUNC_0(struct tracing_map *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->n_keys; VAR_2++)
  if (VAR_0->key_idx[VAR_2] == VAR_1)
   return 1;
 return 0;
}
