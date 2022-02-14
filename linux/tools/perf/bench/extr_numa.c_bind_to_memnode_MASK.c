
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int nodemask ;
struct TYPE_3__ {int nr_nodes; } ;
struct TYPE_4__ {TYPE_1__ p; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,unsigned long,int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int ,unsigned long*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 if (VAR_3 == VAR_1)
  return;

 FUNC_0(VAR_2->p.nr_nodes > (int)sizeof(VAR_4)*8);
 VAR_4 = 1L << VAR_3;

 VAR_5 = FUNC_2(VAR_0, &VAR_4, sizeof(VAR_4)*8);
 FUNC_1("binding to node %d, mask: %016lx => %d\n", VAR_3, VAR_4, VAR_5);

 FUNC_0(VAR_5);
}
