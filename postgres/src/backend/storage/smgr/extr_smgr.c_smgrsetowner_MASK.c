
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__** smgr_owner; int node; } ;
typedef TYPE_1__* SMgrRelation ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(SMgrRelation *VAR_0, SMgrRelation VAR_1)
{

 FUNC_0(VAR_0 != ((void*)0));
 if (VAR_1->smgr_owner)
  *(VAR_1->smgr_owner) = ((void*)0);
 else
  FUNC_1(&VAR_1->node);


 VAR_1->smgr_owner = VAR_0;
 *VAR_0 = VAR_1;
}
