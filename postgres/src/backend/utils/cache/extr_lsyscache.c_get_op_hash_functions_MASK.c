
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
typedef int RegProcedure ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_amop ;
typedef TYPE_3__ CatCList ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,int ) ;

bool
FUNC_6(Oid VAR_5,
       RegProcedure *VAR_6, RegProcedure *VAR_7)
{
 bool VAR_8 = 0;
 CatCList *VAR_9;
 int VAR_10;


 if (VAR_6)
  *VAR_6 = VAR_4;
 if (VAR_7)
  *VAR_7 = VAR_4;






 VAR_9 = FUNC_4(VAR_0, FUNC_1(VAR_5));

 for (VAR_10 = 0; VAR_10 < VAR_9->n_members; VAR_10++)
 {
  HeapTuple VAR_11 = &VAR_9->members[VAR_10]->tuple;
  Form_pg_amop VAR_12 = (Form_pg_amop) FUNC_0(VAR_11);

  if (VAR_12->amopmethod == VAR_2 &&
   VAR_12->amopstrategy == VAR_3)
  {





   if (VAR_6)
   {
    *VAR_6 = FUNC_5(VAR_12->amopfamily,
            VAR_12->amoplefttype,
            VAR_12->amoplefttype,
            VAR_1);
    if (!FUNC_2(*VAR_6))
     continue;

    if (!VAR_7)
    {
     VAR_8 = 1;
     break;
    }

    if (VAR_12->amoplefttype == VAR_12->amoprighttype)
    {
     *VAR_7 = *VAR_6;
     VAR_8 = 1;
     break;
    }
   }
   if (VAR_7)
   {
    *VAR_7 = FUNC_5(VAR_12->amopfamily,
            VAR_12->amoprighttype,
            VAR_12->amoprighttype,
            VAR_1);
    if (!FUNC_2(*VAR_7))
    {

     if (VAR_6)
      *VAR_6 = VAR_4;
     continue;
    }

    VAR_8 = 1;
    break;
   }
  }
 }

 FUNC_3(VAR_9);

 return VAR_8;
}
