
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_9__ {int ndeleted; int metadata; } ;
typedef TYPE_1__ ginxlogDeleteListPages ;
typedef int XLogRecPtr ;
struct TYPE_13__ {scalar_t__ maxoff; scalar_t__ rightlink; int flags; } ;
struct TYPE_12__ {scalar_t__ head; size_t nPendingPages; scalar_t__ nPendingHeapTuples; scalar_t__ tailFreeSize; scalar_t__ tail; } ;
struct TYPE_11__ {size_t pages_deleted; } ;
struct TYPE_10__ {int pd_lower; } ;
typedef int Relation ;
typedef TYPE_2__* PageHeader ;
typedef scalar_t__ Page ;
typedef TYPE_3__ IndexBulkDeleteResult ;
typedef TYPE_4__ GinMetaPageData ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_3 (scalar_t__) ;
 TYPE_7__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int VAR_7 ;
 int FUNC_14 () ;
 int FUNC_15 (size_t,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int,int ,int) ;
 int FUNC_18 (char*,int) ;
 int FUNC_19 (int *,TYPE_4__*,int) ;

__attribute__((used)) static void
FUNC_20(Relation VAR_8, Buffer VAR_9, BlockNumber VAR_10,
    bool VAR_11, IndexBulkDeleteResult *VAR_12)
{
 Page VAR_13;
 GinMetaPageData *VAR_14;
 BlockNumber VAR_15;

 VAR_13 = FUNC_1(VAR_9);
 VAR_14 = FUNC_3(VAR_13);
 VAR_15 = VAR_14->head;

 do
 {
  Page VAR_16;
  int VAR_17;
  int64 VAR_18 = 0;
  ginxlogDeleteListPages VAR_19;
  Buffer VAR_20[VAR_2];
  BlockNumber VAR_21[VAR_2];

  VAR_19.ndeleted = 0;
  while (VAR_19.ndeleted < VAR_2 && VAR_15 != VAR_10)
  {
   VAR_21[VAR_19.ndeleted] = VAR_15;
   VAR_20[VAR_19.ndeleted] = FUNC_9(VAR_8, VAR_15);
   FUNC_6(VAR_20[VAR_19.ndeleted], VAR_1);
   VAR_16 = FUNC_1(VAR_20[VAR_19.ndeleted]);

   VAR_19.ndeleted++;

   FUNC_0(!FUNC_5(VAR_16));

   VAR_18 += FUNC_4(VAR_16)->maxoff;
   VAR_15 = FUNC_4(VAR_16)->rightlink;
  }

  if (VAR_12)
   VAR_12->pages_deleted += VAR_19.ndeleted;






  if (FUNC_11(VAR_8))
   FUNC_15(VAR_19.ndeleted, 0);

  FUNC_12();

  VAR_14->head = VAR_15;

  FUNC_0(VAR_14->nPendingPages >= VAR_19.ndeleted);
  VAR_14->nPendingPages -= VAR_19.ndeleted;
  FUNC_0(VAR_14->nPendingHeapTuples >= VAR_18);
  VAR_14->nPendingHeapTuples -= VAR_18;

  if (VAR_15 == VAR_3)
  {
   VAR_14->tail = VAR_3;
   VAR_14->tailFreeSize = 0;
   VAR_14->nPendingPages = 0;
   VAR_14->nPendingHeapTuples = 0;
  }
  ((PageHeader) VAR_13)->pd_lower =
   ((char *) VAR_14 + sizeof(GinMetaPageData)) - (char *) VAR_13;

  FUNC_7(VAR_9);

  for (VAR_17 = 0; VAR_17 < VAR_19.ndeleted; VAR_17++)
  {
   VAR_16 = FUNC_1(VAR_20[VAR_17]);
   FUNC_4(VAR_16)->flags = VAR_0;
   FUNC_7(VAR_20[VAR_17]);
  }

  if (FUNC_11(VAR_8))
  {
   XLogRecPtr VAR_22;

   FUNC_14();
   FUNC_17(0, VAR_9,
          VAR_5 | VAR_4);
   for (VAR_17 = 0; VAR_17 < VAR_19.ndeleted; VAR_17++)
    FUNC_17(VAR_17 + 1, VAR_20[VAR_17], VAR_5);

   FUNC_19(&VAR_19.metadata, VAR_14, sizeof(GinMetaPageData));

   FUNC_18((char *) &VAR_19,
        sizeof(ginxlogDeleteListPages));

   VAR_22 = FUNC_16(VAR_6, VAR_7);
   FUNC_8(VAR_13, VAR_22);

   for (VAR_17 = 0; VAR_17 < VAR_19.ndeleted; VAR_17++)
   {
    VAR_16 = FUNC_1(VAR_20[VAR_17]);
    FUNC_8(VAR_16, VAR_22);
   }
  }

  for (VAR_17 = 0; VAR_17 < VAR_19.ndeleted; VAR_17++)
   FUNC_13(VAR_20[VAR_17]);

  FUNC_2();

  for (VAR_17 = 0; VAR_11 && VAR_17 < VAR_19.ndeleted; VAR_17++)
   FUNC_10(VAR_8, VAR_21[VAR_17]);

 } while (VAR_15 != VAR_10);
}
