
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
typedef int XLogRecPtr ;
struct TYPE_5__ {int* lsn; } ;
typedef TYPE_1__ WalSndCtlData ;
struct TYPE_7__ {scalar_t__ sync_standby_priority; scalar_t__ state; int flush; } ;
struct TYPE_6__ {scalar_t__ syncrep_method; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 TYPE_3__* VAR_8 ;
 int FUNC_2 (int*,int*,int*,int*) ;
 int VAR_9 ;
 int FUNC_3 (int,size_t) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_1__* VAR_12 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ,char*,int,int ,int ,int,int ,int ,int,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ,...) ;

void
FUNC_8(void)
{
 volatile WalSndCtlData *VAR_15 = VAR_12;
 XLogRecPtr VAR_16;
 XLogRecPtr VAR_17;
 XLogRecPtr VAR_18;
 bool VAR_19;
 bool VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23 = 0;
 if (VAR_3->sync_standby_priority == 0 ||
  (VAR_3->state != VAR_11 &&
   VAR_3->state != VAR_10) ||
  FUNC_4(VAR_3->flush))
 {
  VAR_13 = 1;
  return;
 }





 FUNC_0(VAR_9, VAR_2);





 VAR_19 = FUNC_2(&VAR_16, &VAR_17, &VAR_18, &VAR_20);





 if (VAR_13 && VAR_20)
 {
  VAR_13 = 0;

  if (VAR_8->syncrep_method == VAR_4)
   FUNC_6(VAR_1,
     (FUNC_7("standby \"%s\" is now a synchronous standby with priority %u",
       VAR_14, VAR_3->sync_standby_priority)));
  else
   FUNC_6(VAR_1,
     (FUNC_7("standby \"%s\" is now a candidate for quorum synchronous standby",
       VAR_14)));
 }





 if (!VAR_19 || !VAR_20)
 {
  FUNC_1(VAR_9);
  VAR_13 = !VAR_20;
  return;
 }





 if (VAR_15->lsn[VAR_7] < VAR_16)
 {
  VAR_15->lsn[VAR_7] = VAR_16;
  VAR_21 = FUNC_3(0, VAR_7);
 }
 if (VAR_15->lsn[VAR_6] < VAR_17)
 {
  VAR_15->lsn[VAR_6] = VAR_17;
  VAR_22 = FUNC_3(0, VAR_6);
 }
 if (VAR_15->lsn[VAR_5] < VAR_18)
 {
  VAR_15->lsn[VAR_5] = VAR_18;
  VAR_23 = FUNC_3(0, VAR_5);
 }

 FUNC_1(VAR_9);

 FUNC_5(VAR_0, "released %d procs up to write %X/%X, %d procs up to flush %X/%X, %d procs up to apply %X/%X",
   VAR_21, (uint32) (VAR_16 >> 32), (uint32) VAR_16,
   VAR_22, (uint32) (VAR_17 >> 32), (uint32) VAR_17,
   VAR_23, (uint32) (VAR_18 >> 32), (uint32) VAR_18);
}
