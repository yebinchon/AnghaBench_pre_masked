
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* indexRelation; } ;
struct TYPE_9__ {scalar_t__* rd_opcintype; int * rd_opfamily; } ;
struct TYPE_8__ {int sk_flags; int sk_strategy; int sk_attno; scalar_t__ sk_subtype; int sk_argument; int sk_collation; int sk_func; } ;
typedef int StrategyNumber ;
typedef TYPE_1__* ScanKey ;
typedef TYPE_2__* Relation ;
typedef int RegProcedure ;
typedef scalar_t__ Oid ;
typedef TYPE_3__* IndexScanDesc ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;





 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_10(IndexScanDesc VAR_7, ScanKey VAR_8,
       ScanKey VAR_9, ScanKey VAR_10,
       bool *VAR_11)
{
 Relation VAR_12 = VAR_7->indexRelation;
 Oid VAR_13,
    VAR_14,
    VAR_15,
    VAR_16,
    VAR_17;
 StrategyNumber VAR_18;





 if ((VAR_9->sk_flags | VAR_10->sk_flags) & VAR_4)
 {
  bool VAR_19,
     VAR_20;

  if (VAR_9->sk_flags & VAR_4)
  {
   FUNC_0(VAR_9->sk_flags & (VAR_6 | VAR_5));
   VAR_19 = 1;
  }
  else
   VAR_19 = 0;
  if (VAR_10->sk_flags & VAR_4)
  {
   FUNC_0(VAR_10->sk_flags & (VAR_6 | VAR_5));
   VAR_20 = 1;
  }
  else
   VAR_20 = 0;






  VAR_18 = VAR_8->sk_strategy;
  if (VAR_8->sk_flags & VAR_3)
   VAR_18 = FUNC_1(VAR_18);

  switch (VAR_18)
  {
   case 128:
    *VAR_11 = (VAR_19 < VAR_20);
    break;
   case 129:
    *VAR_11 = (VAR_19 <= VAR_20);
    break;
   case 132:
    *VAR_11 = (VAR_19 == VAR_20);
    break;
   case 131:
    *VAR_11 = (VAR_19 >= VAR_20);
    break;
   case 130:
    *VAR_11 = (VAR_19 > VAR_20);
    break;
   default:
    FUNC_7(VAR_0, "unrecognized StrategyNumber: %d", (int) VAR_18);
    *VAR_11 = 0;
    break;
  }
  return 1;
 }




 FUNC_0(VAR_9->sk_attno == VAR_10->sk_attno);

 VAR_16 = VAR_12->rd_opcintype[VAR_9->sk_attno - 1];






 VAR_13 = VAR_9->sk_subtype;
 if (VAR_13 == VAR_1)
  VAR_13 = VAR_16;
 VAR_14 = VAR_10->sk_subtype;
 if (VAR_14 == VAR_1)
  VAR_14 = VAR_16;
 VAR_15 = VAR_8->sk_subtype;
 if (VAR_15 == VAR_1)
  VAR_15 = VAR_16;





 if (VAR_13 == VAR_16 && VAR_14 == VAR_15)
 {
  *VAR_11 = FUNC_2(FUNC_3(&VAR_8->sk_func,
             VAR_8->sk_collation,
             VAR_9->sk_argument,
             VAR_10->sk_argument));
  return 1;
 }
 VAR_18 = VAR_8->sk_strategy;
 if (VAR_8->sk_flags & VAR_2)
  VAR_18 = FUNC_1(VAR_18);

 VAR_17 = FUNC_9(VAR_12->rd_opfamily[VAR_9->sk_attno - 1],
         VAR_13,
         VAR_14,
         VAR_18);
 if (FUNC_5(VAR_17))
 {
  RegProcedure VAR_21 = FUNC_8(VAR_17);

  if (FUNC_6(VAR_21))
  {
   *VAR_11 = FUNC_2(FUNC_4(VAR_21,
              VAR_8->sk_collation,
              VAR_9->sk_argument,
              VAR_10->sk_argument));
   return 1;
  }
 }


 *VAR_11 = 0;
 return 0;
}
