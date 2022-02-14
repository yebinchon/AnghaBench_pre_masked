
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int n_members; TYPE_1__** members; } ;
struct TYPE_7__ {scalar_t__ amoppurpose; scalar_t__ amoplefttype; scalar_t__ amoprighttype; int amopopr; int amopsortfamily; } ;
struct TYPE_6__ {int tuple; } ;
typedef scalar_t__ Oid ;
typedef int IndexAMProperty ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_amop ;
typedef TYPE_3__ CatCList ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_8 (int ,int ) ;

bool
FUNC_9(Oid VAR_2, int VAR_3,
   IndexAMProperty VAR_4, const char *VAR_5,
   bool *VAR_6, bool *VAR_7)
{
 Oid VAR_8,
    VAR_9,
    VAR_10;
 CatCList *VAR_11;
 int VAR_12;


 if (VAR_3 == 0)
  return 0;

 switch (VAR_4)
 {
  case 128:
   break;
  default:
   return 0;
 }
 VAR_8 = FUNC_5(VAR_2, VAR_3);
 if (!FUNC_2(VAR_8))
 {
  *VAR_7 = 1;
  return 1;
 }


 if (!FUNC_7(VAR_8, &VAR_9, &VAR_10))
 {
  *VAR_7 = 1;
  return 1;
 }


 VAR_11 = FUNC_4(VAR_0,
          FUNC_1(VAR_9));

 *VAR_6 = 0;

 for (VAR_12 = 0; VAR_12 < VAR_11->n_members; VAR_12++)
 {
  HeapTuple VAR_13 = &VAR_11->members[VAR_12]->tuple;
  Form_pg_amop VAR_14 = (Form_pg_amop) FUNC_0(VAR_13);

  if (VAR_14->amoppurpose == VAR_1 &&
   (VAR_14->amoplefttype == VAR_10 ||
    VAR_14->amoprighttype == VAR_10) &&
   FUNC_8(VAR_14->amopsortfamily,
           FUNC_6(VAR_14->amopopr)))
  {
   *VAR_6 = 1;
   break;
  }
 }

 FUNC_3(VAR_11);

 *VAR_7 = 0;

 return 1;
}
