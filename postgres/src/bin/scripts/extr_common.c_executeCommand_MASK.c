
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*,char const*) ;

void
FUNC_9(PGconn *VAR_1, const char *VAR_2, bool VAR_3)
{
 PGresult *VAR_4;

 if (VAR_3)
  FUNC_8("%s\n", VAR_2);

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_4 ||
  FUNC_4(VAR_4) != VAR_0)
 {
  FUNC_6("query failed: %s", FUNC_1(VAR_1));
  FUNC_7("query was: %s", VAR_2);
  FUNC_3(VAR_1);
  FUNC_5(1);
 }

 FUNC_0(VAR_4);
}
