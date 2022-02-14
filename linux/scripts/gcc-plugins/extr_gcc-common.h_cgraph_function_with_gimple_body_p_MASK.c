
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int thunk_p; } ;
struct cgraph_node {int alias; TYPE_1__ thunk; scalar_t__ analyzed; } ;



__attribute__((used)) static inline bool FUNC_0(struct cgraph_node *VAR_0)
{
 return VAR_0->analyzed && !VAR_0->thunk.thunk_p && !VAR_0->alias;
}
