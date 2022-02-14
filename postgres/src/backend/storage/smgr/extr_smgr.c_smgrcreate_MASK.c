
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* smgr_create ) (TYPE_1__*,int ,int) ;} ;
struct TYPE_5__ {size_t smgr_which; } ;
typedef TYPE_1__* SMgrRelation ;
typedef int ForkNumber ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void
FUNC_1(SMgrRelation VAR_1, ForkNumber VAR_2, bool VAR_3)
{
 VAR_0[VAR_1->smgr_which].smgr_create(VAR_1, VAR_2, VAR_3);
}
