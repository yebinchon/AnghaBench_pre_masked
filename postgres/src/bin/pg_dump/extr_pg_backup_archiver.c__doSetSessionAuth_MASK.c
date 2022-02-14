
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int connection; } ;
struct TYPE_12__ {int data; } ;
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
 int FUNC_6 (TYPE_1__*,char) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,char const*,TYPE_2__*) ;
 TYPE_1__* FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (char*,char const*,int ) ;

__attribute__((used)) static void
FUNC_12(ArchiveHandle *VAR_1, const char *VAR_2)
{
 PQExpBuffer VAR_3 = FUNC_9();

 FUNC_7(VAR_3, "SET SESSION AUTHORIZATION ");




 if (VAR_2 && *VAR_2)
  FUNC_8(VAR_3, VAR_2, VAR_1);
 else
  FUNC_7(VAR_3, "DEFAULT");
 FUNC_6(VAR_3, ';');

 if (FUNC_4(VAR_1))
 {
  PGresult *VAR_4;

  VAR_4 = FUNC_2(VAR_1->connection, VAR_3->data);

  if (!VAR_4 || FUNC_3(VAR_4) != VAR_0)

   FUNC_11("could not set session user to \"%s\": %s",
      VAR_2, FUNC_1(VAR_1->connection));

  FUNC_0(VAR_4);
 }
 else
  FUNC_5(VAR_1, "%s\n\n", VAR_3->data);

 FUNC_10(VAR_3);
}
