
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int query ;
struct TYPE_6__ {int ndbs; TYPE_2__* dbs; } ;
struct TYPE_8__ {TYPE_1__ dbarr; int major_version; } ;
struct TYPE_7__ {char* db_tablespace; void* db_ctype; void* db_collate; int db_encoding; void* db_name; int db_oid; } ;
typedef int PGresult ;
typedef int PGconn ;
typedef TYPE_2__ DbInfo ;
typedef TYPE_3__ ClusterInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (TYPE_3__*,char*) ;
 int * FUNC_9 (int *,char*,char*) ;
 scalar_t__ FUNC_10 (int) ;
 void* FUNC_11 (char*) ;
 int FUNC_12 (char*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_13(ClusterInfo *VAR_1)
{
 PGconn *VAR_2 = FUNC_8(VAR_1, "template1");
 PGresult *VAR_3;
 int VAR_4;
 int VAR_5;
 DbInfo *VAR_6;
 int VAR_7,
    VAR_8,
    VAR_9,
    VAR_10,
    VAR_11,
    VAR_12;
 char VAR_13[VAR_0];

 FUNC_12(VAR_13, sizeof(VAR_13),
    "SELECT d.oid, d.datname, d.encoding, d.datcollate, d.datctype, "
    "%s AS spclocation "
    "FROM pg_catalog.pg_database d "
    " LEFT OUTER JOIN pg_catalog.pg_tablespace t "
    " ON d.dattablespace = t.oid "
    "WHERE d.datallowconn = true "

    "ORDER BY 2",

    (FUNC_0(VAR_1->major_version) <= 901) ?
    "t.spclocation" : "pg_catalog.pg_tablespace_location(t.oid)");

 VAR_3 = FUNC_9(VAR_2, "%s", VAR_13);

 VAR_8 = FUNC_3(VAR_3, "oid");
 VAR_7 = FUNC_3(VAR_3, "datname");
 VAR_9 = FUNC_3(VAR_3, "encoding");
 VAR_10 = FUNC_3(VAR_3, "datcollate");
 VAR_11 = FUNC_3(VAR_3, "datctype");
 VAR_12 = FUNC_3(VAR_3, "spclocation");

 VAR_4 = FUNC_5(VAR_3);
 VAR_6 = (DbInfo *) FUNC_10(sizeof(DbInfo) * VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  VAR_6[VAR_5].db_oid = FUNC_7(FUNC_4(VAR_3, VAR_5, VAR_8));
  VAR_6[VAR_5].db_name = FUNC_11(FUNC_4(VAR_3, VAR_5, VAR_7));
  VAR_6[VAR_5].db_encoding = FUNC_6(FUNC_4(VAR_3, VAR_5, VAR_9));
  VAR_6[VAR_5].db_collate = FUNC_11(FUNC_4(VAR_3, VAR_5, VAR_10));
  VAR_6[VAR_5].db_ctype = FUNC_11(FUNC_4(VAR_3, VAR_5, VAR_11));
  FUNC_12(VAR_6[VAR_5].db_tablespace, sizeof(VAR_6[VAR_5].db_tablespace), "%s",
     FUNC_4(VAR_3, VAR_5, VAR_12));
 }
 FUNC_1(VAR_3);

 FUNC_2(VAR_2);

 VAR_1->dbarr.dbs = VAR_6;
 VAR_1->dbarr.ndbs = VAR_4;
}
