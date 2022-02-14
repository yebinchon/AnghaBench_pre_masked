
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ TimestampTz ;
struct TYPE_6__ {scalar_t__ clock_time; scalar_t__ cutoff_time; int databaseid; } ;
struct TYPE_5__ {scalar_t__ stats_timestamp; int databaseid; } ;
typedef TYPE_1__ PgStat_StatDBEntry ;
typedef TYPE_2__ PgStat_MsgInquiry ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 (int ,int) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8(PgStat_MsgInquiry *VAR_3, int VAR_4)
{
 PgStat_StatDBEntry *VAR_5;

 FUNC_1(VAR_0, "received inquiry for database %u", VAR_3->databaseid);
 if (FUNC_3(VAR_2, VAR_3->databaseid))
  return;
 VAR_5 = FUNC_5(VAR_3->databaseid, 0);
 if (VAR_5 == ((void*)0))
 {







 }
 else if (VAR_3->clock_time < VAR_5->stats_timestamp)
 {
  TimestampTz VAR_6 = FUNC_0();

  if (VAR_6 < VAR_5->stats_timestamp)
  {




   char *VAR_7;
   char *VAR_8;


   VAR_7 = FUNC_6(FUNC_7(VAR_5->stats_timestamp));
   VAR_8 = FUNC_6(FUNC_7(VAR_6));
   FUNC_1(VAR_1,
     "stats_timestamp %s is later than collector's time %s for database %u",
     VAR_7, VAR_8, VAR_5->databaseid);
   FUNC_4(VAR_7);
   FUNC_4(VAR_8);
  }
  else
  {




   return;
  }
 }
 else if (VAR_3->cutoff_time <= VAR_5->stats_timestamp)
 {

  return;
 }




 VAR_2 = FUNC_2(VAR_2,
           VAR_3->databaseid);
}
