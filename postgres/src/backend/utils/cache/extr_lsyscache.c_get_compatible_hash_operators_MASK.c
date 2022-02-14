
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int n_members; TYPE_1__** members; } ;
struct TYPE_7__ {scalar_t__ amopmethod; scalar_t__ amopstrategy; scalar_t__ amoplefttype; scalar_t__ amoprighttype; int amopfamily; } ;
struct TYPE_6__ {int tuple; } ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_amop ;
typedef TYPE_3__ CatCList ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,scalar_t__) ;

bool
FUNC_6(Oid VAR_4,
         Oid *VAR_5, Oid *VAR_6)
{
 bool VAR_7 = 0;
 CatCList *VAR_8;
 int VAR_9;


 if (VAR_5)
  *VAR_5 = VAR_3;
 if (VAR_6)
  *VAR_6 = VAR_3;






 VAR_8 = FUNC_4(VAR_0, FUNC_1(VAR_4));

 for (VAR_9 = 0; VAR_9 < VAR_8->n_members; VAR_9++)
 {
  HeapTuple VAR_10 = &VAR_8->members[VAR_9]->tuple;
  Form_pg_amop VAR_11 = (Form_pg_amop) FUNC_0(VAR_10);

  if (VAR_11->amopmethod == VAR_1 &&
   VAR_11->amopstrategy == VAR_2)
  {

   if (VAR_11->amoplefttype == VAR_11->amoprighttype)
   {
    if (VAR_5)
     *VAR_5 = VAR_4;
    if (VAR_6)
     *VAR_6 = VAR_4;
    VAR_7 = 1;
    break;
   }






   if (VAR_5)
   {
    *VAR_5 = FUNC_5(VAR_11->amopfamily,
            VAR_11->amoplefttype,
            VAR_11->amoplefttype,
            VAR_2);
    if (!FUNC_2(*VAR_5))
     continue;

    if (!VAR_6)
    {
     VAR_7 = 1;
     break;
    }
   }
   if (VAR_6)
   {
    *VAR_6 = FUNC_5(VAR_11->amopfamily,
            VAR_11->amoprighttype,
            VAR_11->amoprighttype,
            VAR_2);
    if (!FUNC_2(*VAR_6))
    {

     if (VAR_5)
      *VAR_5 = VAR_3;
     continue;
    }

    VAR_7 = 1;
    break;
   }
  }
 }

 FUNC_3(VAR_8);

 return VAR_7;
}
