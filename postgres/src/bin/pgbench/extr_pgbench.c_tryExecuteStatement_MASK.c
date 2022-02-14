
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(PGconn *VAR_2, const char *VAR_3)
{
 PGresult *VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (FUNC_3(VAR_4) != VAR_0)
 {
  FUNC_4(VAR_1, "%s", FUNC_1(VAR_2));
  FUNC_4(VAR_1, "(ignoring this error and continuing anyway)\n");
 }
 FUNC_0(VAR_4);
}
