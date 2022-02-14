
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ smgr_vm_nblocks; int smgr_rnode; } ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_11__ {TYPE_4__* rd_smgr; } ;
typedef TYPE_1__* Relation ;
typedef int Page ;
typedef TYPE_2__ PGAlignedBlock ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*,int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_10(Relation VAR_4, BlockNumber VAR_5)
{
 BlockNumber VAR_6;
 PGAlignedBlock VAR_7;

 FUNC_2((Page) VAR_7.data, VAR_0, 0);
 FUNC_1(VAR_4, VAR_1);


 FUNC_4(VAR_4);





 if ((VAR_4->rd_smgr->smgr_vm_nblocks == 0 ||
   VAR_4->rd_smgr->smgr_vm_nblocks == VAR_2) &&
  !FUNC_7(VAR_4->rd_smgr, VAR_3))
  FUNC_6(VAR_4->rd_smgr, VAR_3, 0);

 VAR_6 = FUNC_9(VAR_4->rd_smgr, VAR_3);


 while (VAR_6 < VAR_5)
 {
  FUNC_3((Page) VAR_7.data, VAR_6);

  FUNC_8(VAR_4->rd_smgr, VAR_3, VAR_6,
       VAR_7.data, 0);
  VAR_6++;
 }
 FUNC_0(VAR_4->rd_smgr->smgr_rnode);


 VAR_4->rd_smgr->smgr_vm_nblocks = VAR_6;

 FUNC_5(VAR_4, VAR_1);
}
