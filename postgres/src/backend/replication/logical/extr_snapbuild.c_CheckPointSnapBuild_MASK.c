
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;
struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;
typedef int path ;
typedef scalar_t__ XLogRecPtr ;
typedef int DIR ;


 int * FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dirent* FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*,struct stat*) ;
 int FUNC_11 (char*,int,char*,char*) ;
 int FUNC_12 (char*,char*,int*,int*) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char*) ;

void
FUNC_15(void)
{
 XLogRecPtr VAR_4;
 XLogRecPtr VAR_5;
 DIR *VAR_6;
 struct dirent *VAR_7;
 char VAR_8[VAR_3 + 21];






 VAR_5 = FUNC_2();


 VAR_4 = FUNC_4();


 if (VAR_5 < VAR_4)
  VAR_4 = VAR_5;

 VAR_6 = FUNC_0("pg_logical/snapshots");
 while ((VAR_7 = FUNC_3(VAR_6, "pg_logical/snapshots")) != ((void*)0))
 {
  uint32 VAR_9;
  uint32 VAR_10;
  XLogRecPtr VAR_11;
  struct stat VAR_12;

  if (FUNC_13(VAR_7->d_name, ".") == 0 ||
   FUNC_13(VAR_7->d_name, "..") == 0)
   continue;

  FUNC_11(VAR_8, sizeof(VAR_8), "pg_logical/snapshots/%s", VAR_7->d_name);

  if (FUNC_10(VAR_8, &VAR_12) == 0 && !FUNC_5(VAR_12.st_mode))
  {
   FUNC_6(VAR_0, "only regular files expected: %s", VAR_8);
   continue;
  }
  if (FUNC_12(VAR_7->d_name, "%X-%X.snap", &VAR_9, &VAR_10) != 2)
  {
   FUNC_7(VAR_2,
     (FUNC_9("could not parse file name \"%s\"", VAR_8)));
   continue;
  }

  VAR_11 = ((uint64) VAR_9) << 32 | VAR_10;


  if (VAR_11 < VAR_4 || VAR_4 == VAR_1)
  {
   FUNC_6(VAR_0, "removing snapbuild snapshot %s", VAR_8);






   if (FUNC_14(VAR_8) < 0)
   {
    FUNC_7(VAR_2,
      (FUNC_8(),
       FUNC_9("could not remove file \"%s\": %m",
        VAR_8)));
    continue;
   }
  }
 }
 FUNC_1(VAR_6);
}
