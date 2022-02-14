
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* smgr_close ) (TYPE_1__*,scalar_t__) ;} ;
struct TYPE_5__ {size_t smgr_which; int smgr_rnode; int node; struct TYPE_5__** smgr_owner; } ;
typedef TYPE_1__* SMgrRelation ;
typedef scalar_t__ ForkNumber ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int ,void*,int ,int *) ;
 TYPE_3__* VAR_4 ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;

void
FUNC_4(SMgrRelation VAR_5)
{
 SMgrRelation *VAR_6;
 ForkNumber VAR_7;

 for (VAR_7 = 0; VAR_7 <= VAR_2; VAR_7++)
  VAR_4[VAR_5->smgr_which].smgr_close(VAR_5, VAR_7);

 VAR_6 = VAR_5->smgr_owner;

 if (!VAR_6)
  FUNC_0(&VAR_5->node);

 if (FUNC_2(VAR_3,
     (void *) &(VAR_5->smgr_rnode),
     VAR_1, ((void*)0)) == ((void*)0))
  FUNC_1(VAR_0, "SMgrRelation hashtable corrupted");





 if (VAR_6)
  *VAR_6 = ((void*)0);
}
