
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int n_members; TYPE_1__** members; } ;
struct TYPE_7__ {scalar_t__ amopmethod; scalar_t__ amopstrategy; int amopfamily; } ;
struct TYPE_6__ {int tuple; } ;
typedef int Oid ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_amop ;
typedef TYPE_3__ CatCList ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int * VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int ,int ) ;
 int * FUNC_4 (int *,int ) ;

List *
FUNC_5(Oid VAR_4)
{
 List *VAR_5 = VAR_3;
 CatCList *VAR_6;
 int VAR_7;





 VAR_6 = FUNC_3(VAR_0, FUNC_1(VAR_4));

 for (VAR_7 = 0; VAR_7 < VAR_6->n_members; VAR_7++)
 {
  HeapTuple VAR_8 = &VAR_6->members[VAR_7]->tuple;
  Form_pg_amop VAR_9 = (Form_pg_amop) FUNC_0(VAR_8);


  if (VAR_9->amopmethod == VAR_2 &&
   VAR_9->amopstrategy == VAR_1)
   VAR_5 = FUNC_4(VAR_5, VAR_9->amopfamily);
 }

 FUNC_2(VAR_6);

 return VAR_5;
}
