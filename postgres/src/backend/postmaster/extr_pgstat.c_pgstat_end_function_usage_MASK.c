
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int instr_time ;
struct TYPE_5__ {int save_f_total_time; int save_total; int f_start; TYPE_1__* fs; } ;
struct TYPE_4__ {int f_self_time; int f_total_time; int f_numcalls; } ;
typedef TYPE_1__ PgStat_FunctionCounts ;
typedef TYPE_2__ PgStat_FunctionCallUsage ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_3(PgStat_FunctionCallUsage *VAR_2, bool VAR_3)
{
 PgStat_FunctionCounts *VAR_4 = VAR_2->fs;
 instr_time VAR_5;
 instr_time VAR_6;
 instr_time VAR_7;


 if (VAR_4 == ((void*)0))
  return;


 FUNC_1(VAR_5);
 FUNC_2(VAR_5, VAR_2->f_start);


 VAR_6 = VAR_1;
 FUNC_2(VAR_6, VAR_2->save_total);
 VAR_7 = VAR_5;
 FUNC_2(VAR_7, VAR_6);


 FUNC_0(VAR_1, VAR_7);
 FUNC_0(VAR_5, VAR_2->save_f_total_time);


 if (VAR_3)
  VAR_4->f_numcalls++;
 VAR_4->f_total_time = VAR_5;
 FUNC_0(VAR_4->f_self_time, VAR_7);


 VAR_0 = 1;
}
