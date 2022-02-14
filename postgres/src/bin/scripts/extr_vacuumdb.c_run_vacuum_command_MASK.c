
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGconn ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (char*,char const*,int ,...) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static void
FUNC_5(PGconn *VAR_0, const char *VAR_1, bool VAR_2,
       const char *VAR_3)
{
 bool VAR_4;

 if (VAR_2)
  FUNC_4("%s\n", VAR_1);

 VAR_4 = FUNC_2(VAR_0, VAR_1) == 1;

 if (!VAR_4)
 {
  if (VAR_3)
   FUNC_3("vacuuming of table \"%s\" in database \"%s\" failed: %s",
       VAR_3, FUNC_0(VAR_0), FUNC_1(VAR_0));
  else
   FUNC_3("vacuuming of database \"%s\" failed: %s",
       FUNC_0(VAR_0), FUNC_1(VAR_0));
 }
}
