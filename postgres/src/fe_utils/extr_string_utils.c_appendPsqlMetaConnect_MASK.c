
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char const* data; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef TYPE_1__* PQExpBuffer ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (int ,char*,char const*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_8 (TYPE_1__*) ;

void
FUNC_9(PQExpBuffer VAR_2, const char *VAR_3)
{
 const char *VAR_4;
 bool VAR_5;






 VAR_5 = 0;

 for (VAR_4 = VAR_3; *VAR_4; VAR_4++)
 {
  if (*VAR_4 == '\n' || *VAR_4 == '\r')
  {
   FUNC_6(VAR_1,
     FUNC_0("database name contains a newline or carriage return: \"%s\"\n"),
     VAR_3);
   FUNC_4(VAR_0);
  }

  if (!((*VAR_4 >= 'a' && *VAR_4 <= 'z') || (*VAR_4 >= 'A' && *VAR_4 <= 'Z') ||
     (*VAR_4 >= '0' && *VAR_4 <= '9') || *VAR_4 == '_' || *VAR_4 == '.'))
  {
   VAR_5 = 1;
  }
 }

 FUNC_3(VAR_2, "\\connect ");
 if (VAR_5)
 {
  PQExpBufferData VAR_6;

  FUNC_7(&VAR_6);
  FUNC_3(&VAR_6, "dbname=");
  FUNC_1(&VAR_6, VAR_3);

  FUNC_3(VAR_2, "-reuse-previous=on ");







  FUNC_3(VAR_2, FUNC_5(VAR_6.data));

  FUNC_8(&VAR_6);
 }
 else
  FUNC_3(VAR_2, FUNC_5(VAR_3));
 FUNC_2(VAR_2, '\n');
}
