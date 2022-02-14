
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_5__ {TYPE_1__* scankeys; int heapkeyspace; } ;
struct TYPE_4__ {int sk_collation; int sk_func; } ;
typedef TYPE_1__* ScanKey ;
typedef int Relation ;
typedef int IndexTuple ;
typedef int Datum ;
typedef TYPE_2__* BTScanInsert ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ,int*) ;

__attribute__((used)) static int
FUNC_7(Relation VAR_0, IndexTuple VAR_1, IndexTuple VAR_2,
      BTScanInsert VAR_3)
{
 int VAR_4 = FUNC_4(VAR_0);
 TupleDesc VAR_5 = FUNC_5(VAR_0);
 int VAR_6;
 ScanKey VAR_7;
 if (!VAR_3->heapkeyspace)
 {
  FUNC_0(VAR_4 != FUNC_3(VAR_0));
  return VAR_4;
 }

 VAR_7 = VAR_3->scankeys;
 VAR_6 = 1;
 for (int VAR_8 = 1; VAR_8 <= VAR_4; VAR_8++, VAR_7++)
 {
  Datum VAR_9,
     VAR_10;
  bool VAR_11,
     VAR_12;

  VAR_9 = FUNC_6(VAR_1, VAR_8, VAR_5, &VAR_11);
  VAR_10 = FUNC_6(VAR_2, VAR_8, VAR_5, &VAR_12);

  if (VAR_11 != VAR_12)
   break;

  if (!VAR_11 &&
   FUNC_1(FUNC_2(&VAR_7->sk_func,
           VAR_7->sk_collation,
           VAR_9,
           VAR_10)) != 0)
   break;

  VAR_6++;
 }

 return VAR_6;
}
