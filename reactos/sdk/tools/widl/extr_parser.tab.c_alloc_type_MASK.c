
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int type_t ;
struct TYPE_3__ {int data; int link; } ;
typedef TYPE_1__ type_pool_node_t ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;

type_t *FUNC_2(void)
{
  type_pool_node_t *VAR_1 = FUNC_1(sizeof *VAR_1);
  FUNC_0(&VAR_0, &VAR_1->link);
  return &VAR_1->data;
}
