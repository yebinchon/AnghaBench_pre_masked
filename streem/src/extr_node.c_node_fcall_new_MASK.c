
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * args; int * func; int type; } ;
typedef TYPE_1__ node_fcall ;
typedef int node ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;

node*
FUNC_3(node* VAR_1, node* VAR_2, node* VAR_3)
{
  node_fcall* VAR_4 = FUNC_0(sizeof(node_fcall));
  VAR_4->type = VAR_0;
  VAR_4->func = VAR_1;
  if (!VAR_2) VAR_2 = FUNC_1();
  if (VAR_3) {
    FUNC_2(VAR_2, VAR_3);
  }
  VAR_4->args = VAR_2;
  return (node*)VAR_4;
}
