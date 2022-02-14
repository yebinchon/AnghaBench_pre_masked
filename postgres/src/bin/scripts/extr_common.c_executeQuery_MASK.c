
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*) ;

PGresult *
FUNC_8(PGconn *VAR_1, const char *VAR_2, bool VAR_3)
{
 PGresult *VAR_4;

 if (VAR_3)
  FUNC_7("%s\n", VAR_2);

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_4 ||
  FUNC_3(VAR_4) != VAR_0)
 {
  FUNC_5("query failed: %s", FUNC_0(VAR_1));
  FUNC_6("query was: %s", VAR_2);
  FUNC_2(VAR_1);
  FUNC_4(1);
 }

 return VAR_4;
}
