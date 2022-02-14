
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
 int VAR_0 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int * FUNC_7 (char const*,char const*,char const*,char const*,int,char const*,int) ;
 int * FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (char*,char const*,char*) ;
 int FUNC_12 (int ,int ,int *,char const*,char const*,char const*,int,char const*,int,int,int,int) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_15(const char *VAR_2,
       const char *VAR_3, const char *VAR_4,
       const char *VAR_5, enum trivalue VAR_6,
       const char *VAR_7, bool VAR_8, bool VAR_9, bool VAR_10,
       bool VAR_11, int VAR_12)
{
 PGconn *VAR_13;
 PGresult *VAR_14;
 PQExpBufferData VAR_15;
 int VAR_16;

 VAR_13 = FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5,
           VAR_6, VAR_7, VAR_8);
 VAR_14 = FUNC_8(VAR_13, "SELECT datname FROM pg_database WHERE datallowconn ORDER BY 1;", VAR_8);
 FUNC_1(VAR_13);

 FUNC_10(&VAR_15);
 for (VAR_16 = 0; VAR_16 < FUNC_3(VAR_14); VAR_16++)
 {
  char *VAR_17 = FUNC_2(VAR_14, VAR_16, 0);

  if (!VAR_9)
  {
   FUNC_11(FUNC_4("%s: reindexing database \"%s\"\n"), VAR_7, VAR_17);
   FUNC_9(VAR_1);
  }

  FUNC_13(&VAR_15);
  FUNC_6(&VAR_15, "dbname=");
  FUNC_5(&VAR_15, VAR_17);

  FUNC_12(VAR_15.data, VAR_0, ((void*)0), VAR_3,
        VAR_4, VAR_5, VAR_6,
        VAR_7, VAR_8, VAR_10, VAR_11,
        VAR_12);
 }
 FUNC_14(&VAR_15);

 FUNC_0(VAR_14);
}
