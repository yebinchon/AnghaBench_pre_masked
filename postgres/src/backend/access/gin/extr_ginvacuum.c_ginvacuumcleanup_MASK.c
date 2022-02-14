
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int idxStat ;
struct TYPE_12__ {scalar_t__ nTotalPages; int nEntries; int nEntryPages; int nDataPages; } ;
struct TYPE_11__ {void* num_pages; scalar_t__ pages_free; int estimated_count; int num_index_tuples; } ;
struct TYPE_10__ {int index; int strategy; int estimated_count; int num_heap_tuples; scalar_t__ analyze_only; } ;
typedef int Relation ;
typedef scalar_t__ Page ;
typedef TYPE_1__ IndexVacuumInfo ;
typedef TYPE_2__ IndexBulkDeleteResult ;
typedef TYPE_3__ GinStatsData ;
typedef int GinState ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_13 (int ,scalar_t__) ;
 void* FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,int,int,int,TYPE_2__*) ;
 int FUNC_18 (int ,TYPE_3__*,int) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 () ;

IndexBulkDeleteResult *
FUNC_23(IndexVacuumInfo *VAR_5, IndexBulkDeleteResult *VAR_6)
{
 Relation VAR_7 = VAR_5->index;
 bool VAR_8;
 BlockNumber VAR_9,
    VAR_10;
 BlockNumber VAR_11;
 GinState VAR_12;
 GinStatsData VAR_13;





 if (VAR_5->analyze_only)
 {
  if (FUNC_7())
  {
   FUNC_19(&VAR_12, VAR_7);
   FUNC_17(&VAR_12, 0, 1, 1, VAR_6);
  }
  return VAR_6;
 }





 if (VAR_6 == ((void*)0))
 {
  VAR_6 = (IndexBulkDeleteResult *) FUNC_21(sizeof(IndexBulkDeleteResult));
  FUNC_19(&VAR_12, VAR_7);
  FUNC_17(&VAR_12, !FUNC_7(),
       0, 1, VAR_6);
 }

 FUNC_20(&VAR_13, 0, sizeof(VAR_13));






 VAR_6->num_index_tuples = VAR_5->num_heap_tuples;
 VAR_6->estimated_count = VAR_5->estimated_count;




 VAR_8 = !FUNC_11(VAR_7);

 if (VAR_8)
  FUNC_9(VAR_7, VAR_0);
 VAR_9 = FUNC_14(VAR_7);
 if (VAR_8)
  FUNC_15(VAR_7, VAR_0);

 VAR_11 = 0;

 for (VAR_10 = VAR_1; VAR_10 < VAR_9; VAR_10++)
 {
  Buffer VAR_14;
  Page VAR_15;

  FUNC_22();

  VAR_14 = FUNC_12(VAR_7, VAR_3, VAR_10,
         VAR_4, VAR_5->strategy);
  FUNC_8(VAR_14, VAR_2);
  VAR_15 = (Page) FUNC_1(VAR_14);

  if (FUNC_5(VAR_15))
  {
   FUNC_0(VAR_10 != VAR_1);
   FUNC_13(VAR_7, VAR_10);
   VAR_11++;
  }
  else if (FUNC_2(VAR_15))
  {
   VAR_13.nDataPages++;
  }
  else if (!FUNC_4(VAR_15))
  {
   VAR_13.nEntryPages++;

   if (FUNC_3(VAR_15))
    VAR_13.nEntries += FUNC_10(VAR_15);
  }

  FUNC_16(VAR_14);
 }


 VAR_13.nTotalPages = VAR_9;
 FUNC_18(VAR_5->index, &VAR_13, 0);


 FUNC_6(VAR_5->index);

 VAR_6->pages_free = VAR_11;

 if (VAR_8)
  FUNC_9(VAR_7, VAR_0);
 VAR_6->num_pages = FUNC_14(VAR_7);
 if (VAR_8)
  FUNC_15(VAR_7, VAR_0);

 return VAR_6;
}
