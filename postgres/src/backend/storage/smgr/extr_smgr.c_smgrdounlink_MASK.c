
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* smgr_unlink ) (int ,int ,int) ;int (* smgr_close ) (TYPE_1__*,scalar_t__) ;} ;
struct TYPE_5__ {int smgr_which; int smgr_rnode; } ;
typedef TYPE_1__* SMgrRelation ;
typedef int RelFileNodeBackend ;
typedef scalar_t__ ForkNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;

void
FUNC_4(SMgrRelation VAR_3, bool VAR_4)
{
 RelFileNodeBackend VAR_5 = VAR_3->smgr_rnode;
 int VAR_6 = VAR_3->smgr_which;
 ForkNumber VAR_7;


 for (VAR_7 = 0; VAR_7 <= VAR_1; VAR_7++)
  VAR_2[VAR_6].smgr_close(VAR_3, VAR_7);





 FUNC_1(&VAR_5, 1);
 FUNC_0(VAR_5);
 VAR_2[VAR_6].smgr_unlink(VAR_5, VAR_0, VAR_4);
}
