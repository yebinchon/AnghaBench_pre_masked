
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RestrictInfo ;
typedef int Relids ;
typedef int Oid ;
typedef int Index ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ,int,int ,int ,int ,int ) ;
 int * FUNC_4 (int *,int,int,int,int ,int ,int *,int ) ;

RestrictInfo *
FUNC_5(Oid VAR_2,
       Oid VAR_3,
       Expr *VAR_4,
       Expr *VAR_5,
       Relids VAR_6,
       Relids VAR_7,
       Index VAR_8)
{
 RestrictInfo *VAR_9;
 Expr *VAR_10;





 VAR_10 = FUNC_3(VAR_2,
         VAR_0,
         0,
         FUNC_2(VAR_4),
         FUNC_2(VAR_5),
         VAR_1,
         VAR_3);




 VAR_9 = FUNC_4(VAR_10,
          1,
          0,
          0,
          VAR_8,
          VAR_6,
          ((void*)0),
          VAR_7);


 FUNC_1(VAR_9);
 FUNC_0(VAR_9);

 return VAR_9;
}
