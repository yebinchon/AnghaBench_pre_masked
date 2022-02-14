
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* cgraph_node_ptr ;
struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* same_body; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline bool FUNC_1(cgraph_node_ptr VAR_1, bool (*VAR_2)(cgraph_node_ptr, void *), void *VAR_3, bool VAR_4)
{
 cgraph_node_ptr VAR_5;

 if (VAR_2(VAR_1, VAR_3))
  return 1;

 for (VAR_5 = VAR_1->same_body; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_4 || FUNC_0(VAR_5) > VAR_0)
   if (FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4))
    return 1;
 }

 return 0;
}
