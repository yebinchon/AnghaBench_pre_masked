
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* indexRelation; } ;
struct TYPE_7__ {scalar_t__* rd_opcintype; int * rd_opfamily; } ;
struct TYPE_6__ {scalar_t__ sk_subtype; int sk_attno; int sk_collation; } ;
typedef int StrategyNumber ;
typedef TYPE_1__* ScanKey ;
typedef TYPE_2__* Relation ;
typedef int RegProcedure ;
typedef scalar_t__ Oid ;
typedef TYPE_3__* IndexScanDesc ;
typedef int FmgrInfo ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,scalar_t__,...) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static Datum
FUNC_9(IndexScanDesc VAR_2, ScanKey VAR_3,
       StrategyNumber VAR_4,
       Datum *VAR_5, int VAR_6)
{
 Relation VAR_7 = VAR_2->indexRelation;
 Oid VAR_8,
    VAR_9;
 RegProcedure VAR_10;
 FmgrInfo VAR_11;
 Datum VAR_12;
 int VAR_13;






 VAR_8 = VAR_3->sk_subtype;
 if (VAR_8 == VAR_1)
  VAR_8 = VAR_7->rd_opcintype[VAR_3->sk_attno - 1];
 VAR_9 = FUNC_8(VAR_7->rd_opfamily[VAR_3->sk_attno - 1],
         VAR_8,
         VAR_8,
         VAR_4);
 if (!FUNC_3(VAR_9))
  FUNC_5(VAR_0, "missing operator %d(%u,%u) in opfamily %u",
    VAR_4, VAR_8, VAR_8,
    VAR_7->rd_opfamily[VAR_3->sk_attno - 1]);
 VAR_10 = FUNC_7(VAR_9);
 if (!FUNC_4(VAR_10))
  FUNC_5(VAR_0, "missing oprcode for operator %u", VAR_9);

 FUNC_6(VAR_10, &VAR_11);

 FUNC_0(VAR_6 > 0);
 VAR_12 = VAR_5[0];
 for (VAR_13 = 1; VAR_13 < VAR_6; VAR_13++)
 {
  if (FUNC_1(FUNC_2(&VAR_11,
             VAR_3->sk_collation,
             VAR_5[VAR_13],
             VAR_12)))
   VAR_12 = VAR_5[VAR_13];
 }

 return VAR_12;
}
