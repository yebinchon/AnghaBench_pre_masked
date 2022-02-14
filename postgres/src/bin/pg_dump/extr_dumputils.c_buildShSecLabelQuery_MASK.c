
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQExpBuffer ;
typedef int PGconn ;
typedef int Oid ;


 int FUNC_0 (int ,char*,char const*,int ) ;

void
FUNC_1(PGconn *VAR_0, const char *VAR_1, Oid VAR_2,
      PQExpBuffer VAR_3)
{
 FUNC_0(VAR_3,
       "SELECT provider, label FROM pg_catalog.pg_shseclabel "
       "WHERE classoid = 'pg_catalog.%s'::pg_catalog.regclass "
       "AND objoid = '%u'", VAR_1, VAR_2);
}
