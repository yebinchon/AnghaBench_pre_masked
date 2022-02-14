
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int socket_set ;
typedef int logpath ;
typedef int int64 ;
typedef int instr_time ;
struct TYPE_10__ {scalar_t__ state; int sleep_until; int txn_scheduled; int * con; } ;
struct TYPE_9__ {int nstate; scalar_t__ tid; int * logfile; int conn_time; int start_time; void* throttle_trigger; TYPE_2__* state; } ;
typedef TYPE_1__ TState ;
typedef int StatsData ;
typedef TYPE_2__ CState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char* VAR_9 ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,int *) ;
 scalar_t__ VAR_10 ;
 int * FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int * FUNC_12 () ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*,int *,int,int ,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (char*,char*) ;
 int FUNC_16 (int ,char*,char*,...) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ) ;
 int VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 int FUNC_19 (int) ;
 int FUNC_20 (TYPE_1__*,int,int,int *,int*) ;
 scalar_t__ VAR_15 ;
 int FUNC_21 (char*,int,char*,char*,int,...) ;
 int FUNC_22 (int *,int,int ) ;
 int VAR_16 ;
 char* FUNC_23 (scalar_t__) ;
 int FUNC_24 (int *) ;
 scalar_t__ VAR_17 ;
 int FUNC_25 (int *,int) ;

