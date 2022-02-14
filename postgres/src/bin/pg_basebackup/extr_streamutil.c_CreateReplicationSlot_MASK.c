
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef int PGconn ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,char*,char const*) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_11 () ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (char*,char const*,int,...) ;
 scalar_t__ FUNC_14 (char const*,int ) ;

bool
FUNC_15(PGconn *VAR_3, const char *VAR_4, const char *VAR_5,
       bool VAR_6, bool VAR_7, bool VAR_8,
       bool VAR_9)
{
 PQExpBuffer VAR_10;
 PGresult *VAR_11;

 VAR_10 = FUNC_11();

 FUNC_0((VAR_7 && VAR_5 == ((void*)0)) ||
     (!VAR_7 && VAR_5 != ((void*)0)));
 FUNC_0(VAR_4 != ((void*)0));


 FUNC_9(VAR_10, "CREATE_REPLICATION_SLOT \"%s\"", VAR_4);
 if (VAR_6)
  FUNC_10(VAR_10, " TEMPORARY");
 if (VAR_7)
 {
  FUNC_10(VAR_10, " PHYSICAL");
  if (VAR_8)
   FUNC_10(VAR_10, " RESERVE_WAL");
 }
 else
 {
  FUNC_9(VAR_10, " LOGICAL \"%s\"", VAR_5);
  if (FUNC_8(VAR_3) >= 100000)

   FUNC_10(VAR_10, " NOEXPORT_SNAPSHOT");
 }

 VAR_11 = FUNC_3(VAR_3, VAR_10->data);
 if (FUNC_7(VAR_11) != VAR_1)
 {
  const char *VAR_12 = FUNC_6(VAR_11, VAR_2);

  if (VAR_9 &&
   VAR_12 &&
   FUNC_14(VAR_12, VAR_0) == 0)
  {
   FUNC_12(VAR_10);
   FUNC_1(VAR_11);
   return 1;
  }
  else
  {
   FUNC_13("could not send replication command \"%s\": %s",
       VAR_10->data, FUNC_2(VAR_3));

   FUNC_12(VAR_10);
   FUNC_1(VAR_11);
   return 0;
  }
 }

 if (FUNC_5(VAR_11) != 1 || FUNC_4(VAR_11) != 4)
 {
  FUNC_13("could not create replication slot \"%s\": got %d rows and %d fields, expected %d rows and %d fields",
      VAR_4,
      FUNC_5(VAR_11), FUNC_4(VAR_11), 1, 4);

  FUNC_12(VAR_10);
  FUNC_1(VAR_11);
  return 0;
 }

 FUNC_12(VAR_10);
 FUNC_1(VAR_11);
 return 1;
}
