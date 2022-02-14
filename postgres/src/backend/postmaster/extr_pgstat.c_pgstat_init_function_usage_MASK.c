
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int hash_ctl ;
struct TYPE_17__ {TYPE_1__* flinfo; } ;
struct TYPE_16__ {int keysize; int entrysize; } ;
struct TYPE_12__ {int f_total_time; } ;
struct TYPE_15__ {TYPE_11__ f_counts; } ;
struct TYPE_14__ {int f_start; int save_total; int save_f_total_time; TYPE_11__* fs; } ;
struct TYPE_13__ {scalar_t__ fn_stats; int fn_oid; } ;
typedef int PgStat_FunctionCounts ;
typedef TYPE_2__ PgStat_FunctionCallUsage ;
typedef TYPE_3__ PgStat_BackendFunctionEntry ;
typedef int Oid ;
typedef TYPE_4__ HASHCTL ;
typedef TYPE_5__* FunctionCallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_11__*,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*,int ,TYPE_4__*,int) ;
 TYPE_3__* FUNC_3 (scalar_t__,int *,int ,int*) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

void
FUNC_5(FunctionCallInfo VAR_7,
         PgStat_FunctionCallUsage *VAR_8)
{
 PgStat_BackendFunctionEntry *VAR_9;
 bool VAR_10;

 if (VAR_5 <= VAR_7->flinfo->fn_stats)
 {

  VAR_8->fs = ((void*)0);
  return;
 }

 if (!VAR_4)
 {

  HASHCTL VAR_11;

  FUNC_4(&VAR_11, 0, sizeof(VAR_11));
  VAR_11.keysize = sizeof(Oid);
  VAR_11.entrysize = sizeof(PgStat_BackendFunctionEntry);
  VAR_4 = FUNC_2("Function stat entries",
           VAR_3,
           &VAR_11,
           VAR_1 | VAR_0);
 }


 VAR_9 = FUNC_3(VAR_4, &VAR_7->flinfo->fn_oid,
        VAR_2, &VAR_10);
 if (!VAR_10)
  FUNC_1(&VAR_9->f_counts, 0, sizeof(PgStat_FunctionCounts));

 VAR_8->fs = &VAR_9->f_counts;


 VAR_8->save_f_total_time = VAR_9->f_counts.f_total_time;


 VAR_8->save_total = VAR_6;


 FUNC_0(VAR_8->f_start);
}
