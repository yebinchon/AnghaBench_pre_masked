
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct TYPE_17__ {int options; scalar_t__ log_min_duration; scalar_t__ index_cleanup; scalar_t__ truncate; scalar_t__ is_wraparound; } ;
typedef TYPE_2__ VacuumParams ;
struct TYPE_20__ {scalar_t__ relkind; scalar_t__ reltoastrelid; scalar_t__ relowner; } ;
struct TYPE_16__ {int lockRelId; } ;
struct TYPE_19__ {TYPE_7__* rd_rel; int * rd_options; TYPE_1__ rd_lockInfo; } ;
struct TYPE_18__ {scalar_t__ vacuum_truncate; scalar_t__ vacuum_index_cleanup; } ;
struct TYPE_15__ {int vacuumFlags; } ;
typedef TYPE_3__ StdRdOptions ;
typedef TYPE_4__* Relation ;
typedef int RangeVar ;
typedef scalar_t__ Oid ;
typedef int LockRelId ;
typedef int LOCKMODE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__*,int*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (int *,int ) ;
 TYPE_14__* VAR_4 ;
 int FUNC_9 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 () ;
 int VAR_8 ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int VAR_13 ;
 int FUNC_15 (scalar_t__,int) ;
 int VAR_14 ;
 int FUNC_16 () ;
 int FUNC_17 (int *,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_18 (scalar_t__,scalar_t__,int) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (char*,int ) ;
 int FUNC_21 (TYPE_4__*,int ) ;
 int FUNC_22 (TYPE_4__*,TYPE_2__*,int ) ;
 int VAR_23 ;
 int FUNC_23 (int ,TYPE_7__*,int) ;
 TYPE_4__* FUNC_24 (scalar_t__,int *,int,int,int ) ;

__attribute__((used)) static bool
FUNC_25(Oid VAR_24, RangeVar *VAR_25, VacuumParams *VAR_26)
{
 LOCKMODE VAR_27;
 Relation VAR_28;
 LockRelId VAR_29;
 Oid VAR_30;
 Oid VAR_31;
 int VAR_32;
 int VAR_33;

 FUNC_0(VAR_26 != ((void*)0));


 FUNC_16();





 FUNC_11(FUNC_4());

 if (!(VAR_26->options & VAR_15))
 {
  FUNC_6(VAR_8, VAR_3);
  VAR_4->vacuumFlags |= VAR_6;
  if (VAR_26->is_wraparound)
   VAR_4->vacuumFlags |= VAR_7;
  FUNC_7(VAR_8);
 }





 FUNC_2();






 VAR_27 = (VAR_26->options & VAR_15) ?
  VAR_0 : VAR_14;


 VAR_28 = FUNC_24(VAR_24, VAR_25, VAR_26->options,
          VAR_26->log_min_duration >= 0, VAR_27);


 if (!VAR_28)
 {
  FUNC_10();
  FUNC_3();
  return 0;
 }
 if (!FUNC_23(FUNC_14(VAR_28),
          VAR_28->rd_rel,
          VAR_26->options & VAR_20))
 {
  FUNC_21(VAR_28, VAR_27);
  FUNC_10();
  FUNC_3();
  return 0;
 }




 if (VAR_28->rd_rel->relkind != VAR_11 &&
  VAR_28->rd_rel->relkind != VAR_9 &&
  VAR_28->rd_rel->relkind != VAR_12 &&
  VAR_28->rd_rel->relkind != VAR_10)
 {
  FUNC_19(VAR_22,
    (FUNC_20("skipping \"%s\" --- cannot vacuum non-tables or special system tables",
      FUNC_13(VAR_28))));
  FUNC_21(VAR_28, VAR_27);
  FUNC_10();
  FUNC_3();
  return 0;
 }
 if (FUNC_12(VAR_28))
 {
  FUNC_21(VAR_28, VAR_27);
  FUNC_10();
  FUNC_3();
  return 0;
 }






 if (VAR_28->rd_rel->relkind == VAR_10)
 {
  FUNC_21(VAR_28, VAR_27);
  FUNC_10();
  FUNC_3();

  return 1;
 }
 VAR_29 = VAR_28->rd_lockInfo.lockRelId;
 FUNC_8(&VAR_29, VAR_27);


 if (VAR_26->index_cleanup == VAR_17)
 {
  if (VAR_28->rd_options == ((void*)0) ||
   ((StdRdOptions *) VAR_28->rd_options)->vacuum_index_cleanup)
   VAR_26->index_cleanup = VAR_19;
  else
   VAR_26->index_cleanup = VAR_18;
 }


 if (VAR_26->truncate == VAR_17)
 {
  if (VAR_28->rd_options == ((void*)0) ||
   ((StdRdOptions *) VAR_28->rd_options)->vacuum_truncate)
   VAR_26->truncate = VAR_19;
  else
   VAR_26->truncate = VAR_18;
 }






 if (!(VAR_26->options & VAR_16) && !(VAR_26->options & VAR_15))
  VAR_30 = VAR_28->rd_rel->reltoastrelid;
 else
  VAR_30 = VAR_2;







 FUNC_5(&VAR_31, &VAR_32);
 FUNC_15(VAR_28->rd_rel->relowner,
         VAR_32 | VAR_13);
 VAR_33 = FUNC_9();




 if (VAR_26->options & VAR_15)
 {
  int VAR_34 = 0;


  FUNC_21(VAR_28, VAR_5);
  VAR_28 = ((void*)0);

  if ((VAR_26->options & VAR_21) != 0)
   VAR_34 |= VAR_1;


  FUNC_18(VAR_24, VAR_2, VAR_34);
 }
 else
  FUNC_22(VAR_28, VAR_26, VAR_23);


 FUNC_1(0, VAR_33);


 FUNC_15(VAR_31, VAR_32);


 if (VAR_28)
  FUNC_21(VAR_28, VAR_5);




 FUNC_10();
 FUNC_3();
 if (VAR_30 != VAR_2)
  FUNC_25(VAR_30, ((void*)0), VAR_26);




 FUNC_17(&VAR_29, VAR_27);


 return 1;
}
