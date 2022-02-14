
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* bh_compare ) (int ,int ,int ) ;int bh_arg; int * bh_nodes; } ;
typedef TYPE_1__ binaryheap ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static void
FUNC_3(binaryheap *VAR_0, int VAR_1)
{
 while (VAR_1 != 0)
 {
  int VAR_2;
  int VAR_3;





  VAR_3 = FUNC_0(VAR_1);
  VAR_2 = VAR_0->bh_compare(VAR_0->bh_nodes[VAR_1],
          VAR_0->bh_nodes[VAR_3],
          VAR_0->bh_arg);
  if (VAR_2 <= 0)
   break;





  FUNC_2(VAR_0, VAR_1, VAR_3);
  VAR_1 = VAR_3;
 }
}
