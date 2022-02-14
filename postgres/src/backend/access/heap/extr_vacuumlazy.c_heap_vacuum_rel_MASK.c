
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_28__ {scalar_t__ index_cleanup; scalar_t__ truncate; scalar_t__ log_min_duration; int options; scalar_t__ is_wraparound; int multixact_freeze_table_age; int multixact_freeze_min_age; int freeze_table_age; int freeze_min_age; } ;
typedef TYPE_2__ VacuumParams ;
typedef int TransactionId ;
typedef int TimestampTz ;
struct TYPE_31__ {scalar_t__ old_rel_pages; double old_live_tuples; int lock_waiter_detected; int useindex; scalar_t__ scanned_pages; scalar_t__ frozenskipped_pages; scalar_t__ rel_pages; double new_live_tuples; scalar_t__ tupcount_pages; int new_dead_tuples; int new_rel_tuples; int tuples_deleted; int pinskipped_pages; scalar_t__ pages_removed; scalar_t__ num_index_scans; } ;
struct TYPE_30__ {TYPE_1__* rd_rel; } ;
struct TYPE_29__ {int data; } ;
struct TYPE_27__ {scalar_t__ relpages; double reltuples; int relisshared; int relminmxid; int relfrozenxid; } ;
typedef TYPE_3__ StringInfoData ;
typedef TYPE_4__* Relation ;
typedef int PGRUsage ;
typedef int MultiXactId ;
typedef TYPE_5__ LVRelStats ;
typedef int BufferAccessStrategy ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_15 ;
 int FUNC_8 (int ,int ,long*,int*) ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 double VAR_20 ;
 int VAR_21 ;
 double VAR_22 ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (TYPE_3__*,char*,double,...) ;
 int VAR_23 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (char*,int ,int ,int ) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_4__*,TYPE_2__*,TYPE_5__*,TYPE_4__**,int,int) ;
 int FUNC_21 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 () ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int ,int ,double,int ) ;
 scalar_t__ FUNC_30 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_31 (int,TYPE_4__**,int ) ;
 int FUNC_32 (TYPE_4__*,int ,int*,TYPE_4__***) ;
 int VAR_24 ;
 int FUNC_33 (TYPE_4__*,scalar_t__,double,scalar_t__,int,int ,int ,int) ;
 int FUNC_34 (TYPE_4__*,int ,int ,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_35 (TYPE_4__*,scalar_t__*,int *) ;

void
FUNC_36(Relation VAR_25, VacuumParams *VAR_26,
    BufferAccessStrategy VAR_27)
{
 LVRelStats *VAR_28;
 Relation *VAR_29;
 int VAR_30;
 PGRUsage VAR_31;
 TimestampTz VAR_32 = 0;
 long VAR_33;
 int VAR_34;
 double VAR_35,
    VAR_36;
 bool VAR_37;
 bool VAR_38;
 TransactionId VAR_39;
 MultiXactId VAR_40;
 BlockNumber VAR_41;
 BlockNumber VAR_42;
 double VAR_43;
 TransactionId VAR_44;
 MultiXactId VAR_45;

 FUNC_0(VAR_26 != ((void*)0));
 FUNC_0(VAR_26->index_cleanup != VAR_17);
 FUNC_0(VAR_26->truncate != VAR_17);


 FUNC_0(FUNC_10(VAR_25->rd_rel->relfrozenxid));
 FUNC_0(FUNC_3(VAR_25->rd_rel->relminmxid));


 if (FUNC_2() && VAR_26->log_min_duration >= 0)
 {
  FUNC_24(&VAR_31);
  VAR_32 = FUNC_1();
 }

 if (VAR_26->options & VAR_19)
  VAR_23 = VAR_4;
 else
  VAR_23 = VAR_2;

 FUNC_27(VAR_12,
          FUNC_7(VAR_25));

 VAR_24 = VAR_27;

 FUNC_34(VAR_25,
        VAR_26->freeze_min_age,
        VAR_26->freeze_table_age,
        VAR_26->multixact_freeze_min_age,
        VAR_26->multixact_freeze_table_age,
        &VAR_11, &VAR_3, &VAR_39,
        &VAR_8, &VAR_40);







 VAR_37 = FUNC_11(VAR_25->rd_rel->relfrozenxid,
              VAR_39);
 VAR_37 |= FUNC_4(VAR_25->rd_rel->relminmxid,
             VAR_40);
 if (VAR_26->options & VAR_16)
  VAR_37 = 1;







 if (VAR_26->is_wraparound && !VAR_37)
 {
  FUNC_14(VAR_1,
    (FUNC_15("skipping redundant vacuum to prevent wraparound of table \"%s.%s.%s\"",
      FUNC_17(VAR_9),
      FUNC_18(FUNC_5(VAR_25)),
      FUNC_6(VAR_25))));
  FUNC_26();
  return;
 }

 VAR_28 = (LVRelStats *) FUNC_22(sizeof(LVRelStats));

 VAR_28->old_rel_pages = VAR_25->rd_rel->relpages;
 VAR_28->old_live_tuples = VAR_25->rd_rel->reltuples;
 VAR_28->num_index_scans = 0;
 VAR_28->pages_removed = 0;
 VAR_28->lock_waiter_detected = 0;


 FUNC_32(VAR_25, VAR_15, &VAR_30, &VAR_29);
 VAR_28->useindex = (VAR_30 > 0 &&
        VAR_26->index_cleanup == VAR_18);


 FUNC_20(VAR_25, VAR_26, VAR_28, VAR_29, VAR_30, VAR_37);


 FUNC_31(VAR_30, VAR_29, VAR_10);
 if ((VAR_28->scanned_pages + VAR_28->frozenskipped_pages)
  < VAR_28->rel_pages)
 {
  FUNC_0(!VAR_37);
  VAR_38 = 0;
 }
 else
  VAR_38 = 1;




 if (FUNC_30(VAR_26, VAR_28))
  FUNC_21(VAR_25, VAR_28);


 FUNC_28(VAR_13,
         VAR_14);
 VAR_41 = VAR_28->rel_pages;
 VAR_43 = VAR_28->new_live_tuples;
 if (VAR_28->tupcount_pages == 0 && VAR_41 > 0)
 {
  VAR_41 = VAR_28->old_rel_pages;
  VAR_43 = VAR_28->old_live_tuples;
 }

 FUNC_35(VAR_25, &VAR_42, ((void*)0));
 if (VAR_42 > VAR_41)
  VAR_42 = VAR_41;

 VAR_44 = VAR_38 ? VAR_3 : VAR_6;
 VAR_45 = VAR_38 ? VAR_8 : VAR_5;

 FUNC_33(VAR_25,
      VAR_41,
      VAR_43,
      VAR_42,
      VAR_30 > 0,
      VAR_44,
      VAR_45,
      0);


 FUNC_29(FUNC_7(VAR_25),
       VAR_25->rd_rel->relisshared,
       VAR_43,
       VAR_28->new_dead_tuples);
 FUNC_26();


 if (FUNC_2() && VAR_26->log_min_duration >= 0)
 {
  TimestampTz VAR_46 = FUNC_1();

  if (VAR_26->log_min_duration == 0 ||
   FUNC_9(VAR_32, VAR_46,
            VAR_26->log_min_duration))
  {
   StringInfoData VAR_47;
   char *VAR_48;

   FUNC_8(VAR_32, VAR_46, &VAR_33, &VAR_34);

   VAR_35 = 0;
   VAR_36 = 0;
   if ((VAR_33 > 0) || (VAR_34 > 0))
   {
    VAR_35 = (double) VAR_0 * VAR_22 / (1024 * 1024) /
     (VAR_33 + VAR_34 / 1000000.0);
    VAR_36 = (double) VAR_0 * VAR_20 / (1024 * 1024) /
     (VAR_33 + VAR_34 / 1000000.0);
   }





   FUNC_19(&VAR_47);
   if (VAR_26->is_wraparound)
   {

    FUNC_0(VAR_37);
    VAR_48 = FUNC_12("automatic aggressive vacuum to prevent wraparound of table \"%s.%s.%s\": index scans: %d\n");
   }
   else
   {
    if (VAR_37)
     VAR_48 = FUNC_12("automatic aggressive vacuum of table \"%s.%s.%s\": index scans: %d\n");
    else
     VAR_48 = FUNC_12("automatic vacuum of table \"%s.%s.%s\": index scans: %d\n");
   }
   FUNC_13(&VAR_47, VAR_48,
        FUNC_17(VAR_9),
        FUNC_18(FUNC_5(VAR_25)),
        FUNC_6(VAR_25),
        VAR_28->num_index_scans);
   FUNC_13(&VAR_47, FUNC_12("pages: %u removed, %u remain, %u skipped due to pins, %u skipped frozen\n"),
        VAR_28->pages_removed,
        VAR_28->rel_pages,
        VAR_28->pinskipped_pages,
        VAR_28->frozenskipped_pages);
   FUNC_13(&VAR_47,
        FUNC_12("tuples: %.0f removed, %.0f remain, %.0f are dead but not yet removable, oldest xmin: %u\n"),
        VAR_28->tuples_deleted,
        VAR_28->new_rel_tuples,
        VAR_28->new_dead_tuples,
        VAR_11);
   FUNC_13(&VAR_47,
        FUNC_12("buffer usage: %d hits, %d misses, %d dirtied\n"),
        VAR_21,
        VAR_22,
        VAR_20);
   FUNC_13(&VAR_47, FUNC_12("avg read rate: %.3f MB/s, avg write rate: %.3f MB/s\n"),
        VAR_35, VAR_36);
   FUNC_13(&VAR_47, FUNC_12("system usage: %s"), FUNC_25(&VAR_31));

   FUNC_14(VAR_7,
     (FUNC_16("%s", VAR_47.data)));
   FUNC_23(VAR_47.data);
  }
 }
}
