
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gcov_node {int * links; } ;
struct TYPE_2__ {scalar_t__ ext; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct gcov_node *VAR_1)
{
 int VAR_2;

 if (!VAR_1->links)
  return;
 for (VAR_2 = 0; VAR_0[VAR_2].ext; VAR_2++)
  FUNC_0(VAR_1->links[VAR_2]);
 FUNC_1(VAR_1->links);
 VAR_1->links = ((void*)0);
}
