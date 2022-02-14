
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (char*,int,char*,char const*,...) ;
 int FUNC_5 (char const*,int ,int) ;

void
FUNC_6(const char *VAR_4,
    int VAR_5)
{
 bool VAR_6;
 char VAR_7[VAR_0];
 char VAR_8[VAR_0];


 FUNC_4(VAR_7, VAR_0, "%s/%s", VAR_4,
    VAR_5 < VAR_1 ? "pg_xlog" : "pg_wal");
 FUNC_4(VAR_8, VAR_0, "%s/pg_tblspc", VAR_4);





 VAR_6 = 0;


 {
  struct stat VAR_9;

  if (FUNC_1(VAR_7, &VAR_9) < 0)
   FUNC_2("could not stat file \"%s\": %m", VAR_7);
  else if (FUNC_0(VAR_9.st_mode))
   VAR_6 = 1;
 }
 FUNC_5(VAR_4, VAR_2, 0);
 if (VAR_6)
  FUNC_5(VAR_7, VAR_2, 0);
 FUNC_5(VAR_8, VAR_2, 1);
}
