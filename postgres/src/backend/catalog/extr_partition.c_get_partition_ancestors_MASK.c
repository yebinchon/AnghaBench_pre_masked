
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,int ,int **) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

List *
FUNC_3(Oid VAR_3)
{
 List *VAR_4 = VAR_2;
 Relation VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_0);

 FUNC_0(VAR_5, VAR_3, &VAR_4);

 FUNC_1(VAR_5, VAR_0);

 return VAR_4;
}
