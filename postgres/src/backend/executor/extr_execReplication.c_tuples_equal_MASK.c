
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {int fn_oid; } ;
struct TYPE_12__ {TYPE_10__ eq_opr_finfo; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_13__ {scalar_t__* tts_isnull; int * tts_values; TYPE_9__* tts_tupleDescriptor; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_15__ {int natts; } ;
struct TYPE_14__ {int attcollation; int atttypid; } ;
typedef TYPE_3__* Form_pg_attribute ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_10__*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 TYPE_3__* FUNC_4 (TYPE_9__*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_11(TupleTableSlot *VAR_3, TupleTableSlot *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_3->tts_tupleDescriptor->natts ==
     VAR_4->tts_tupleDescriptor->natts);

 FUNC_10(VAR_3);
 FUNC_10(VAR_4);


 for (VAR_5 = 0; VAR_5 < VAR_3->tts_tupleDescriptor->natts; VAR_5++)
 {
  Form_pg_attribute VAR_6;
  TypeCacheEntry *VAR_7;





  if (VAR_3->tts_isnull[VAR_5] != VAR_4->tts_isnull[VAR_5])
   return 0;




  if (VAR_3->tts_isnull[VAR_5] || VAR_4->tts_isnull[VAR_5])
   continue;

  VAR_6 = FUNC_4(VAR_3->tts_tupleDescriptor, VAR_5);

  VAR_7 = FUNC_9(VAR_6->atttypid, VAR_2);
  if (!FUNC_3(VAR_7->eq_opr_finfo.fn_oid))
   FUNC_5(VAR_1,
     (FUNC_6(VAR_0),
      FUNC_7("could not identify an equality operator for type %s",
       FUNC_8(VAR_6->atttypid))));

  if (!FUNC_1(FUNC_2(&VAR_7->eq_opr_finfo,
           VAR_6->attcollation,
           VAR_3->tts_values[VAR_5],
           VAR_4->tts_values[VAR_5])))
   return 0;
 }

 return 1;
}
