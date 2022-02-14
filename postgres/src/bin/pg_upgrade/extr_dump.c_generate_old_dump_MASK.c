
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int sql_file_name ;
typedef int log_file_name ;
struct TYPE_18__ {scalar_t__ verbose; } ;
struct TYPE_17__ {int bindir; } ;
struct TYPE_13__ {int ndbs; TYPE_3__* dbs; } ;
struct TYPE_16__ {TYPE_1__ dbarr; } ;
struct TYPE_15__ {int db_oid; int db_name; } ;
struct TYPE_14__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef TYPE_3__ DbInfo ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *,int,int,char*,int ,int ,char*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_7__ VAR_6 ;
 TYPE_6__ VAR_7 ;
 TYPE_5__ VAR_8 ;
 int FUNC_8 (char*,int *,char*,int ,int ,char*,char*,int ) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,int,char*,int ) ;
 int FUNC_13 (TYPE_2__*) ;

void
FUNC_14(void)
{
 int VAR_9;

 FUNC_10("Creating dump of global objects");


 FUNC_6(VAR_5, ((void*)0), 1, 1,
     "\"%s/pg_dumpall\" %s --globals-only --quote-all-identifiers "
     "--binary-upgrade %s -f %s",
     VAR_7.bindir, FUNC_4(&VAR_8),
     VAR_6.verbose ? "--verbose" : "",
     VAR_2);
 FUNC_3();

 FUNC_10("Creating dump of database schemas\n");


 for (VAR_9 = 0; VAR_9 < VAR_8.dbarr.ndbs; VAR_9++)
 {
  char VAR_10[VAR_3],
     VAR_11[VAR_3];
  DbInfo *VAR_12 = &VAR_8.dbarr.dbs[VAR_9];
  PQExpBufferData VAR_13,
     VAR_14;

  FUNC_7(&VAR_13);
  FUNC_1(&VAR_13, "dbname=");
  FUNC_0(&VAR_13, VAR_12->db_name);
  FUNC_7(&VAR_14);
  FUNC_2(&VAR_14, VAR_13.data);
  FUNC_13(&VAR_13);

  FUNC_9(VAR_4, "%s", VAR_12->db_name);
  FUNC_12(VAR_10, sizeof(VAR_10), VAR_0, VAR_12->db_oid);
  FUNC_12(VAR_11, sizeof(VAR_11), VAR_1, VAR_12->db_oid);

  FUNC_8(VAR_11, ((void*)0),
         "\"%s/pg_dump\" %s --schema-only --quote-all-identifiers "
         "--binary-upgrade --format=custom %s --file=\"%s\" %s",
         VAR_7.bindir, FUNC_4(&VAR_8),
         VAR_6.verbose ? "--verbose" : "",
         VAR_10, VAR_14.data);

  FUNC_13(&VAR_14);
 }


 while (FUNC_11(1) == 1)
  ;

 FUNC_5();
 FUNC_3();
}
