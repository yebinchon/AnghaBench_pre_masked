
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int instr_time ;
struct TYPE_12__ {int cnt; } ;
struct TYPE_11__ {TYPE_8__ stats; } ;
struct TYPE_10__ {double txn_scheduled; size_t use_file; int cnt; int txn_begin; } ;
struct TYPE_9__ {TYPE_8__ stats; int latency_late; } ;
typedef TYPE_1__ TState ;
typedef int StatsData ;
typedef TYPE_2__ CState ;


 double FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_8__*,int,double,double) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int *,int,double,double) ;
 double VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_4(TState *VAR_6, CState *VAR_7, instr_time *VAR_8,
     bool VAR_9, StatsData *VAR_10)
{
 double VAR_11 = 0.0,
    VAR_12 = 0.0;
 bool VAR_13 = VAR_2 || VAR_4 || VAR_0,
    VAR_14 = VAR_13 || VAR_5 || VAR_1;

 if (VAR_14 && !VAR_9)
 {
  FUNC_1(*VAR_8);


  VAR_11 = FUNC_0(*VAR_8) - VAR_7->txn_scheduled;
  VAR_12 = FUNC_0(VAR_7->txn_begin) - VAR_7->txn_scheduled;
 }

 if (VAR_13)
 {

  FUNC_2(&VAR_6->stats, VAR_9, VAR_11, VAR_12);


  if (VAR_0 && VAR_11 > VAR_0)
   VAR_6->latency_late++;
 }
 else
 {

  VAR_6->stats.cnt++;
 }


 VAR_7->cnt++;

 if (VAR_5)
  FUNC_3(VAR_6, VAR_7, VAR_10, VAR_9, VAR_11, VAR_12);


 if (VAR_1)
  FUNC_2(&VAR_3[VAR_7->use_file].stats, VAR_9, VAR_11, VAR_12);
}
