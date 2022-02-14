
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* rel; } ;
struct TYPE_4__ {int relid; } ;
typedef int Node ;
typedef TYPE_2__ IndexOptInfo ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool
FUNC_3(Node *VAR_0, IndexOptInfo *VAR_1)
{

 if (FUNC_0(VAR_1->rel->relid, FUNC_2(VAR_0)))
  return 0;
 if (FUNC_1(VAR_0))
  return 0;
 return 1;
}
