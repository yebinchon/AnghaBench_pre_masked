
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int query ;
typedef int PGresult ;
typedef int Oid ;
typedef int Archive ;


 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static char *
FUNC_5(Archive *VAR_0, Oid VAR_1)
{
 char *VAR_2;
 char VAR_3[128];
 PGresult *VAR_4;

 FUNC_4(VAR_3, sizeof(VAR_3),
    "SELECT '%u'::pg_catalog.regproc", VAR_1);
 VAR_4 = FUNC_0(VAR_0, VAR_3);

 VAR_2 = FUNC_3(FUNC_2(VAR_4, 0, 0));

 FUNC_1(VAR_4);

 return VAR_2;
}
