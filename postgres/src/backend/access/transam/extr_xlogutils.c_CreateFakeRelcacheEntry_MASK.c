
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int relpersistence; } ;
struct TYPE_16__ {TYPE_1__ pgc; } ;
struct TYPE_15__ {int relNode; int dbNode; } ;
struct TYPE_12__ {int relId; int dbId; } ;
struct TYPE_13__ {TYPE_2__ lockRelId; } ;
struct TYPE_14__ {int * rd_smgr; TYPE_3__ rd_lockInfo; TYPE_1__* rd_rel; int rd_backend; TYPE_5__ rd_node; } ;
typedef TYPE_4__* Relation ;
typedef TYPE_5__ RelFileNode ;
typedef int FakeRelCacheEntryData ;
typedef TYPE_6__* FakeRelCacheEntry ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_6__* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;

Relation
FUNC_4(RelFileNode VAR_3)
{
 FakeRelCacheEntry VAR_4;
 Relation VAR_5;

 FUNC_0(VAR_0);


 VAR_4 = FUNC_2(sizeof(FakeRelCacheEntryData));
 VAR_5 = (Relation) VAR_4;

 VAR_5->rd_rel = &VAR_4->pgc;
 VAR_5->rd_node = VAR_3;

 VAR_5->rd_backend = VAR_1;


 VAR_5->rd_rel->relpersistence = VAR_2;


 FUNC_3(FUNC_1(VAR_5), "%u", VAR_3.relNode);
 VAR_5->rd_lockInfo.lockRelId.dbId = VAR_3.dbNode;
 VAR_5->rd_lockInfo.lockRelId.relId = VAR_3.relNode;

 VAR_5->rd_smgr = ((void*)0);

 return VAR_5;
}
