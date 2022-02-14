
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int eoh_context; } ;
typedef int MemoryContext ;
typedef TYPE_1__ ExpandedObjectHeader ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

Datum
FUNC_6(Datum VAR_0, MemoryContext VAR_1)
{
 ExpandedObjectHeader *VAR_2 = FUNC_1(VAR_0);


 FUNC_0(FUNC_5(FUNC_2(VAR_0)));


 FUNC_4(VAR_2->eoh_context, VAR_1);


 return FUNC_3(VAR_2);
}
