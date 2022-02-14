
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQExpBuffer ;
typedef int PGresult ;
typedef int PGconn ;


 char* FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (char const*) ;

void
FUNC_6(PGconn *VAR_0, PGresult *VAR_1, PQExpBuffer VAR_2,
    const char *VAR_3, const char *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_1); VAR_5++)
 {
  char *VAR_6 = FUNC_0(VAR_1, VAR_5, 0);
  char *VAR_7 = FUNC_0(VAR_1, VAR_5, 1);


  FUNC_2(VAR_2,
        "SECURITY LABEL FOR %s ON %s",
        FUNC_5(VAR_6), VAR_3);
  FUNC_2(VAR_2,
        " %s IS ",
        FUNC_5(VAR_4));
  FUNC_4(VAR_2, VAR_7, VAR_0);
  FUNC_3(VAR_2, ";\n");
 }
}
