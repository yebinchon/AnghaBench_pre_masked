
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int pidstring ;
typedef int int64 ;
typedef int fd_set ;
typedef int buf ;
struct TYPE_10__ {int nsessions; TYPE_1__** sessions; } ;
typedef TYPE_2__ TestSpec ;
struct TYPE_12__ {scalar_t__ be_pid; char* relname; char* extra; } ;
struct TYPE_11__ {int session; char* name; char* sql; char* errormsg; } ;
struct TYPE_9__ {char* name; } ;
typedef TYPE_3__ Step ;
typedef int PGresult ;
typedef TYPE_4__ PGnotify ;
typedef int PGconn ;
typedef int PGcancel ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;



 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ,int,int *,int *,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 char* FUNC_11 (int *,int ,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 TYPE_4__* FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 char* FUNC_15 (int) ;
 char* FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__* VAR_8 ;
 int ** VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_20 (int) ;
 int FUNC_21 (int ,char*,char*) ;
 int FUNC_22 (struct timeval*,int *) ;
 char* FUNC_23 (int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (char*,...) ;
 char* FUNC_26 (char*,char const*,char const*) ;
 int FUNC_27 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_28 (char*,int,char*,scalar_t__) ;
 int VAR_11 ;
 char* FUNC_29 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_30(TestSpec *VAR_12, Step *VAR_13, int VAR_14)
{
 PGconn *VAR_15 = VAR_9[1 + VAR_13->session];
 fd_set VAR_16;
 struct timeval VAR_17;
 struct timeval VAR_18;
 int VAR_19 = FUNC_19(VAR_15);
 int VAR_20;
 PGresult *VAR_21;
 PGnotify *VAR_22;
 bool VAR_23 = 0;

 if (VAR_19 < 0)
 {
  FUNC_21(VAR_11, "invalid socket: %s", FUNC_5(VAR_15));
  FUNC_20(1);
 }

 FUNC_22(&VAR_17, ((void*)0));
 FUNC_1(&VAR_16);

 while (FUNC_12(VAR_15))
 {
  FUNC_0(VAR_19, &VAR_16);
  VAR_18.tv_sec = 0;
  VAR_18.tv_usec = 10000;

  VAR_20 = FUNC_27(VAR_19 + 1, &VAR_16, ((void*)0), ((void*)0), &VAR_18);
  if (VAR_20 < 0)
  {
   if (VAR_10 == VAR_0)
    continue;
   FUNC_21(VAR_11, "select failed: %s\n", FUNC_29(VAR_10));
   FUNC_20(1);
  }
  else if (VAR_20 == 0)
  {
   struct timeval VAR_24;
   int64 VAR_25;


   if (VAR_14 & VAR_4)
   {
    bool VAR_26;

    VAR_21 = FUNC_6(VAR_9[0], VAR_3, 1,
          &VAR_7[VAR_13->session + 1],
          ((void*)0), ((void*)0), 0);
    if (FUNC_18(VAR_21) != 128 ||
     FUNC_14(VAR_21) != 1)
    {
     FUNC_21(VAR_11, "lock wait query failed: %s",
       FUNC_5(VAR_9[0]));
     FUNC_20(1);
    }
    VAR_26 = ((FUNC_11(VAR_21, 0, 0))[0] == 't');
    FUNC_3(VAR_21);

    if (VAR_26)
    {
     if (!FUNC_4(VAR_15))
     {
      FUNC_21(VAR_11, "PQconsumeInput failed: %s\n",
        FUNC_5(VAR_15));
      FUNC_20(1);
     }
     if (!FUNC_12(VAR_15))
      break;





     if (!(VAR_14 & VAR_5))
      FUNC_25("step %s: %s <waiting ...>\n",
          VAR_13->name, VAR_13->sql);
     return 1;
    }

   }


   FUNC_22(&VAR_24, ((void*)0));
   VAR_25 = (int64) VAR_24.tv_sec - (int64) VAR_17.tv_sec;
   VAR_25 *= VAR_6;
   VAR_25 += (int64) VAR_24.tv_usec - (int64) VAR_17.tv_usec;
   if (VAR_25 > 180 * VAR_6 && !VAR_23)
   {
    PGcancel *VAR_27 = FUNC_9(VAR_15);

    if (VAR_27 != ((void*)0))
    {
     char VAR_28[256];

     if (FUNC_2(VAR_27, VAR_28, sizeof(VAR_28)))
      VAR_23 = 1;
     else
      FUNC_21(VAR_11, "PQcancel failed: %s\n", VAR_28);
     FUNC_7(VAR_27);
    }
   }
   if (VAR_25 > 200 * VAR_6)
   {
    FUNC_21(VAR_11, "step %s timed out after 200 seconds\n",
      VAR_13->name);
    FUNC_20(1);
   }
  }
  else if (!FUNC_4(VAR_15))
  {
   FUNC_21(VAR_11, "PQconsumeInput failed: %s\n",
     FUNC_5(VAR_15));
   FUNC_20(1);
  }
 }

 if (VAR_14 & VAR_5)
  FUNC_25("step %s: <... completed>\n", VAR_13->name);
 else
  FUNC_25("step %s: %s\n", VAR_13->name, VAR_13->sql);

 while ((VAR_21 = FUNC_10(VAR_15)))
 {
  switch (FUNC_18(VAR_21))
  {
   case 130:
    break;
   case 128:
    FUNC_24(VAR_21);
    break;
   case 129:
    if (VAR_13->errormsg != ((void*)0))
    {
     FUNC_25("WARNING: this step had a leftover error message\n");
     FUNC_25("%s\n", VAR_13->errormsg);
    }






    {
     const char *VAR_29 = FUNC_16(VAR_21,
               VAR_2);
     const char *VAR_30 = FUNC_16(VAR_21,
               VAR_1);

     if (VAR_29 && VAR_30)
      VAR_13->errormsg = FUNC_26("%s:  %s", VAR_29, VAR_30);
     else
      VAR_13->errormsg = FUNC_23(FUNC_17(VAR_21));
    }
    break;
   default:
    FUNC_25("unexpected result status: %s\n",
        FUNC_15(FUNC_18(VAR_21)));
  }
  FUNC_3(VAR_21);
 }


 FUNC_4(VAR_15);
 while ((VAR_22 = FUNC_13(VAR_15)) != ((void*)0))
 {

  const char *VAR_31 = ((void*)0);
  char VAR_32[32];

  for (int VAR_33 = 0; VAR_33 < VAR_12->nsessions; VAR_33++)
  {
   if (VAR_22->be_pid == VAR_8[VAR_33 + 1])
   {
    VAR_31 = VAR_12->sessions[VAR_33]->name;
    break;
   }
  }
  if (VAR_31 == ((void*)0))
  {

   FUNC_28(VAR_32, sizeof(VAR_32), "PID %d", VAR_22->be_pid);
   VAR_31 = VAR_32;
  }
  FUNC_25("%s: NOTIFY \"%s\" with payload \"%s\" from %s\n",
      VAR_12->sessions[VAR_13->session]->name,
      VAR_22->relname, VAR_22->extra, VAR_31);
  FUNC_8(VAR_22);
  FUNC_4(VAR_15);
 }

 return 0;
}
