
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_18__ {scalar_t__ tups_inserted; scalar_t__ itups; scalar_t__ htups; int tuplesort; } ;
typedef TYPE_2__ ValidateIndexState ;
struct TYPE_21__ {int ii_Concurrent; } ;
struct TYPE_20__ {int analyze_only; int report_progress; int estimated_count; int * strategy; int num_heap_tuples; int message_level; TYPE_3__* index; } ;
struct TYPE_19__ {TYPE_1__* rd_rel; } ;
struct TYPE_17__ {int reltuples; int relowner; } ;
typedef int Snapshot ;
typedef TYPE_3__* Relation ;
typedef int Oid ;
typedef TYPE_4__ IndexVacuumInfo ;
typedef TYPE_5__ IndexInfo ;


 int FUNC_0 (int,int) ;
 TYPE_5__* FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int ,int) ;
 int VAR_15 ;
 int FUNC_5 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_4__*,int *,int ,void*) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_8 (int ,int ) ;
 int VAR_16 ;
 int FUNC_9 (int,int const*,int const*) ;
 int FUNC_10 (int const,int ) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_3__*,TYPE_3__*,TYPE_5__*,int ,TYPE_2__*) ;
 TYPE_3__* FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int ,int,int ,int *,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int VAR_17 ;

void
FUNC_17(Oid VAR_18, Oid VAR_19, Snapshot VAR_20)
{
 Relation VAR_21,
    VAR_22;
 IndexInfo *VAR_23;
 IndexVacuumInfo VAR_24;
 ValidateIndexState VAR_25;
 Oid VAR_26;
 int VAR_27;
 int VAR_28;

 {
  const int VAR_29[] = {
   VAR_5,
   VAR_9,
   VAR_10,
   VAR_11,
   VAR_12
  };
  const int64 VAR_30[] = {
   VAR_6,
   0, 0, 0, 0
  };

  FUNC_9(5, VAR_29, VAR_30);
 }


 VAR_21 = FUNC_13(VAR_18, VAR_15);

 VAR_22 = FUNC_8(VAR_19, VAR_13);






 VAR_23 = FUNC_1(VAR_22);


 VAR_23->ii_Concurrent = 1;






 FUNC_2(&VAR_26, &VAR_27);
 FUNC_4(VAR_21->rd_rel->relowner,
         VAR_27 | VAR_14);
 VAR_28 = FUNC_3();




 VAR_24.index = VAR_22;
 VAR_24.analyze_only = 0;
 VAR_24.report_progress = 1;
 VAR_24.estimated_count = 1;
 VAR_24.message_level = VAR_0;
 VAR_24.num_heap_tuples = VAR_21->rd_rel->reltuples;
 VAR_24.strategy = ((void*)0);







 VAR_25.tuplesort = FUNC_14(VAR_1, VAR_2,
           VAR_3, 0,
           VAR_16,
           ((void*)0), 0);
 VAR_25.htups = VAR_25.itups = VAR_25.tups_inserted = 0;


 (void) FUNC_6(&VAR_24, ((void*)0),
        VAR_17, (void *) &VAR_25);


 {
  const int VAR_31[] = {
   VAR_5,
   VAR_11,
   VAR_12
  };
  const int64 VAR_32[] = {
   VAR_7,
   0, 0
  };

  FUNC_9(3, VAR_31, VAR_32);
 }
 FUNC_16(VAR_25.tuplesort);




 FUNC_10(VAR_5,
         VAR_8);
 FUNC_12(VAR_21,
         VAR_22,
         VAR_23,
         VAR_20,
         &VAR_25);


 FUNC_15(VAR_25.tuplesort);

 FUNC_5(VAR_0,
   "validate_index found %.0f heap tuples, %.0f index tuples; inserted %.0f missing tuples",
   VAR_25.htups, VAR_25.itups, VAR_25.tups_inserted);


 FUNC_0(0, VAR_28);


 FUNC_4(VAR_26, VAR_27);


 FUNC_7(VAR_22, VAR_4);
 FUNC_11(VAR_21, VAR_4);
}
