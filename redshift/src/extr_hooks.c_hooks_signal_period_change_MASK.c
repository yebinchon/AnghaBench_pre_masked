
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef scalar_t__ pid_t ;
typedef size_t period_t ;
typedef int hook_path ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,char*,char*,int ,int ,int *) ;
 scalar_t__ FUNC_3 () ;
 int * FUNC_4 (char*) ;
 int * VAR_5 ;
 int FUNC_5 (char*) ;
 struct dirent* FUNC_6 (int *) ;
 int FUNC_7 (char*,int,char*,char*,char*) ;

void
FUNC_8(period_t VAR_6, period_t VAR_7)
{
 char VAR_8[VAR_2];
 DIR *VAR_9 = FUNC_4(VAR_8);
 if (VAR_9 == ((void*)0)) return;

 struct dirent* VAR_10;
 while ((VAR_10 = FUNC_6(VAR_9)) != ((void*)0)) {

  if (VAR_10->d_name[0] == '\0' || VAR_10->d_name[0] == '.') continue;

  char *VAR_11 = VAR_10->d_name;
  char VAR_12[VAR_2];
  FUNC_7(VAR_12, sizeof(VAR_12), "%s/%s",
    VAR_8, VAR_11);





  pid_t VAR_13 = FUNC_3();
  if (VAR_13 == (pid_t)-1) {
   FUNC_5("fork");
   continue;
  } else if (VAR_13 == 0) {
   FUNC_1(VAR_3);

   int VAR_14 = FUNC_2(VAR_12, VAR_11,
          "period-changed",
          VAR_5[VAR_6],
          VAR_5[VAR_7], ((void*)0));
   if (VAR_14 < 0 && VAR_4 != VAR_0) FUNC_5("execl");


   FUNC_0(VAR_1);
  }

 }
}
