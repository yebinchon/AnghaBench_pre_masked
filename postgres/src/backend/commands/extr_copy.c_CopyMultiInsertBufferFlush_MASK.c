
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64 ;
typedef int TupleTableSlot ;
struct TYPE_18__ {int nused; int * linenos; int ** slots; int bistate; TYPE_2__* resultRelInfo; } ;
struct TYPE_17__ {int ti_options; int mycid; TYPE_3__* estate; TYPE_4__* cstate; } ;
struct TYPE_16__ {int line_buf_valid; int cur_lineno; int transition_capture; } ;
struct TYPE_15__ {TYPE_2__* es_result_relation_info; } ;
struct TYPE_14__ {scalar_t__ ri_NumIndices; TYPE_1__* ri_TrigDesc; int ri_RelationDesc; } ;
struct TYPE_13__ {scalar_t__ trig_insert_new_table; scalar_t__ trig_insert_after_row; } ;
typedef TYPE_2__ ResultRelInfo ;
typedef int MemoryContext ;
typedef int List ;
typedef TYPE_3__ EState ;
typedef TYPE_4__* CopyState ;
typedef TYPE_5__ CopyMultiInsertInfo ;
typedef TYPE_6__ CopyMultiInsertBuffer ;
typedef int CommandId ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,TYPE_3__*,int,int *,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int * VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int **,int,int ,int,int ) ;

__attribute__((used)) static inline void
FUNC_7(CopyMultiInsertInfo *VAR_1,
         CopyMultiInsertBuffer *VAR_2)
{
 MemoryContext VAR_3;
 int VAR_4;
 uint64 VAR_5;
 CopyState VAR_6 = VAR_1->cstate;
 EState *VAR_7 = VAR_1->estate;
 CommandId VAR_8 = VAR_1->mycid;
 int VAR_9 = VAR_1->ti_options;
 bool VAR_10 = VAR_6->line_buf_valid;
 int VAR_11 = VAR_2->nused;
 ResultRelInfo *VAR_12 = VAR_2->resultRelInfo;
 TupleTableSlot **VAR_13 = VAR_2->slots;


 VAR_7->es_result_relation_info = VAR_12;





 VAR_6->line_buf_valid = 0;
 VAR_5 = VAR_6->cur_lineno;





 VAR_3 = FUNC_4(FUNC_3(VAR_7));
 FUNC_6(VAR_12->ri_RelationDesc,
        VAR_13,
        VAR_11,
        VAR_8,
        VAR_9,
        VAR_2->bistate);
 FUNC_4(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_11; VAR_4++)
 {




  if (VAR_12->ri_NumIndices > 0)
  {
   List *VAR_14;

   VAR_6->cur_lineno = VAR_2->linenos[VAR_4];
   VAR_14 =
    FUNC_2(VAR_2->slots[VAR_4], VAR_7, 0, ((void*)0),
           VAR_0);
   FUNC_0(VAR_7, VAR_12,
         VAR_13[VAR_4], VAR_14,
         VAR_6->transition_capture);
   FUNC_5(VAR_14);
  }





  else if (VAR_12->ri_TrigDesc != ((void*)0) &&
     (VAR_12->ri_TrigDesc->trig_insert_after_row ||
      VAR_12->ri_TrigDesc->trig_insert_new_table))
  {
   VAR_6->cur_lineno = VAR_2->linenos[VAR_4];
   FUNC_0(VAR_7, VAR_12,
         VAR_13[VAR_4], VAR_0, VAR_6->transition_capture);
  }

  FUNC_1(VAR_13[VAR_4]);
 }


 VAR_2->nused = 0;


 VAR_6->line_buf_valid = VAR_10;
 VAR_6->cur_lineno = VAR_5;
}
