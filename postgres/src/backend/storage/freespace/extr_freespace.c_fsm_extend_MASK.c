
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ smgr_fsm_nblocks; } ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_11__ {TYPE_3__* rd_smgr; } ;
typedef TYPE_1__* Relation ;
typedef int Page ;
typedef TYPE_2__ PGAlignedBlock ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_9(Relation VAR_4, BlockNumber VAR_5)
{
 BlockNumber VAR_6;
 PGAlignedBlock VAR_7;

 FUNC_1((Page) VAR_7.data, VAR_0, 0);
 FUNC_0(VAR_4, VAR_1);


 FUNC_3(VAR_4);





 if ((VAR_4->rd_smgr->smgr_fsm_nblocks == 0 ||
   VAR_4->rd_smgr->smgr_fsm_nblocks == VAR_3) &&
  !FUNC_6(VAR_4->rd_smgr, VAR_2))
  FUNC_5(VAR_4->rd_smgr, VAR_2, 0);

 VAR_6 = FUNC_8(VAR_4->rd_smgr, VAR_2);

 while (VAR_6 < VAR_5)
 {
  FUNC_2((Page) VAR_7.data, VAR_6);

  FUNC_7(VAR_4->rd_smgr, VAR_2, VAR_6,
       VAR_7.data, 0);
  VAR_6++;
 }


 VAR_4->rd_smgr->smgr_fsm_nblocks = VAR_6;

 FUNC_4(VAR_4, VAR_1);
}
