
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef enum trivalue { ____Placeholder_trivalue } trivalue ;
struct TYPE_7__ {int data; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef int PGresult ;
typedef int PGconn ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (int ,int,int *,char const*,char const*,char const*,int,char const*,int) ;
 int * FUNC_8 (char const*,char const*,char const*,char const*,int,char const*,int) ;
 int * FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*,char const*,char*) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_15(bool VAR_1, const char *VAR_2,
       const char *VAR_3, const char *VAR_4,
       const char *VAR_5, enum trivalue VAR_6,
       const char *VAR_7, bool VAR_8, bool VAR_9)
{
 PGconn *VAR_10;
 PGresult *VAR_11;
 PQExpBufferData VAR_12;
 int VAR_13;

 VAR_10 = FUNC_8(VAR_2, VAR_3, VAR_4, VAR_5,
           VAR_6, VAR_7, VAR_8);
 VAR_11 = FUNC_9(VAR_10, "SELECT datname FROM pg_database WHERE datallowconn ORDER BY 1;", VAR_8);
 FUNC_1(VAR_10);

 FUNC_11(&VAR_12);
 for (VAR_13 = 0; VAR_13 < FUNC_3(VAR_11); VAR_13++)
 {
  char *VAR_14 = FUNC_2(VAR_11, VAR_13, 0);

  if (!VAR_9)
  {
   FUNC_12(FUNC_4("%s: clustering database \"%s\"\n"), VAR_7, VAR_14);
   FUNC_10(VAR_0);
  }

  FUNC_13(&VAR_12);
  FUNC_6(&VAR_12, "dbname=");
  FUNC_5(&VAR_12, VAR_14);

  FUNC_7(VAR_12.data, VAR_1, ((void*)0),
        VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7, VAR_8);
 }
 FUNC_14(&VAR_12);

 FUNC_0(VAR_11);
}
