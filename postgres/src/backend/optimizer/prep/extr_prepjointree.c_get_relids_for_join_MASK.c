
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ jointree; } ;
typedef int Relids ;
typedef TYPE_1__ Query ;
typedef int Node ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

Relids
FUNC_3(Query *VAR_1, int VAR_2)
{
 Node *VAR_3;

 VAR_3 = FUNC_1((Node *) VAR_1->jointree,
          VAR_2);
 if (!VAR_3)
  FUNC_0(VAR_0, "could not find join node %d", VAR_2);
 return FUNC_2(VAR_3, 0);
}
