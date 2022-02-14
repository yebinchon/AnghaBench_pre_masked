
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int todo ;
struct options {int quiet; } ;
typedef int PGconn ;


 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (int *,char*,int ) ;

void
FUNC_2(PGconn *VAR_0, struct options *VAR_1)
{
 char VAR_2[1024];

 FUNC_0(VAR_2, sizeof(VAR_2),
    "SELECT oid AS \"Oid\", spcname as \"Tablespace Name\"\n"
    "FROM pg_catalog.pg_tablespace");

 FUNC_1(VAR_0, VAR_2, VAR_1->quiet);
}
