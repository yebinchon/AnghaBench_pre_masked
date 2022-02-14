
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;
typedef int path ;
typedef int DIR ;


 int * FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 struct dirent* FUNC_2 (int *,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,int) ;
 scalar_t__ FUNC_11 (char*,struct stat*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*,int,char*,char*) ;
 scalar_t__ FUNC_15 (char*,char*) ;

void
FUNC_16(void)
{
 DIR *VAR_4;
 struct dirent *VAR_5;

 FUNC_7(VAR_0, "starting up replication slots");


 VAR_4 = FUNC_0("pg_replslot");
 while ((VAR_5 = FUNC_2(VAR_4, "pg_replslot")) != ((void*)0))
 {
  struct stat VAR_6;
  char VAR_7[VAR_1 + 12];

  if (FUNC_15(VAR_5->d_name, ".") == 0 ||
   FUNC_15(VAR_5->d_name, "..") == 0)
   continue;

  FUNC_14(VAR_7, sizeof(VAR_7), "pg_replslot/%s", VAR_5->d_name);


  if (FUNC_11(VAR_7, &VAR_6) == 0 && !FUNC_6(VAR_6.st_mode))
   continue;


  if (FUNC_12(VAR_5->d_name, ".tmp"))
  {
   if (!FUNC_13(VAR_7, 1))
   {
    FUNC_8(VAR_2,
      (FUNC_9("could not remove directory \"%s\"",
        VAR_7)));
    continue;
   }
   FUNC_10("pg_replslot", 1);
   continue;
  }


  FUNC_5(VAR_5->d_name);
 }
 FUNC_1(VAR_4);


 if (VAR_3 <= 0)
  return;


 FUNC_4(0);
 FUNC_3();
}
