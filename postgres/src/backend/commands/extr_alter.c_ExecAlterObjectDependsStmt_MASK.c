
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ extname; scalar_t__ object; int relation; int objectType; } ;
typedef int * Relation ;
typedef int ObjectAddress ;
typedef int Node ;
typedef int List ;
typedef TYPE_1__ AlterObjectDependsStmt ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int **,int ,int) ;
 int FUNC_2 (int ,int ,int *,int **,int ,int) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int ) ;

ObjectAddress
FUNC_5(AlterObjectDependsStmt *VAR_4, ObjectAddress *VAR_5)
{
 ObjectAddress VAR_6;
 ObjectAddress VAR_7;
 Relation VAR_8;

 VAR_6 =
  FUNC_2(VAR_4->objectType, VAR_4->relation, (List *) VAR_4->object,
         &VAR_8, VAR_0, 0);





 if (VAR_8)
  FUNC_4(VAR_8, VAR_2);

 VAR_7 = FUNC_1(VAR_3, (Node *) VAR_4->extname,
         &VAR_8, VAR_0, 0);
 FUNC_0(VAR_8 == ((void*)0));
 if (VAR_5)
  *VAR_5 = VAR_7;

 FUNC_3(&VAR_6, &VAR_7, VAR_1);

 return VAR_6;
}
