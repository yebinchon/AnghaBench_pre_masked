
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int replace; int instead; int event; int rulename; int relation; } ;
typedef TYPE_1__ RuleStmt ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef int Node ;
typedef int List ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,char const*,int **,int **) ;

ObjectAddress
FUNC_3(RuleStmt *VAR_1, const char *VAR_2)
{
 List *VAR_3;
 Node *VAR_4;
 Oid VAR_5;


 FUNC_2(VAR_1, VAR_2, &VAR_3, &VAR_4);





 VAR_5 = FUNC_1(VAR_1->relation, VAR_0, 0);


 return FUNC_0(VAR_1->rulename,
         VAR_5,
         VAR_4,
         VAR_1->event,
         VAR_1->instead,
         VAR_1->replace,
         VAR_3);
}
