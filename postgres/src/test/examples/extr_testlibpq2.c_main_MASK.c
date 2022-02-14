
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fd_set ;
struct TYPE_4__ {char* relname; int be_pid; } ;
typedef int PGresult ;
typedef TYPE_1__ PGnotify ;
typedef int PGconn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int * FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int VAR_3 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,char*,...) ;
 scalar_t__ FUNC_15 (int,int *,int *,int *,int *) ;
 int VAR_4 ;
 char* FUNC_16 (int ) ;

int
FUNC_17(int VAR_5, char **VAR_6)
{
 const char *VAR_7;
 PGconn *VAR_8;
 PGresult *VAR_9;
 PGnotify *VAR_10;
 int VAR_11;






 if (VAR_5 > 1)
  VAR_7 = VAR_6[1];
 else
  VAR_7 = "dbname = postgres";


 VAR_8 = FUNC_3(VAR_7);


 if (FUNC_12(VAR_8) != VAR_0)
 {
  FUNC_14(VAR_4, "Connection to database failed: %s",
    FUNC_5(VAR_8));
  FUNC_13(VAR_8);
 }


 VAR_9 = FUNC_6(VAR_8,
     "SELECT pg_catalog.set_config('search_path', '', false)");
 if (FUNC_10(VAR_9) != VAR_2)
 {
  FUNC_14(VAR_4, "SET failed: %s", FUNC_5(VAR_8));
  FUNC_2(VAR_9);
  FUNC_13(VAR_8);
 }





 FUNC_2(VAR_9);




 VAR_9 = FUNC_6(VAR_8, "LISTEN TBL2");
 if (FUNC_10(VAR_9) != VAR_1)
 {
  FUNC_14(VAR_4, "LISTEN command failed: %s", FUNC_5(VAR_8));
  FUNC_2(VAR_9);
  FUNC_13(VAR_8);
 }
 FUNC_2(VAR_9);


 VAR_11 = 0;
 while (VAR_11 < 4)
 {





  int VAR_12;
  fd_set VAR_13;

  VAR_12 = FUNC_11(VAR_8);

  if (VAR_12 < 0)
   break;

  FUNC_1(&VAR_13);
  FUNC_0(VAR_12, &VAR_13);

  if (FUNC_15(VAR_12 + 1, &VAR_13, ((void*)0), ((void*)0), ((void*)0)) < 0)
  {
   FUNC_14(VAR_4, "select() failed: %s\n", FUNC_16(VAR_3));
   FUNC_13(VAR_8);
  }


  FUNC_4(VAR_8);
  while ((VAR_10 = FUNC_9(VAR_8)) != ((void*)0))
  {
   FUNC_14(VAR_4,
     "ASYNC NOTIFY of '%s' received from backend PID %d\n",
     VAR_10->relname, VAR_10->be_pid);
   FUNC_8(VAR_10);
   VAR_11++;
   FUNC_4(VAR_8);
  }
 }

 FUNC_14(VAR_4, "Done.\n");


 FUNC_7(VAR_8);

 return 0;
}
