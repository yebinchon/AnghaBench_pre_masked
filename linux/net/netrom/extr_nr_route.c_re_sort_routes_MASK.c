
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nr_node {int which; TYPE_1__* routes; } ;
struct TYPE_3__ {scalar_t__ quality; } ;


 int FUNC_0 (TYPE_1__,TYPE_1__) ;

__attribute__((used)) static void FUNC_1(struct nr_node *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_0->routes[VAR_2].quality > VAR_0->routes[VAR_1].quality) {
  if (VAR_0->which == VAR_1)
   VAR_0->which = VAR_2;
  else if (VAR_0->which == VAR_2)
   VAR_0->which = VAR_1;

  FUNC_0(VAR_0->routes[VAR_1], VAR_0->routes[VAR_2]);
 }
}
