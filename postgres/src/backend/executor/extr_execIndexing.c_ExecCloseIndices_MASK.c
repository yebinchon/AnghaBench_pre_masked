
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ri_NumIndices; int ** ri_IndexRelationDescs; } ;
typedef TYPE_1__ ResultRelInfo ;
typedef int ** RelationPtr ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(ResultRelInfo *VAR_1)
{
 int VAR_2;
 int VAR_3;
 RelationPtr VAR_4;

 VAR_3 = VAR_1->ri_NumIndices;
 VAR_4 = VAR_1->ri_IndexRelationDescs;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
 {
  if (VAR_4[VAR_2] == ((void*)0))
   continue;


  FUNC_0(VAR_4[VAR_2], VAR_0);
 }





}
