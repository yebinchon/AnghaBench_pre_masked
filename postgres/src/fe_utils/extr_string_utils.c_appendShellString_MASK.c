
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQExpBuffer ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char const*) ;
 int VAR_1 ;

void
FUNC_4(PQExpBuffer VAR_2, const char *VAR_3)
{
 if (!FUNC_1(VAR_2, VAR_3))
 {
  FUNC_3(VAR_1,
    FUNC_0("shell command argument contains a newline or carriage return: \"%s\"\n"),
    VAR_3);
  FUNC_2(VAR_0);
 }
}
