
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_14__ {int keysize; int entrysize; int hcxt; } ;
struct TYPE_13__ {int mt_nplans; TYPE_2__* resultRelInfo; } ;
struct TYPE_12__ {int partition_root; int * subplan_resultrel_htab; } ;
struct TYPE_11__ {int ri_PartitionRoot; int ri_RelationDesc; } ;
struct TYPE_10__ {TYPE_2__* rri; } ;
typedef TYPE_1__ SubplanResultRelHashElem ;
typedef TYPE_2__ ResultRelInfo ;
typedef TYPE_3__ PartitionTupleRouting ;
typedef int Oid ;
typedef TYPE_4__ ModifyTableState ;
typedef int HTAB ;
typedef TYPE_5__ HASHCTL ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*,int,TYPE_5__*,int) ;
 scalar_t__ FUNC_3 (int *,int *,int ,int*) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;

__attribute__((used)) static void
FUNC_5(ModifyTableState *VAR_5,
          PartitionTupleRouting *VAR_6)
{
 HASHCTL VAR_7;
 HTAB *VAR_8;
 int VAR_9;

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.keysize = sizeof(Oid);
 VAR_7.entrysize = sizeof(SubplanResultRelHashElem);
 VAR_7.hcxt = VAR_0;

 VAR_8 = FUNC_2("PartitionTupleRouting table", VAR_5->mt_nplans,
        &VAR_7, VAR_3 | VAR_1 | VAR_2);
 VAR_6->subplan_resultrel_htab = VAR_8;


 for (VAR_9 = 0; VAR_9 < VAR_5->mt_nplans; VAR_9++)
 {
  ResultRelInfo *VAR_10 = &VAR_5->resultRelInfo[VAR_9];
  bool VAR_11;
  Oid VAR_12 = FUNC_1(VAR_10->ri_RelationDesc);
  SubplanResultRelHashElem *VAR_13;

  VAR_13 = (SubplanResultRelHashElem *)
   FUNC_3(VAR_8, &VAR_12, VAR_4, &VAR_11);
  FUNC_0(!VAR_11);
  VAR_13->rri = VAR_10;






  VAR_10->ri_PartitionRoot = VAR_6->partition_root;
 }
}
