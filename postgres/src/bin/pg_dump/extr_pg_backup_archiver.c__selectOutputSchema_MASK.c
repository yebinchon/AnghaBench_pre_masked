
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ searchpath; } ;
struct TYPE_14__ {char const* currSchema; int connection; TYPE_1__ public; } ;
struct TYPE_13__ {int data; } ;
typedef TYPE_2__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_3__ ArchiveHandle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,char*,int ) ;
 int FUNC_6 (TYPE_2__*,char*,int ) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 TYPE_2__* FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char const*) ;
 char const* FUNC_12 (char const*) ;
 scalar_t__ FUNC_13 (char const*,char const*) ;
 int FUNC_14 (TYPE_3__*,char*,char const*,int ) ;

__attribute__((used)) static void
FUNC_15(ArchiveHandle *VAR_1, const char *VAR_2)
{
 PQExpBuffer VAR_3;







 if (VAR_1->public.searchpath)
  return;

 if (!VAR_2 || *VAR_2 == '\0' ||
  (VAR_1->currSchema && FUNC_13(VAR_1->currSchema, VAR_2) == 0))
  return;

 VAR_3 = FUNC_8();

 FUNC_6(VAR_3, "SET search_path = %s",
       FUNC_10(VAR_2));
 if (FUNC_13(VAR_2, "pg_catalog") != 0)
  FUNC_7(VAR_3, ", pg_catalog");

 if (FUNC_4(VAR_1))
 {
  PGresult *VAR_4;

  VAR_4 = FUNC_2(VAR_1->connection, VAR_3->data);

  if (!VAR_4 || FUNC_3(VAR_4) != VAR_0)
   FUNC_14(VAR_1,
          "could not set search_path to \"%s\": %s",
          VAR_2, FUNC_1(VAR_1->connection));

  FUNC_0(VAR_4);
 }
 else
  FUNC_5(VAR_1, "%s;\n\n", VAR_3->data);

 if (VAR_1->currSchema)
  FUNC_11(VAR_1->currSchema);
 VAR_1->currSchema = FUNC_12(VAR_2);

 FUNC_9(VAR_3);
}
