
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct assoc_array_node* node; } ;
struct assoc_array_walk_result {TYPE_1__ terminal_node; } ;
struct assoc_array_ptr {int dummy; } ;
struct assoc_array_ops {scalar_t__ (* compare_object ) (void const*,void const*) ;} ;
struct assoc_array_node {int * slots; } ;
struct assoc_array {int dummy; } ;


 int VAR_0 ;
 struct assoc_array_ptr* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct assoc_array_ptr const*) ;
 void* FUNC_2 (struct assoc_array_ptr const*) ;
 scalar_t__ FUNC_3 (struct assoc_array const*,struct assoc_array_ops const*,void const*,struct assoc_array_walk_result*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (void const*,void const*) ;

void *FUNC_5(const struct assoc_array *VAR_2,
         const struct assoc_array_ops *VAR_3,
         const void *VAR_4)
{
 struct assoc_array_walk_result VAR_5;
 const struct assoc_array_node *VAR_6;
 const struct assoc_array_ptr *VAR_7;
 const void *VAR_8;
 int VAR_9;

 if (FUNC_3(VAR_2, VAR_3, VAR_4, &VAR_5) !=
     VAR_1)
  return ((void*)0);

 VAR_6 = VAR_5.terminal_node.node;




 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_7 = FUNC_0(VAR_6->slots[VAR_9]);
  if (VAR_7 && FUNC_1(VAR_7)) {




   VAR_8 = FUNC_2(VAR_7);
   if (VAR_3->compare_object(VAR_8, VAR_4))
    return (void *)VAR_8;
  }
 }

 return ((void*)0);
}
