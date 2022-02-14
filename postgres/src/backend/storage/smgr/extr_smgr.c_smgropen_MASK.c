
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_12__ {int (* smgr_open ) (TYPE_1__*) ;} ;
struct TYPE_11__ {int keysize; int entrysize; } ;
struct TYPE_10__ {int backend; int node; } ;
struct TYPE_9__ {size_t smgr_which; int node; void* smgr_vm_nblocks; void* smgr_fsm_nblocks; void* smgr_targblock; int * smgr_owner; } ;
typedef int SMgrRelationData ;
typedef TYPE_1__* SMgrRelation ;
typedef TYPE_2__ RelFileNodeBackend ;
typedef int RelFileNode ;
typedef TYPE_3__ HASHCTL ;
typedef int BackendId ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int * VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (char*,int,TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (int *,void*,int ,int*) ;
 TYPE_5__* VAR_5 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_6 ;

SMgrRelation
FUNC_6(RelFileNode VAR_7, BackendId VAR_8)
{
 RelFileNodeBackend VAR_9;
 SMgrRelation VAR_10;
 bool VAR_11;

 if (VAR_4 == ((void*)0))
 {

  HASHCTL VAR_12;

  FUNC_0(&VAR_12, 0, sizeof(VAR_12));
  VAR_12.keysize = sizeof(RelFileNodeBackend);
  VAR_12.entrysize = sizeof(SMgrRelationData);
  VAR_4 = FUNC_3("smgr relation table", 400,
            &VAR_12, VAR_1 | VAR_0);
  FUNC_1(&VAR_6);
 }


 VAR_9.node = VAR_7;
 VAR_9.backend = VAR_8;
 VAR_10 = (SMgrRelation) FUNC_4(VAR_4,
           (void *) &VAR_9,
           VAR_2, &VAR_11);


 if (!VAR_11)
 {

  VAR_10->smgr_owner = ((void*)0);
  VAR_10->smgr_targblock = VAR_3;
  VAR_10->smgr_fsm_nblocks = VAR_3;
  VAR_10->smgr_vm_nblocks = VAR_3;
  VAR_10->smgr_which = 0;


  VAR_5[VAR_10->smgr_which].smgr_open(VAR_10);


  FUNC_2(&VAR_6, &VAR_10->node);
 }

 return VAR_10;
}
