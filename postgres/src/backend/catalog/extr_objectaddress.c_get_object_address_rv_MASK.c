
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ catalogname; scalar_t__ schemaname; scalar_t__ relname; } ;
typedef int Relation ;
typedef TYPE_1__ RangeVar ;
typedef int ObjectType ;
typedef int ObjectAddress ;
typedef int Node ;
typedef int List ;
typedef int LOCKMODE ;


 int FUNC_0 (int ,int *,int *,int ,int) ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__) ;

ObjectAddress
FUNC_3(ObjectType VAR_0, RangeVar *VAR_1, List *VAR_2,
       Relation *VAR_3, LOCKMODE VAR_4,
       bool VAR_5)
{
 if (VAR_1)
 {
  VAR_2 = FUNC_1(FUNC_2(VAR_1->relname), VAR_2);
  if (VAR_1->schemaname)
   VAR_2 = FUNC_1(FUNC_2(VAR_1->schemaname), VAR_2);
  if (VAR_1->catalogname)
   VAR_2 = FUNC_1(FUNC_2(VAR_1->catalogname), VAR_2);
 }

 return FUNC_0(VAR_0, (Node *) VAR_2,
         VAR_3, VAR_4, VAR_5);
}
