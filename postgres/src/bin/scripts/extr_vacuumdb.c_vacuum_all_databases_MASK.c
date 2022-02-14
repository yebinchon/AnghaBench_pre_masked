
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int vacuumingOptions ;
typedef enum trivalue { ____Placeholder_trivalue } trivalue ;
struct TYPE_7__ {int data; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef int PGresult ;
typedef int PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int * FUNC_6 (char const*,char const*,char const*,char const*,int,char const*,int) ;
 int * FUNC_7 (int *,char*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ,int *,int,int *,char const*,char const*,char const*,int,int,char const*,int,int) ;

__attribute__((used)) static void
FUNC_12(vacuumingOptions *VAR_2,
      bool VAR_3,
      const char *VAR_4, const char *VAR_5,
      const char *VAR_6, const char *VAR_7,
      enum trivalue VAR_8,
      int VAR_9,
      const char *VAR_10, bool VAR_11, bool VAR_12)
{
 PGconn *VAR_13;
 PGresult *VAR_14;
 PQExpBufferData VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_13 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7,
           VAR_8, VAR_10, VAR_11);
 VAR_14 = FUNC_7(VAR_13,
        "SELECT datname FROM pg_database WHERE datallowconn ORDER BY 1;",
        VAR_11);
 FUNC_1(VAR_13);

 FUNC_8(&VAR_15);
 if (VAR_3)
 {
  for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++)
  {
   for (VAR_17 = 0; VAR_17 < FUNC_3(VAR_14); VAR_17++)
   {
    FUNC_9(&VAR_15);
    FUNC_5(&VAR_15, "dbname=");
    FUNC_4(&VAR_15, FUNC_2(VAR_14, VAR_17, 0));

    FUNC_11(VAR_15.data, VAR_2,
         VAR_16,
         ((void*)0),
         VAR_5, VAR_6, VAR_7, VAR_8,
         VAR_9,
         VAR_10, VAR_11, VAR_12);
   }
  }
 }
 else
 {
  for (VAR_17 = 0; VAR_17 < FUNC_3(VAR_14); VAR_17++)
  {
   FUNC_9(&VAR_15);
   FUNC_5(&VAR_15, "dbname=");
   FUNC_4(&VAR_15, FUNC_2(VAR_14, VAR_17, 0));

   FUNC_11(VAR_15.data, VAR_2,
        VAR_0,
        ((void*)0),
        VAR_5, VAR_6, VAR_7, VAR_8,
        VAR_9,
        VAR_10, VAR_11, VAR_12);
  }
 }
 FUNC_10(&VAR_15);

 FUNC_0(VAR_14);
}
