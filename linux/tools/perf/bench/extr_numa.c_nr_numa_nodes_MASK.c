
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr_nodes; } ;
struct TYPE_4__ {TYPE_1__ p; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->p.nr_nodes; VAR_2++) {
  if (FUNC_0(VAR_1, VAR_2))
   VAR_3++;
 }

 return VAR_3;
}