__attribute__((used)) static void *
FUNC_26(void *VAR_18)
{
 TState *VAR_19 = (TState *) VAR_18;
 CState *VAR_20 = VAR_19->state;
 instr_time VAR_21,
    VAR_22;
 int VAR_23 = VAR_19->nstate;
 int VAR_24 = VAR_23;
 socket_set *VAR_25 = FUNC_9(VAR_23);
 int VAR_26;


 int64 VAR_27 = FUNC_1(VAR_19->start_time);
 int64 VAR_28 = VAR_27;
 int64 VAR_29 = VAR_28 + (int64) VAR_15 * 1000000;
 StatsData VAR_30,
    VAR_31;







 FUNC_2(VAR_21);
 VAR_19->throttle_trigger = FUNC_1(VAR_21);

 FUNC_3(VAR_19->conn_time);

 FUNC_18(&VAR_31, FUNC_24(((void*)0)));
 VAR_30 = VAR_31;


 if (VAR_17)
 {
  char VAR_32[VAR_7];
  char *VAR_33 = VAR_13 ? VAR_13 : "pgbench_log";

  if (VAR_19->tid == 0)
   FUNC_21(VAR_32, sizeof(VAR_32), "%s.%d", VAR_33, VAR_14);
  else
   FUNC_21(VAR_32, sizeof(VAR_32), "%s.%d.%d", VAR_33, VAR_14, VAR_19->tid);

  VAR_19->logfile = FUNC_15(VAR_32, "w");

  if (VAR_19->logfile == ((void*)0))
  {
   FUNC_16(VAR_16, "could not open logfile \"%s\": %s\n",
     VAR_32, FUNC_23(VAR_11));
   goto done;
  }
 }

 if (!VAR_12)
 {

  for (VAR_26 = 0; VAR_26 < VAR_23; VAR_26++)
  {
   if ((VAR_20[VAR_26].con = FUNC_12()) == ((void*)0))
    goto done;
  }
 }


 FUNC_2(VAR_19->conn_time);
 FUNC_4(VAR_19->conn_time, VAR_19->start_time);


 for (VAR_26 = 0; VAR_26 < VAR_23; VAR_26++)
 {
  VAR_20[VAR_26].state = VAR_1;
 }


 while (VAR_24 > 0)
 {
  int VAR_34;
  int64 VAR_35;
  int64 VAR_36 = 0;





  FUNC_10(VAR_25);
  VAR_34 = 0;
  VAR_35 = VAR_8;
  for (VAR_26 = 0; VAR_26 < VAR_23; VAR_26++)
  {
   CState *VAR_37 = &VAR_20[VAR_26];

   if (VAR_37->state == VAR_3 || VAR_37->state == VAR_4)
   {

    int64 VAR_38;


    if (VAR_36 == 0)
    {
     instr_time VAR_39;

     FUNC_2(VAR_39);
     VAR_36 = FUNC_1(VAR_39);
    }


    VAR_38 = (VAR_37->state == VAR_3 ?
        VAR_37->sleep_until : VAR_37->txn_scheduled) - VAR_36;
    if (VAR_35 > VAR_38)
     VAR_35 = VAR_38;
   }
   else if (VAR_37->state == VAR_5)
   {




    int VAR_40 = FUNC_6(VAR_37->con);

    if (VAR_40 < 0)
    {
     FUNC_16(VAR_16, "invalid socket: %s",
       FUNC_5(VAR_37->con));
     goto done;
    }

    FUNC_7(VAR_25, VAR_40, VAR_34++);
   }
   else if (VAR_37->state != VAR_0 &&
      VAR_37->state != VAR_2)
   {




    VAR_35 = 0;
    break;
   }
  }


  if (VAR_15 && VAR_35 > 0 && VAR_19->tid == 0)
  {

   if (VAR_36 == 0)
   {
    instr_time VAR_41;

    FUNC_2(VAR_41);
    VAR_36 = FUNC_1(VAR_41);
   }

   if (VAR_36 >= VAR_29)
    VAR_35 = 0;
   else if ((VAR_29 - VAR_36) < VAR_35)
    VAR_35 = VAR_29 - VAR_36;
  }





  if (VAR_35 > 0)
  {
   int VAR_42 = 0;

   if (VAR_35 != VAR_8)
   {
    if (VAR_34 > 0)
    {
     VAR_42 = FUNC_25(VAR_25, VAR_35);
    }
    else
    {
     FUNC_19(VAR_35);
    }
   }
   else
   {
    VAR_42 = FUNC_25(VAR_25, 0);
   }

   if (VAR_42 < 0)
   {
    if (VAR_11 == VAR_6)
    {

     continue;
    }

    FUNC_16(VAR_16, "%s() failed: %s\n", VAR_9, FUNC_23(VAR_11));
    goto done;
   }
  }
  else
  {



   FUNC_10(VAR_25);
  }


  VAR_34 = 0;
  for (VAR_26 = 0; VAR_26 < VAR_23; VAR_26++)
  {
   CState *VAR_43 = &VAR_20[VAR_26];

   if (VAR_43->state == VAR_5)
   {

    int VAR_44 = FUNC_6(VAR_43->con);

    if (VAR_44 < 0)
    {
     FUNC_16(VAR_16, "invalid socket: %s",
       FUNC_5(VAR_43->con));
     goto done;
    }

    if (!FUNC_22(VAR_25, VAR_44, VAR_34++))
     continue;
   }
   else if (VAR_43->state == VAR_2 ||
      VAR_43->state == VAR_0)
   {

    continue;
   }

   FUNC_8(VAR_19, VAR_43, &VAR_31);





   if (VAR_43->state == VAR_2 || VAR_43->state == VAR_0)
    VAR_24--;
  }


  if (VAR_15 && VAR_19->tid == 0)
  {
   instr_time VAR_45;
   int64 VAR_46;

   FUNC_2(VAR_45);
   VAR_46 = FUNC_1(VAR_45);
   if (VAR_46 >= VAR_29)
   {






    FUNC_20(VAR_19, VAR_27, VAR_46,
         &VAR_30, &VAR_28);





    do
    {
     VAR_29 += (int64) VAR_15 * 1000000;
    } while (VAR_46 >= VAR_29);
   }
  }
 }

done:
 FUNC_2(VAR_21);
 FUNC_11(VAR_20, VAR_23);
 FUNC_2(VAR_22);
 FUNC_0(VAR_19->conn_time, VAR_22, VAR_21);
 if (VAR_19->logfile)
 {
  if (VAR_10 > 0)
  {

   FUNC_13(VAR_19, VAR_20, &VAR_31, 0, 0, 0);
  }
  FUNC_14(VAR_19->logfile);
  VAR_19->logfile = ((void*)0);
 }
 FUNC_17(VAR_25);
 return ((void*)0);
}
