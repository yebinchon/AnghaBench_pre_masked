
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef int PGconn ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,char*,char const*) ;
 TYPE_1__* FUNC_8 () ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*,char const*,scalar_t__,...) ;

bool
FUNC_11(PGconn *VAR_1, const char *VAR_2)
{
 PQExpBuffer VAR_3;
 PGresult *VAR_4;

 FUNC_0(VAR_2 != ((void*)0));

 VAR_3 = FUNC_8();


 FUNC_7(VAR_3, "DROP_REPLICATION_SLOT \"%s\"",
       VAR_2);
 VAR_4 = FUNC_3(VAR_1, VAR_3->data);
 if (FUNC_6(VAR_4) != VAR_0)
 {
  FUNC_10("could not send replication command \"%s\": %s",
      VAR_3->data, FUNC_2(VAR_1));

  FUNC_9(VAR_3);
  FUNC_1(VAR_4);
  return 0;
 }

 if (FUNC_5(VAR_4) != 0 || FUNC_4(VAR_4) != 0)
 {
  FUNC_10("could not drop replication slot \"%s\": got %d rows and %d fields, expected %d rows and %d fields",
      VAR_2,
      FUNC_5(VAR_4), FUNC_4(VAR_4), 0, 0);

  FUNC_9(VAR_3);
  FUNC_1(VAR_4);
  return 0;
 }

 FUNC_9(VAR_3);
 FUNC_1(VAR_4);
 return 1;
}
