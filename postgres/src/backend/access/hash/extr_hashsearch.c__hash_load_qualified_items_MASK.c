
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ hashso_sk_hash; int hashso_buc_split; scalar_t__ hashso_buc_populated; } ;
struct TYPE_11__ {scalar_t__ ignore_killed_tuples; int opaque; } ;
struct TYPE_10__ {int t_info; } ;
typedef int ScanDirection ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef TYPE_1__* IndexTuple ;
typedef TYPE_2__* IndexScanDesc ;
typedef TYPE_3__* HashScanOpaque ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_3__*,int,scalar_t__,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_11(IndexScanDesc VAR_3, Page VAR_4,
         OffsetNumber VAR_5, ScanDirection VAR_6)
{
 HashScanOpaque VAR_7 = (HashScanOpaque) VAR_3->opaque;
 IndexTuple VAR_8;
 int VAR_9;
 OffsetNumber VAR_10;

 VAR_10 = FUNC_6(VAR_4);

 if (FUNC_7(VAR_6))
 {

  VAR_9 = 0;

  while (VAR_5 <= VAR_10)
  {
   FUNC_0(VAR_5 >= VAR_0);
   VAR_8 = (IndexTuple) FUNC_4(VAR_4, FUNC_5(VAR_4, VAR_5));






   if ((VAR_7->hashso_buc_populated && !VAR_7->hashso_buc_split &&
     (VAR_8->t_info & VAR_1)) ||
    (VAR_3->ignore_killed_tuples &&
     (FUNC_1(FUNC_5(VAR_4, VAR_5)))))
   {
    VAR_5 = FUNC_2(VAR_5);
    continue;
   }

   if (VAR_7->hashso_sk_hash == FUNC_9(VAR_8) &&
    FUNC_8(VAR_3, VAR_8))
   {

    FUNC_10(VAR_7, VAR_9, VAR_5, VAR_8);
    VAR_9++;
   }
   else
   {




    break;
   }

   VAR_5 = FUNC_2(VAR_5);
  }

  FUNC_0(VAR_9 <= VAR_2);
  return VAR_9;
 }
 else
 {

  VAR_9 = VAR_2;

  while (VAR_5 >= VAR_0)
  {
   FUNC_0(VAR_5 <= VAR_10);
   VAR_8 = (IndexTuple) FUNC_4(VAR_4, FUNC_5(VAR_4, VAR_5));






   if ((VAR_7->hashso_buc_populated && !VAR_7->hashso_buc_split &&
     (VAR_8->t_info & VAR_1)) ||
    (VAR_3->ignore_killed_tuples &&
     (FUNC_1(FUNC_5(VAR_4, VAR_5)))))
   {
    VAR_5 = FUNC_3(VAR_5);
    continue;
   }

   if (VAR_7->hashso_sk_hash == FUNC_9(VAR_8) &&
    FUNC_8(VAR_3, VAR_8))
   {
    VAR_9--;

    FUNC_10(VAR_7, VAR_9, VAR_5, VAR_8);
   }
   else
   {




    break;
   }

   VAR_5 = FUNC_3(VAR_5);
  }

  FUNC_0(VAR_9 >= 0);
  return VAR_9;
 }
}
