
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int PLpgSQL_expr ;
typedef int PLpgSQL_execstate ;
typedef int Oid ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int*,int ,int ,int ,int) ;
 int FUNC_2 (int *,int *,int*,int *,int *) ;

__attribute__((used)) static int
FUNC_3(PLpgSQL_execstate *VAR_1,
      PLpgSQL_expr *VAR_2,
      bool *VAR_3)
{
 Datum VAR_4;
 Oid VAR_5;
 int32 VAR_6;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_5, &VAR_6);
 VAR_4 = FUNC_1(VAR_1, VAR_4, VAR_3,
        VAR_5, VAR_6,
        VAR_0, -1);
 return FUNC_0(VAR_4);
}
