
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {double vacuum_cost_delay; int vacuum_cost_limit; int log_min_duration; int freeze_min_age; int freeze_table_age; int multixact_freeze_min_age; int multixact_freeze_table_age; } ;
struct TYPE_13__ {TYPE_5__ ar_reloptions; scalar_t__ ar_hasrelopts; } ;
typedef TYPE_2__ av_relation ;
struct TYPE_12__ {int options; int freeze_min_age; int freeze_table_age; int multixact_freeze_min_age; int multixact_freeze_table_age; int is_wraparound; int log_min_duration; void* truncate; void* index_cleanup; } ;
struct TYPE_14__ {int at_vacuum_cost_limit; double at_vacuum_cost_delay; int at_dobalance; int * at_datname; int * at_nspname; int * at_relname; TYPE_1__ at_params; int at_sharedrel; int at_relid; } ;
typedef TYPE_3__ autovac_table ;
typedef int TupleDesc ;
struct TYPE_15__ {scalar_t__ relkind; int relisshared; } ;
typedef int PgStat_StatTabEntry ;
typedef int PgStat_StatDBEntry ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int HTAB ;
typedef TYPE_4__* Form_pg_class ;
typedef TYPE_5__ AutoVacOpts ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 double VAR_11 ;
 int VAR_12 ;
 int FUNC_4 () ;
 double VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_5__* FUNC_5 (int ,int ) ;
 int * FUNC_6 (int ,int ,int *,int *) ;
 TYPE_2__* FUNC_7 (int *,int *,int ,int*) ;
 int FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 (int) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int ,TYPE_5__*,TYPE_4__*,int *,int,int*,int*,int*) ;

__attribute__((used)) static autovac_table *
FUNC_12(Oid VAR_19, HTAB *VAR_20,
       TupleDesc VAR_21,
       int VAR_22)
{
 Form_pg_class VAR_23;
 HeapTuple VAR_24;
 bool VAR_25;
 bool VAR_26;
 autovac_table *VAR_27 = ((void*)0);
 PgStat_StatTabEntry *VAR_28;
 PgStat_StatDBEntry *VAR_29;
 PgStat_StatDBEntry *VAR_30;
 bool VAR_31;
 AutoVacOpts *VAR_32;


 FUNC_4();

 VAR_29 = FUNC_10(VAR_1);
 VAR_30 = FUNC_10(VAR_3);


 VAR_24 = FUNC_3(VAR_5, FUNC_2(VAR_19));
 if (!FUNC_1(VAR_24))
  return ((void*)0);
 VAR_23 = (Form_pg_class) FUNC_0(VAR_24);





 VAR_32 = FUNC_5(VAR_24, VAR_21);
 if (VAR_23->relkind == VAR_4 &&
  VAR_32 == ((void*)0) && VAR_20 != ((void*)0))
 {
  av_relation *VAR_33;
  bool VAR_34;

  VAR_33 = FUNC_7(VAR_20, &VAR_19, VAR_0, &VAR_34);
  if (VAR_34 && VAR_33->ar_hasrelopts)
   VAR_32 = &VAR_33->ar_reloptions;
 }


 VAR_28 = FUNC_6(VAR_19, VAR_23->relisshared,
           VAR_29, VAR_30);

 FUNC_11(VAR_19, VAR_32, VAR_23, VAR_28,
         VAR_22,
         &VAR_25, &VAR_26, &VAR_31);


 if (VAR_23->relkind == VAR_4)
  VAR_26 = 0;


 if (VAR_26 || VAR_25)
 {
  int VAR_35;
  int VAR_36;
  int VAR_37;
  int VAR_38;
  int VAR_39;
  double VAR_40;
  int VAR_41;
  VAR_40 = (VAR_32 && VAR_32->vacuum_cost_delay >= 0)
   ? VAR_32->vacuum_cost_delay
   : (VAR_13 >= 0)
   ? VAR_13
   : VAR_11;


  VAR_39 = (VAR_32 && VAR_32->vacuum_cost_limit > 0)
   ? VAR_32->vacuum_cost_limit
   : (VAR_14 > 0)
   ? VAR_14
   : VAR_12;


  VAR_41 = (VAR_32 && VAR_32->log_min_duration >= 0)
   ? VAR_32->log_min_duration
   : VAR_2;


  VAR_35 = (VAR_32 && VAR_32->freeze_min_age >= 0)
   ? VAR_32->freeze_min_age
   : VAR_15;

  VAR_36 = (VAR_32 && VAR_32->freeze_table_age >= 0)
   ? VAR_32->freeze_table_age
   : VAR_16;

  VAR_37 = (VAR_32 &&
         VAR_32->multixact_freeze_min_age >= 0)
   ? VAR_32->multixact_freeze_min_age
   : VAR_17;

  VAR_38 = (VAR_32 &&
           VAR_32->multixact_freeze_table_age >= 0)
   ? VAR_32->multixact_freeze_table_age
   : VAR_18;

  VAR_27 = FUNC_9(sizeof(autovac_table));
  VAR_27->at_relid = VAR_19;
  VAR_27->at_sharedrel = VAR_23->relisshared;
  VAR_27->at_params.options = VAR_7 |
   (VAR_25 ? VAR_10 : 0) |
   (VAR_26 ? VAR_6 : 0) |
   (!VAR_31 ? VAR_8 : 0);
  VAR_27->at_params.index_cleanup = VAR_9;
  VAR_27->at_params.truncate = VAR_9;
  VAR_27->at_params.freeze_min_age = VAR_35;
  VAR_27->at_params.freeze_table_age = VAR_36;
  VAR_27->at_params.multixact_freeze_min_age = VAR_37;
  VAR_27->at_params.multixact_freeze_table_age = VAR_38;
  VAR_27->at_params.is_wraparound = VAR_31;
  VAR_27->at_params.log_min_duration = VAR_41;
  VAR_27->at_vacuum_cost_limit = VAR_39;
  VAR_27->at_vacuum_cost_delay = VAR_40;
  VAR_27->at_relname = ((void*)0);
  VAR_27->at_nspname = ((void*)0);
  VAR_27->at_datname = ((void*)0);





  VAR_27->at_dobalance =
   !(VAR_32 && (VAR_32->vacuum_cost_limit > 0 ||
       VAR_32->vacuum_cost_delay > 0));
 }

 FUNC_8(VAR_24);

 return VAR_27;
}
