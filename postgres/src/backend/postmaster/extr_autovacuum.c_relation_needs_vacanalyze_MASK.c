
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ float4 ;
typedef scalar_t__ TransactionId ;
struct TYPE_10__ {scalar_t__ vacuum_scale_factor; int vacuum_threshold; scalar_t__ analyze_scale_factor; int analyze_threshold; int enabled; int multixact_freeze_max_age; int freeze_max_age; } ;
struct TYPE_9__ {scalar_t__ reltuples; int relname; int relminmxid; int relfrozenxid; } ;
struct TYPE_8__ {scalar_t__ n_dead_tuples; scalar_t__ changes_since_analyze; } ;
typedef TYPE_1__ PgStat_StatTabEntry ;
typedef scalar_t__ Oid ;
typedef scalar_t__ MultiXactId ;
typedef TYPE_2__* Form_pg_class ;
typedef TYPE_3__ AutoVacOpts ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int ,char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_11(Oid VAR_11,
        AutoVacOpts *VAR_12,
        Form_pg_class VAR_13,
        PgStat_StatTabEntry *VAR_14,
        int VAR_15,

        bool *VAR_16,
        bool *VAR_17,
        bool *VAR_18)
{
 bool VAR_19;
 bool VAR_20;
 float4 VAR_21;


 int VAR_22,
    VAR_23;
 float4 VAR_24,
    VAR_25;


 float4 VAR_26,
    VAR_27;


 float4 VAR_28,
    VAR_29;


 int VAR_30;
 int VAR_31;
 TransactionId VAR_32;
 MultiXactId VAR_33;

 FUNC_0(VAR_13 != ((void*)0));
 FUNC_0(FUNC_6(VAR_11));
 VAR_24 = (VAR_12 && VAR_12->vacuum_scale_factor >= 0)
  ? VAR_12->vacuum_scale_factor
  : VAR_7;

 VAR_22 = (VAR_12 && VAR_12->vacuum_threshold >= 0)
  ? VAR_12->vacuum_threshold
  : VAR_8;

 VAR_25 = (VAR_12 && VAR_12->analyze_scale_factor >= 0)
  ? VAR_12->analyze_scale_factor
  : VAR_4;

 VAR_23 = (VAR_12 && VAR_12->analyze_threshold >= 0)
  ? VAR_12->analyze_threshold
  : VAR_5;

 VAR_30 = (VAR_12 && VAR_12->freeze_max_age >= 0)
  ? FUNC_2(VAR_12->freeze_max_age, VAR_6)
  : VAR_6;

 VAR_31 = (VAR_12 && VAR_12->multixact_freeze_max_age >= 0)
  ? FUNC_2(VAR_12->multixact_freeze_max_age, VAR_15)
  : VAR_15;

 VAR_20 = (VAR_12 ? VAR_12->enabled : 1);


 VAR_32 = VAR_10 - VAR_30;
 if (VAR_32 < VAR_2)
  VAR_32 -= VAR_2;
 VAR_19 = (FUNC_8(VAR_13->relfrozenxid) &&
     FUNC_9(VAR_13->relfrozenxid,
            VAR_32));
 if (!VAR_19)
 {
  VAR_33 = VAR_9 - VAR_31;
  if (VAR_33 < VAR_1)
   VAR_33 -= VAR_1;
  VAR_19 = FUNC_3(VAR_13->relminmxid) &&
   FUNC_4(VAR_13->relminmxid, VAR_33);
 }
 *VAR_18 = VAR_19;


 if (!VAR_20 && !VAR_19)
 {
  *VAR_17 = 0;
  *VAR_16 = 0;
  return;
 }
 if (FUNC_7(VAR_14) && FUNC_1())
 {
  VAR_21 = VAR_13->reltuples;
  VAR_28 = VAR_14->n_dead_tuples;
  VAR_29 = VAR_14->changes_since_analyze;

  VAR_26 = (float4) VAR_22 + VAR_24 * VAR_21;
  VAR_27 = (float4) VAR_23 + VAR_25 * VAR_21;






  FUNC_10(VAR_0, "%s: vac: %.0f (threshold %.0f), anl: %.0f (threshold %.0f)",
    FUNC_5(VAR_13->relname),
    VAR_28, VAR_26, VAR_29, VAR_27);


  *VAR_16 = VAR_19 || (VAR_28 > VAR_26);
  *VAR_17 = (VAR_29 > VAR_27);
 }
 else
 {





  *VAR_16 = VAR_19;
  *VAR_17 = 0;
 }


 if (VAR_11 == VAR_3)
  *VAR_17 = 0;
}
