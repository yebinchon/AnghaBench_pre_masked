
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PLpgSQL_execstate ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static char *
FUNC_4(PLpgSQL_execstate *VAR_0, Datum VAR_1, Oid VAR_2)
{
 char *VAR_3;
 MemoryContext VAR_4;
 Oid VAR_5;
 bool VAR_6;

 VAR_4 = FUNC_0(FUNC_3(VAR_0));
 FUNC_2(VAR_2, &VAR_5, &VAR_6);
 VAR_3 = FUNC_1(VAR_5, VAR_1);
 FUNC_0(VAR_4);

 return VAR_3;
}
