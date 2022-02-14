
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Index ;
typedef int EState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;

Relation
FUNC_7(EState *VAR_4, Index VAR_5, int VAR_6)
{
 Relation VAR_7;


 VAR_7 = FUNC_0(VAR_4, VAR_5);






 if ((VAR_6 & (VAR_2 | VAR_3)) == 0 &&
  !FUNC_2(VAR_7))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_6("materialized view \"%s\" has not been populated",
      FUNC_1(VAR_7)),
     FUNC_5("Use the REFRESH MATERIALIZED VIEW command.")));

 return VAR_7;
}
