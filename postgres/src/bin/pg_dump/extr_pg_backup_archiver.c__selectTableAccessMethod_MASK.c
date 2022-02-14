
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char* currTableAm; int connection; } ;
struct TYPE_10__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_2__ ArchiveHandle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*,int ) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*,char const*) ;
 int FUNC_12 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static void
FUNC_13(ArchiveHandle *VAR_1, const char *VAR_2)
{
 PQExpBuffer VAR_3;
 const char *VAR_4,
      *VAR_5;

 VAR_5 = VAR_1->currTableAm;
 VAR_4 = VAR_2;

 if (!VAR_4)
  return;

 if (VAR_5 && FUNC_11(VAR_4, VAR_5) == 0)
  return;

 VAR_3 = FUNC_7();
 FUNC_6(VAR_3, "SET default_table_access_method = %s;", FUNC_9(VAR_4));

 if (FUNC_4(VAR_1))
 {
  PGresult *VAR_6;

  VAR_6 = FUNC_2(VAR_1->connection, VAR_3->data);

  if (!VAR_6 || FUNC_3(VAR_6) != VAR_0)
   FUNC_12(VAR_1,
          "could not set default_table_access_method: %s",
          FUNC_1(VAR_1->connection));

  FUNC_0(VAR_6);
 }
 else
  FUNC_5(VAR_1, "%s\n\n", VAR_3->data);

 FUNC_8(VAR_3);

 VAR_1->currTableAm = FUNC_10(VAR_4);
}
