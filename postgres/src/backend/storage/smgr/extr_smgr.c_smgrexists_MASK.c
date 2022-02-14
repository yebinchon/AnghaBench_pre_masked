
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* smgr_exists ) (TYPE_1__*,int ) ;} ;
struct TYPE_5__ {size_t smgr_which; } ;
typedef TYPE_1__* SMgrRelation ;
typedef int ForkNumber ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

bool
FUNC_1(SMgrRelation VAR_1, ForkNumber VAR_2)
{
 return VAR_0[VAR_1->smgr_which].smgr_exists(VAR_1, VAR_2);
}
