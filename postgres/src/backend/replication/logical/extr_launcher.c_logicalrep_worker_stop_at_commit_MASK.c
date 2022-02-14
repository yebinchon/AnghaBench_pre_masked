
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* relid; void* subid; } ;
struct TYPE_5__ {int nestDepth; int workers; struct TYPE_5__* parent; } ;
typedef TYPE_1__ StopWorkersData ;
typedef void* Oid ;
typedef int MemoryContext ;
typedef TYPE_2__ LogicalRepWorkerId ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_2__*) ;
 TYPE_1__* VAR_2 ;
 void* FUNC_4 (int) ;

void
FUNC_5(Oid VAR_3, Oid VAR_4)
{
 int VAR_5 = FUNC_1();
 LogicalRepWorkerId *VAR_6;
 MemoryContext VAR_7;


 VAR_7 = FUNC_2(VAR_1);


 FUNC_0(VAR_2 == ((void*)0) ||
     VAR_5 >= VAR_2->nestDepth);





 if (VAR_2 == ((void*)0) ||
  VAR_5 > VAR_2->nestDepth)
 {
  StopWorkersData *VAR_8 = FUNC_4(sizeof(StopWorkersData));

  VAR_8->nestDepth = VAR_5;
  VAR_8->workers = VAR_0;
  VAR_8->parent = VAR_2;
  VAR_2 = VAR_8;
 }





 VAR_6 = FUNC_4(sizeof(LogicalRepWorkerId));
 VAR_6->subid = VAR_3;
 VAR_6->relid = VAR_4;
 VAR_2->workers =
  FUNC_3(VAR_2->workers, VAR_6);

 FUNC_2(VAR_7);
}
