
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bh_size; scalar_t__ (* bh_compare ) (int ,int ,int ) ;int bh_arg; int * bh_nodes; } ;
typedef TYPE_1__ binaryheap ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int,int) ;

__attribute__((used)) static void
FUNC_6(binaryheap *VAR_0, int VAR_1)
{
 while (1)
 {
  int VAR_2 = FUNC_0(VAR_1);
  int VAR_3 = FUNC_1(VAR_1);
  int VAR_4 = 0;


  if (VAR_2 < VAR_0->bh_size &&
   VAR_0->bh_compare(VAR_0->bh_nodes[VAR_1],
        VAR_0->bh_nodes[VAR_2],
        VAR_0->bh_arg) < 0)
   VAR_4 = VAR_2;


  if (VAR_3 < VAR_0->bh_size &&
   VAR_0->bh_compare(VAR_0->bh_nodes[VAR_1],
        VAR_0->bh_nodes[VAR_3],
        VAR_0->bh_arg) < 0)
  {

   if (!VAR_4 ||
    VAR_0->bh_compare(VAR_0->bh_nodes[VAR_2],
         VAR_0->bh_nodes[VAR_3],
         VAR_0->bh_arg) < 0)
    VAR_4 = VAR_3;
  }





  if (!VAR_4)
   break;





  FUNC_5(VAR_0, VAR_4, VAR_1);
  VAR_1 = VAR_4;
 }
}
