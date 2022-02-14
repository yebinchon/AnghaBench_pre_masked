
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 scalar_t__ FUNC_5 (char*) ;
 int VAR_4 ;
 int FUNC_6 (char*,int ,int,int ) ;

void
FUNC_7(void)
{
 bool VAR_5;


 if (!VAR_3)
  return;





 VAR_5 = 0;


 {
  struct stat VAR_6;

  if (FUNC_4("pg_wal", &VAR_6) < 0)
   FUNC_1(VAR_1,
     (FUNC_2(),
      FUNC_3("could not stat file \"%s\": %m",
       "pg_wal")));
  else if (FUNC_0(VAR_6.st_mode))
   VAR_5 = 1;
 }
 FUNC_6(".", VAR_2, 0, VAR_1);
 if (VAR_5)
  FUNC_6("pg_wal", VAR_2, 0, VAR_1);
 FUNC_6("pg_tblspc", VAR_2, 1, VAR_1);
}
