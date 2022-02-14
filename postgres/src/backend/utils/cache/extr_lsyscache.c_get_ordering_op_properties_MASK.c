
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int16 ;
struct TYPE_8__ {int n_members; TYPE_1__** members; } ;
struct TYPE_7__ {scalar_t__ amopmethod; scalar_t__ amopstrategy; scalar_t__ amoplefttype; scalar_t__ amoprighttype; scalar_t__ amopfamily; } ;
struct TYPE_6__ {int tuple; } ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_amop ;
typedef TYPE_3__ CatCList ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int ,int ) ;

bool
FUNC_4(Oid VAR_5,
         Oid *VAR_6, Oid *VAR_7, int16 *VAR_8)
{
 bool VAR_9 = 0;
 CatCList *VAR_10;
 int VAR_11;


 *VAR_6 = VAR_4;
 *VAR_7 = VAR_4;
 *VAR_8 = 0;





 VAR_10 = FUNC_3(VAR_0, FUNC_1(VAR_5));

 for (VAR_11 = 0; VAR_11 < VAR_10->n_members; VAR_11++)
 {
  HeapTuple VAR_12 = &VAR_10->members[VAR_11]->tuple;
  Form_pg_amop VAR_13 = (Form_pg_amop) FUNC_0(VAR_12);


  if (VAR_13->amopmethod != VAR_3)
   continue;

  if (VAR_13->amopstrategy == VAR_2 ||
   VAR_13->amopstrategy == VAR_1)
  {

   if (VAR_13->amoplefttype == VAR_13->amoprighttype)
   {

    *VAR_6 = VAR_13->amopfamily;
    *VAR_7 = VAR_13->amoplefttype;
    *VAR_8 = VAR_13->amopstrategy;
    VAR_9 = 1;
    break;
   }
  }
 }

 FUNC_2(VAR_10);

 return VAR_9;
}
