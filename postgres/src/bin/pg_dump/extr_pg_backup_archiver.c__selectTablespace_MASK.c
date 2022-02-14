
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* ropt; } ;
struct TYPE_16__ {char* currTablespace; int connection; TYPE_1__ public; } ;
struct TYPE_15__ {int data; } ;
struct TYPE_14__ {scalar_t__ noTablespace; } ;
typedef TYPE_2__ RestoreOptions ;
typedef TYPE_3__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_4__ ArchiveHandle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,char*,int ) ;
 int FUNC_6 (TYPE_3__*,char*,int ) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 TYPE_3__* FUNC_8 () ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char const*) ;
 scalar_t__ FUNC_13 (char const*,char const*) ;
 int FUNC_14 (TYPE_4__*,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_15(ArchiveHandle *VAR_1, const char *VAR_2)
{
 RestoreOptions *VAR_3 = VAR_1->public.ropt;
 PQExpBuffer VAR_4;
 const char *VAR_5,
      *VAR_6;


 if (VAR_3->noTablespace)
  return;

 VAR_6 = VAR_1->currTablespace;
 VAR_5 = VAR_2;


 if (!VAR_5)
  return;

 if (VAR_6 && FUNC_13(VAR_5, VAR_6) == 0)
  return;

 VAR_4 = FUNC_8();

 if (FUNC_13(VAR_5, "") == 0)
 {

  FUNC_7(VAR_4, "SET default_tablespace = ''");
 }
 else
 {

  FUNC_6(VAR_4, "SET default_tablespace = %s", FUNC_10(VAR_5));
 }

 if (FUNC_4(VAR_1))
 {
  PGresult *VAR_7;

  VAR_7 = FUNC_2(VAR_1->connection, VAR_4->data);

  if (!VAR_7 || FUNC_3(VAR_7) != VAR_0)
   FUNC_14(VAR_1,
          "could not set default_tablespace to %s: %s",
          FUNC_10(VAR_5), FUNC_1(VAR_1->connection));

  FUNC_0(VAR_7);
 }
 else
  FUNC_5(VAR_1, "%s;\n\n", VAR_4->data);

 if (VAR_1->currTablespace)
  FUNC_11(VAR_1->currTablespace);
 VAR_1->currTablespace = FUNC_12(VAR_5);

 FUNC_9(VAR_4);
}
