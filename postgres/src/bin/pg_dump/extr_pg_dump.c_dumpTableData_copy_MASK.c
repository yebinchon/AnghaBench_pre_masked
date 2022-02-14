
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {char* name; TYPE_2__* namespace; } ;
struct TYPE_17__ {TYPE_3__ dobj; } ;
typedef TYPE_4__ TableInfo ;
struct TYPE_18__ {char const* filtercond; TYPE_4__* tdtable; } ;
typedef TYPE_5__ TableDataInfo ;
struct TYPE_19__ {char* data; int len; } ;
struct TYPE_14__ {int name; } ;
struct TYPE_15__ {TYPE_1__ dobj; } ;
typedef TYPE_6__* PQExpBuffer ;
typedef int PGresult ;
typedef int PGconn ;
typedef int Archive ;


 int * FUNC_0 (int *,char*,int ) ;
 int * FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 char const* FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char**,int ) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (TYPE_6__*,char*,int ,char const*) ;
 int FUNC_10 (TYPE_6__*,char const*) ;
 int FUNC_11 (int *,char*) ;
 TYPE_6__* FUNC_12 () ;
 int FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (int) ;
 char* FUNC_15 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (char*,char const*) ;
 int FUNC_18 (char*,int ,char const*) ;
 int FUNC_19 (char*,char const*) ;
 int FUNC_20 (char const*) ;

__attribute__((used)) static int
FUNC_21(Archive *VAR_2, void *VAR_3)
{
 TableDataInfo *VAR_4 = (TableDataInfo *) VAR_3;
 TableInfo *VAR_5 = VAR_4->tdtable;
 const char *VAR_6 = VAR_5->dobj.name;
 PQExpBuffer VAR_7 = FUNC_12();





 PQExpBuffer VAR_8 = FUNC_12();
 PGconn *VAR_9 = FUNC_1(VAR_2);
 PGresult *VAR_10;
 int VAR_11;
 char *VAR_12;
 const char *VAR_13;

 FUNC_18("dumping contents of table \"%s.%s\"",
    VAR_5->dobj.namespace->dobj.name, VAR_6);







 VAR_13 = FUNC_15(VAR_5, VAR_8);

 if (VAR_4->filtercond)
 {

  FUNC_10(VAR_7, "COPY (SELECT ");

  if (FUNC_20(VAR_13) > 2)
  {
   FUNC_10(VAR_7, VAR_13 + 1);
   VAR_7->data[VAR_7->len - 1] = ' ';
  }
  else
   FUNC_10(VAR_7, "* ");
  FUNC_9(VAR_7, "FROM %s %s) TO stdout;",
        FUNC_16(VAR_5),
        VAR_4->filtercond);
 }
 else
 {
  FUNC_9(VAR_7, "COPY %s %s TO stdout;",
        FUNC_16(VAR_5),
        VAR_13);
 }
 VAR_10 = FUNC_0(VAR_2, VAR_7->data, VAR_1);
 FUNC_2(VAR_10);
 FUNC_13(VAR_8);

 for (;;)
 {
  VAR_11 = FUNC_5(VAR_9, &VAR_12, 0);

  if (VAR_11 < 0)
   break;

  if (VAR_12)
  {
   FUNC_8(VAR_2, VAR_12, VAR_11);
   FUNC_4(VAR_12);
  }
 }
 FUNC_11(VAR_2, "\\.\n\n\n");

 if (VAR_11 == -2)
 {

  FUNC_17("Dumping the contents of table \"%s\" failed: PQgetCopyData() failed.", VAR_6);
  FUNC_17("Error message from server: %s", FUNC_3(VAR_9));
  FUNC_17("The command was: %s", VAR_7->data);
  FUNC_14(1);
 }


 VAR_10 = FUNC_6(VAR_9);
 if (FUNC_7(VAR_10) != VAR_0)
 {
  FUNC_17("Dumping the contents of table \"%s\" failed: PQgetResult() failed.", VAR_6);
  FUNC_17("Error message from server: %s", FUNC_3(VAR_9));
  FUNC_17("The command was: %s", VAR_7->data);
  FUNC_14(1);
 }
 FUNC_2(VAR_10);


 if (FUNC_6(VAR_9) != ((void*)0))
  FUNC_19("unexpected extra results during COPY of table \"%s\"",
        VAR_6);

 FUNC_13(VAR_7);
 return 1;
}
