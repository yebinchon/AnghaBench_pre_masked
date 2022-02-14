
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* pNext; int table; TYPE_4__* const pTabSchema; } ;
typedef TYPE_2__ Trigger ;
struct TYPE_13__ {TYPE_2__* pTrigger; int zName; TYPE_4__* const pSchema; } ;
typedef TYPE_3__ Table ;
struct TYPE_16__ {TYPE_1__* aDb; } ;
struct TYPE_15__ {TYPE_9__* db; scalar_t__ disableTriggers; } ;
struct TYPE_14__ {int trigHash; } ;
struct TYPE_11__ {TYPE_4__* pSchema; } ;
typedef TYPE_4__ Schema ;
typedef TYPE_5__ Parse ;
typedef int HashElem ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_9__*,int ,TYPE_4__* const) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

Trigger *FUNC_6(Parse *VAR_0, Table *VAR_1){
  Schema * const VAR_2 = VAR_0->db->aDb[1].pSchema;
  Trigger *VAR_3 = 0;

  if( VAR_0->disableTriggers ){
    return 0;
  }

  if( VAR_2!=VAR_1->pSchema ){
    HashElem *VAR_4;
    FUNC_0( FUNC_1(VAR_0->db, 0, VAR_2) );
    for(VAR_4=FUNC_4(&VAR_2->trigHash); VAR_4; VAR_4=FUNC_5(VAR_4)){
      Trigger *VAR_5 = (Trigger *)FUNC_3(VAR_4);
      if( VAR_5->pTabSchema==VAR_1->pSchema
       && 0==FUNC_2(VAR_5->table, VAR_1->zName)
      ){
        VAR_5->pNext = (VAR_3 ? VAR_3 : VAR_1->pTrigger);
        VAR_3 = VAR_5;
      }
    }
  }

  return (VAR_3 ? VAR_3 : VAR_1->pTrigger);
}
