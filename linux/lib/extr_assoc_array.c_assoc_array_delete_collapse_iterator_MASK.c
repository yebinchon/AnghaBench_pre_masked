
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct assoc_array_delete_collapse_context {void const* skip_leaf; scalar_t__ slot; TYPE_1__* node; } ;
struct TYPE_2__ {int * slots; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void const*) ;

__attribute__((used)) static int FUNC_2(const void *VAR_1,
      void *VAR_2)
{
 struct assoc_array_delete_collapse_context *VAR_3 = VAR_2;

 if (VAR_1 == VAR_3->skip_leaf)
  return 0;

 FUNC_0(VAR_3->slot >= VAR_0);

 VAR_3->node->slots[VAR_3->slot++] = FUNC_1(VAR_1);
 return 0;
}
