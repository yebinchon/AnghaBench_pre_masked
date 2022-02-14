
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {TYPE_4__* state; } ;
struct TYPE_16__ {TYPE_10__ ps; } ;
struct TYPE_19__ {scalar_t__ aggstrategy; int numtrans; int num_hashes; int aggsplit; TYPE_6__* hashcontext; TYPE_5__ ss; TYPE_7__* perhash; TYPE_1__* tmpcontext; } ;
struct TYPE_18__ {TYPE_3__* aggnode; int hashfunctions; int eqfuncoids; int hashGrpColIdxHash; int numCols; TYPE_2__* hashslot; scalar_t__ hashtable; } ;
struct TYPE_17__ {int ecxt_per_tuple_memory; } ;
struct TYPE_15__ {int es_query_cxt; } ;
struct TYPE_14__ {scalar_t__ numGroups; int grpCollations; } ;
struct TYPE_13__ {int tts_tupleDescriptor; } ;
struct TYPE_12__ {int ecxt_per_tuple_memory; } ;
typedef int Size ;
typedef int MemoryContext ;
typedef TYPE_7__* AggStatePerHash ;
typedef int AggStatePerGroupData ;
typedef TYPE_8__ AggState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_10__*,int ,int ,int ,int ,int ,int ,scalar_t__,int,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(AggState *VAR_2)
{
 MemoryContext VAR_3 = VAR_2->tmpcontext->ecxt_per_tuple_memory;
 Size VAR_4;
 int VAR_5;

 FUNC_0(VAR_2->aggstrategy == VAR_0 || VAR_2->aggstrategy == VAR_1);

 VAR_4 = VAR_2->numtrans * sizeof(AggStatePerGroupData);

 for (VAR_5 = 0; VAR_5 < VAR_2->num_hashes; ++VAR_5)
 {
  AggStatePerHash VAR_6 = &VAR_2->perhash[VAR_5];

  FUNC_0(VAR_6->aggnode->numGroups > 0);

  if (VAR_6->hashtable)
   FUNC_3(VAR_6->hashtable);
  else
   VAR_6->hashtable = FUNC_1(&VAR_2->ss.ps,
              VAR_6->hashslot->tts_tupleDescriptor,
              VAR_6->numCols,
              VAR_6->hashGrpColIdxHash,
              VAR_6->eqfuncoids,
              VAR_6->hashfunctions,
              VAR_6->aggnode->grpCollations,
              VAR_6->aggnode->numGroups,
              VAR_4,
              VAR_2->ss.ps.state->es_query_cxt,
              VAR_2->hashcontext->ecxt_per_tuple_memory,
              VAR_3,
              FUNC_2(VAR_2->aggsplit));
 }
}
