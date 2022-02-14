
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * connection; } ;
typedef int Oid ;
typedef TYPE_1__ ArchiveHandle ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,int ,...) ;

void
FUNC_2(ArchiveHandle *VAR_0, Oid VAR_1)
{




 if (VAR_0->connection == ((void*)0) ||
  FUNC_0(VAR_0->connection) >= 90000)
 {
  FUNC_1(VAR_0,
     "SELECT pg_catalog.lo_unlink(oid) "
     "FROM pg_catalog.pg_largeobject_metadata "
     "WHERE oid = '%u';\n",
     VAR_1);
 }
 else
 {

  FUNC_1(VAR_0,
     "SELECT CASE WHEN EXISTS("
     "SELECT 1 FROM pg_catalog.pg_largeobject WHERE loid = '%u'"
     ") THEN pg_catalog.lo_unlink('%u') END;\n",
     VAR_1, VAR_1);
 }
}
