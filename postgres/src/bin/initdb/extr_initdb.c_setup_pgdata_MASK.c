
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 char* FUNC_4 (char*) ;
 char* VAR_0 ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (char*) ;
 void* VAR_1 ;
 char* FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (char*) ;

void
FUNC_10(void)
{
 char *VAR_3,
      *VAR_4;

 if (!VAR_0)
 {
  VAR_3 = FUNC_4("PGDATA");
  if (VAR_3 && FUNC_9(VAR_3))
  {

   VAR_0 = FUNC_6(VAR_3);
  }
  else
  {
   FUNC_5("no data directory specified");
   FUNC_3(VAR_2,
     "%s", FUNC_0("You must identify the directory where the data for this database system\n"
       "will reside.  Do this with either the invocation option -D or the\n"
       "environment variable PGDATA.\n"));
   FUNC_2(1);
  }
 }

 VAR_1 = FUNC_6(VAR_0);
 FUNC_1(VAR_0);







 VAR_4 = FUNC_7("PGDATA=%s", VAR_0);
 FUNC_8(VAR_4);
}
