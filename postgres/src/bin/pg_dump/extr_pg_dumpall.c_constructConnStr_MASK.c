
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;


 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (TYPE_1__*,char*,char const*) ;
 int FUNC_2 (TYPE_1__*,char) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static char *
FUNC_7(const char **VAR_0, const char **VAR_1)
{
 PQExpBuffer VAR_2 = FUNC_3();
 char *VAR_3;
 int VAR_4;
 bool VAR_5 = 1;


 for (VAR_4 = 0; VAR_0[VAR_4] != ((void*)0); VAR_4++)
 {
  if (FUNC_6(VAR_0[VAR_4], "dbname") == 0 ||
   FUNC_6(VAR_0[VAR_4], "password") == 0 ||
   FUNC_6(VAR_0[VAR_4], "fallback_application_name") == 0)
   continue;

  if (!VAR_5)
   FUNC_2(VAR_2, ' ');
  VAR_5 = 0;
  FUNC_1(VAR_2, "%s=", VAR_0[VAR_4]);
  FUNC_0(VAR_2, VAR_1[VAR_4]);
 }

 VAR_3 = FUNC_5(VAR_2->data);
 FUNC_4(VAR_2);
 return VAR_3;
}
