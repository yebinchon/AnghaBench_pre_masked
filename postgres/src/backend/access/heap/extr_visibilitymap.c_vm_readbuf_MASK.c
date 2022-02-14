
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ smgr_vm_nblocks; } ;
struct TYPE_8__ {TYPE_4__* rd_smgr; } ;
typedef TYPE_1__* Relation ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static Buffer
FUNC_9(Relation VAR_7, BlockNumber VAR_8, bool VAR_9)
{
 Buffer VAR_10;
 FUNC_5(VAR_7);





 if (VAR_7->rd_smgr->smgr_vm_nblocks == VAR_3)
 {
  if (FUNC_6(VAR_7->rd_smgr, VAR_6))
   VAR_7->rd_smgr->smgr_vm_nblocks = FUNC_7(VAR_7->rd_smgr,
              VAR_6);
  else
   VAR_7->rd_smgr->smgr_vm_nblocks = 0;
 }


 if (VAR_8 >= VAR_7->rd_smgr->smgr_vm_nblocks)
 {
  if (VAR_9)
   FUNC_8(VAR_7, VAR_8 + 1);
  else
   return VAR_4;
 }
 VAR_10 = FUNC_4(VAR_7, VAR_6, VAR_8,
        VAR_5, ((void*)0));
 if (FUNC_3(FUNC_0(VAR_10)))
 {
  FUNC_1(VAR_10, VAR_1);
  if (FUNC_3(FUNC_0(VAR_10)))
   FUNC_2(FUNC_0(VAR_10), VAR_0, 0);
  FUNC_1(VAR_10, VAR_2);
 }
 return VAR_10;
}
