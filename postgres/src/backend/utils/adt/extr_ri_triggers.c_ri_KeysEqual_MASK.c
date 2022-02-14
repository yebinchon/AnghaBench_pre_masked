
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int16 ;
struct TYPE_9__ {int tts_tupleDescriptor; } ;
typedef TYPE_1__ TupleTableSlot ;
struct TYPE_11__ {int attlen; int attbyval; } ;
struct TYPE_10__ {int nkeys; int * ff_eq_oprs; scalar_t__* fk_attnums; scalar_t__* pk_attnums; } ;
typedef int Relation ;
typedef TYPE_2__ RI_ConstraintInfo ;
typedef TYPE_3__* Form_pg_attribute ;
typedef int Datum ;


 int FUNC_0 (int ,scalar_t__ const) ;
 TYPE_3__* FUNC_1 (int ,scalar_t__ const) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,scalar_t__ const,int*) ;

__attribute__((used)) static bool
FUNC_5(Relation VAR_0, TupleTableSlot *VAR_1, TupleTableSlot *VAR_2,
    const RI_ConstraintInfo *VAR_3, bool VAR_4)
{
 const int16 *VAR_5;

 if (VAR_4)
  VAR_5 = VAR_3->pk_attnums;
 else
  VAR_5 = VAR_3->fk_attnums;


 for (int VAR_6 = 0; VAR_6 < VAR_3->nkeys; VAR_6++)
 {
  Datum VAR_7;
  Datum VAR_8;
  bool VAR_9;




  VAR_7 = FUNC_4(VAR_1, VAR_5[VAR_6], &VAR_9);
  if (VAR_9)
   return 0;




  VAR_8 = FUNC_4(VAR_2, VAR_5[VAR_6], &VAR_9);
  if (VAR_9)
   return 0;

  if (VAR_4)
  {
   Form_pg_attribute VAR_10 = FUNC_1(VAR_1->tts_tupleDescriptor, VAR_5[VAR_6] - 1);

   if (!FUNC_2(VAR_7, VAR_8, VAR_10->attbyval, VAR_10->attlen))
    return 0;
  }
  else
  {





   if (!FUNC_3(VAR_3->ff_eq_oprs[VAR_6], FUNC_0(VAR_0, VAR_5[VAR_6]),
         VAR_7, VAR_8))
    return 0;
  }
 }

 return 1;
}
