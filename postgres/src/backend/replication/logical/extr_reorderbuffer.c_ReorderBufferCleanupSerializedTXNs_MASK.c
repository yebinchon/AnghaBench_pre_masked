
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
 int VAR_2 ;
 struct dirent* FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*,char const*) ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;
 int FUNC_8 (char*,int,char*,char const*,char*) ;
 int FUNC_9 (char*,char*,char const*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 scalar_t__ FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(const char *VAR_3)
{
 DIR *VAR_4;
 struct dirent *VAR_5;
 struct stat VAR_6;
 char VAR_7[VAR_2 * 2 + 12];

 FUNC_9(VAR_7, "pg_replslot/%s", VAR_3);


 if (FUNC_7(VAR_7, &VAR_6) == 0 && !FUNC_3(VAR_6.st_mode))
  return;

 VAR_4 = FUNC_0(VAR_7);
 while ((VAR_5 = FUNC_2(VAR_4, VAR_7, VAR_1)) != ((void*)0))
 {

  if (FUNC_10(VAR_5->d_name, "xid", 3) == 0)
  {
   FUNC_8(VAR_7, sizeof(VAR_7),
      "pg_replslot/%s/%s", VAR_3,
      VAR_5->d_name);

   if (FUNC_11(VAR_7) != 0)
    FUNC_4(VAR_0,
      (FUNC_5(),
       FUNC_6("could not remove file \"%s\" during removal of pg_replslot/%s/xid*: %m",
        VAR_7, VAR_3)));
  }
 }
 FUNC_1(VAR_4);
}
