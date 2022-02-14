
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int n_members; TYPE_1__** members; } ;
struct TYPE_7__ {scalar_t__ amopmethod; int amopfamily; } ;
struct TYPE_6__ {int tuple; } ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_amop ;
typedef TYPE_3__ CatCList ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;

bool
FUNC_5(Oid VAR_3, Oid VAR_4)
{
 bool VAR_5;
 CatCList *VAR_6;
 int VAR_7;


 if (VAR_3 == VAR_4)
  return 1;




 VAR_6 = FUNC_3(VAR_0, FUNC_1(VAR_3));

 VAR_5 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_6->n_members; VAR_7++)
 {
  HeapTuple VAR_8 = &VAR_6->members[VAR_7]->tuple;
  Form_pg_amop VAR_9 = (Form_pg_amop) FUNC_0(VAR_8);


  if (VAR_9->amopmethod == VAR_1 ||
   VAR_9->amopmethod == VAR_2)
  {
   if (FUNC_4(VAR_4, VAR_9->amopfamily))
   {
    VAR_5 = 1;
    break;
   }
  }
 }

 FUNC_2(VAR_6);

 return VAR_5;
}
