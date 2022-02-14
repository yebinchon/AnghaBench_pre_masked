
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ smgr_fsm_nblocks; } ;
struct TYPE_8__ {TYPE_2__* rd_smgr; } ;
typedef TYPE_1__* Relation ;
typedef int FSMAddress ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int ) ;

__attribute__((used)) static Buffer
FUNC_10(Relation VAR_7, FSMAddress VAR_8, bool VAR_9)
{
 BlockNumber VAR_10 = FUNC_7(VAR_8);
 Buffer VAR_11;

 FUNC_5(VAR_7);







 if (VAR_7->rd_smgr->smgr_fsm_nblocks == VAR_4 ||
  VAR_10 >= VAR_7->rd_smgr->smgr_fsm_nblocks)
 {
  if (FUNC_8(VAR_7->rd_smgr, VAR_3))
   VAR_7->rd_smgr->smgr_fsm_nblocks = FUNC_9(VAR_7->rd_smgr,
               VAR_3);
  else
   VAR_7->rd_smgr->smgr_fsm_nblocks = 0;
 }


 if (VAR_10 >= VAR_7->rd_smgr->smgr_fsm_nblocks)
 {
  if (VAR_9)
   FUNC_6(VAR_7, VAR_10 + 1);
  else
   return VAR_5;
 }
 VAR_11 = FUNC_4(VAR_7, VAR_3, VAR_10, VAR_6, ((void*)0));
 if (FUNC_3(FUNC_0(VAR_11)))
 {
  FUNC_1(VAR_11, VAR_1);
  if (FUNC_3(FUNC_0(VAR_11)))
   FUNC_2(FUNC_0(VAR_11), VAR_0, 0);
  FUNC_1(VAR_11, VAR_2);
 }
 return VAR_11;
}
