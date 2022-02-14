
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map_sort_entry {struct tracing_map_elt* elt; void* key; } ;
struct tracing_map_elt {int dummy; } ;


 int VAR_0 ;
 struct tracing_map_sort_entry* FUNC_0 (int,int ) ;

__attribute__((used)) static struct tracing_map_sort_entry *
FUNC_1(void *VAR_1, struct tracing_map_elt *VAR_2)
{
 struct tracing_map_sort_entry *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->key = VAR_1;
 VAR_3->elt = VAR_2;

 return VAR_3;
}
