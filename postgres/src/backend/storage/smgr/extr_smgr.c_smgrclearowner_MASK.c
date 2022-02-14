
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int node; struct TYPE_4__** smgr_owner; } ;
typedef TYPE_1__* SMgrRelation ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;

void
FUNC_1(SMgrRelation *VAR_1, SMgrRelation VAR_2)
{

 if (VAR_2->smgr_owner != VAR_1)
  return;


 *VAR_1 = ((void*)0);


 VAR_2->smgr_owner = ((void*)0);


 FUNC_0(&VAR_0, &VAR_2->node);
}
