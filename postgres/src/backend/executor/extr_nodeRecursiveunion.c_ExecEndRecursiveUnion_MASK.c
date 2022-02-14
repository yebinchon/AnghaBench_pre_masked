
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tableContext; scalar_t__ tempContext; int intermediate_table; int working_table; } ;
typedef TYPE_1__ RecursiveUnionState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

void
FUNC_5(RecursiveUnionState *VAR_0)
{

 FUNC_4(VAR_0->working_table);
 FUNC_4(VAR_0->intermediate_table);


 if (VAR_0->tempContext)
  FUNC_1(VAR_0->tempContext);
 if (VAR_0->tableContext)
  FUNC_1(VAR_0->tableContext);




 FUNC_0(FUNC_3(VAR_0));
 FUNC_0(FUNC_2(VAR_0));
}
