
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tracing_map_sort_entry {TYPE_2__* elt; int key; } ;
struct TYPE_4__ {TYPE_1__* map; } ;
struct TYPE_3__ {int key_size; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(const struct tracing_map_sort_entry **VAR_0,
      const struct tracing_map_sort_entry **VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_0((*VAR_0)->key, (*VAR_1)->key, (*VAR_0)->elt->map->key_size))
  VAR_2 = 1;

 return VAR_2;
}
