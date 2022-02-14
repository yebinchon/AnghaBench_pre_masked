
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* nodes; } ;
typedef TYPE_2__ stb_matcher ;
struct TYPE_5__ {int * eps; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void**,TYPE_2__*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(stb_matcher *VAR_0, int VAR_1, int VAR_2)
{
   FUNC_0(VAR_1 != VAR_2);
   if (VAR_0->nodes[VAR_1].eps == ((void*)0))
      FUNC_1((void **) &VAR_0->nodes[VAR_1].eps, VAR_0);
   FUNC_2(VAR_0->nodes[VAR_1].eps, VAR_2);
}
