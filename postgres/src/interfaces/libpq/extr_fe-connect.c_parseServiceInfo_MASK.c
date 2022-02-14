
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int serviceFile ;
typedef int homedir ;
typedef int PQconninfoOption ;
typedef int PQExpBuffer ;


 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (int *,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int *,int ,int*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int ,char const*) ;
 int FUNC_6 (char*,int,char*,char*,...) ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_9(PQconninfoOption *VAR_2, PQExpBuffer VAR_3)
{
 const char *VAR_4 = FUNC_0(VAR_2, "service");
 char VAR_5[VAR_0];
 char *VAR_6;
 bool VAR_7 = 0;
 int VAR_8;
 struct stat VAR_9;






 if (VAR_4 == ((void*)0))
  VAR_4 = FUNC_1("PGSERVICE");


 if (VAR_4 == ((void*)0))
  return 0;





 if ((VAR_6 = FUNC_1("PGSERVICEFILE")) != ((void*)0))
  FUNC_8(VAR_5, VAR_6, sizeof(VAR_5));
 else
 {
  char VAR_10[VAR_0];

  if (!FUNC_4(VAR_10, sizeof(VAR_10)))
   goto next_file;
  FUNC_6(VAR_5, VAR_0, "%s/%s", VAR_10, ".pg_service.conf");
  if (FUNC_7(VAR_5, &VAR_9) != 0)
   goto next_file;
 }

 VAR_8 = FUNC_3(VAR_5, VAR_4, VAR_2, VAR_3, &VAR_7);
 if (VAR_7 || VAR_8 != 0)
  return VAR_8;

next_file:





 FUNC_6(VAR_5, VAR_0, "%s/pg_service.conf",
    FUNC_1("PGSYSCONFDIR") ? FUNC_1("PGSYSCONFDIR") : VAR_1);
 if (FUNC_7(VAR_5, &VAR_9) != 0)
  goto last_file;

 VAR_8 = FUNC_3(VAR_5, VAR_4, VAR_2, VAR_3, &VAR_7);
 if (VAR_8 != 0)
  return VAR_8;

last_file:
 if (!VAR_7)
 {
  FUNC_5(VAR_3,
        FUNC_2("definition of service \"%s\" not found\n"), VAR_4);
  return 3;
 }

 return 0;
}
