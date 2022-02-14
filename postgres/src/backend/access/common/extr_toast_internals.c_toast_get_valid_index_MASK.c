
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Oid ;
typedef int LOCKMODE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int ,int ,int **,int*) ;

Oid
FUNC_5(Oid VAR_0, LOCKMODE VAR_1)
{
 int VAR_2;
 int VAR_3;
 Oid VAR_4;
 Relation *VAR_5;
 Relation VAR_6;


 VAR_6 = FUNC_2(VAR_0, VAR_1);


 VAR_3 = FUNC_4(VAR_6,
         VAR_1,
         &VAR_5,
         &VAR_2);
 VAR_4 = FUNC_0(VAR_5[VAR_3]);


 FUNC_3(VAR_5, VAR_2, VAR_1);
 FUNC_1(VAR_6, VAR_1);

 return VAR_4;
}
