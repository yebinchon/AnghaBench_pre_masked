
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int Archive ;


 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static char *
FUNC_4(Archive *VAR_0)
{
 char *VAR_1 = "SELECT pg_catalog.pg_export_snapshot()";
 char *VAR_2;
 PGresult *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 VAR_2 = FUNC_3(FUNC_2(VAR_3, 0, 0));
 FUNC_1(VAR_3);

 return VAR_2;
}
