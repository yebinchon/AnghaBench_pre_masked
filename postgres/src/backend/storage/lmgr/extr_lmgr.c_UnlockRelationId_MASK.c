
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int relId; int dbId; } ;
typedef TYPE_1__ LockRelId ;
typedef int LOCKTAG ;
typedef int LOCKMODE ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;

void
FUNC_2(LockRelId *VAR_0, LOCKMODE VAR_1)
{
 LOCKTAG VAR_2;

 FUNC_1(VAR_2, VAR_0->dbId, VAR_0->relId);

 FUNC_0(&VAR_2, VAR_1, 0);
}
