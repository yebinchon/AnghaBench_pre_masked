
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int reverse; int collation; int flinfo; } ;
struct TYPE_10__ {TYPE_2__* indexRelation; } ;
struct TYPE_9__ {scalar_t__* rd_opcintype; int * rd_opfamily; } ;
struct TYPE_8__ {scalar_t__ sk_subtype; int sk_attno; int sk_collation; } ;
typedef TYPE_1__* ScanKey ;
typedef TYPE_2__* Relation ;
typedef int RegProcedure ;
typedef scalar_t__ Oid ;
typedef TYPE_3__* IndexScanDesc ;
typedef int Datum ;
typedef TYPE_4__ BTSortArrayContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (void*,int,int,int ,void*) ;
 int FUNC_5 (int *,int,int,int ,TYPE_4__*) ;

__attribute__((used)) static int
FUNC_6(IndexScanDesc VAR_4, ScanKey VAR_5,
      bool VAR_6,
      Datum *VAR_7, int VAR_8)
{
 Relation VAR_9 = VAR_4->indexRelation;
 Oid VAR_10;
 RegProcedure VAR_11;
 BTSortArrayContext VAR_12;

 if (VAR_8 <= 1)
  return VAR_8;






 VAR_10 = VAR_5->sk_subtype;
 if (VAR_10 == VAR_2)
  VAR_10 = VAR_9->rd_opcintype[VAR_5->sk_attno - 1];
 VAR_11 = FUNC_3(VAR_9->rd_opfamily[VAR_5->sk_attno - 1],
         VAR_10,
         VAR_10,
         VAR_0);
 if (!FUNC_0(VAR_11))
  FUNC_1(VAR_1, "missing support function %d(%u,%u) in opfamily %u",
    VAR_0, VAR_10, VAR_10,
    VAR_9->rd_opfamily[VAR_5->sk_attno - 1]);


 FUNC_2(VAR_11, &VAR_12.flinfo);
 VAR_12.collation = VAR_5->sk_collation;
 VAR_12.reverse = VAR_6;
 FUNC_4((void *) VAR_7, VAR_8, sizeof(Datum),
     VAR_3, (void *) &VAR_12);


 return FUNC_5(VAR_7, VAR_8, sizeof(Datum),
        VAR_3, &VAR_12);
}
