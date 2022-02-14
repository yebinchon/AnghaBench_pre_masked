
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int num_workers; } ;
struct TYPE_8__ {int plan; } ;
struct TYPE_10__ {int nreaders; int need_to_scan_locally; int gm_initialized; int gm_heap; int ** gm_slots; TYPE_2__* gm_tuple_buffers; TYPE_1__ ps; } ;
struct TYPE_9__ {int done; scalar_t__ readCounter; scalar_t__ nTuples; } ;
typedef TYPE_3__ GatherMergeState ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_7__* FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int,int) ;
 int FUNC_10 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_11(GatherMergeState *VAR_1)
{
 int VAR_2 = VAR_1->nreaders;
 bool VAR_3 = 1;
 int VAR_4;


 FUNC_0(VAR_2 <= FUNC_8(VAR_0, VAR_1->ps.plan)->num_workers);


 VAR_1->gm_slots[0] = ((void*)0);


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {

  VAR_1->gm_tuple_buffers[VAR_4].nTuples = 0;
  VAR_1->gm_tuple_buffers[VAR_4].readCounter = 0;

  VAR_1->gm_tuple_buffers[VAR_4].done = 0;

  FUNC_2(VAR_1->gm_slots[VAR_4 + 1]);
 }


 FUNC_7(VAR_1->gm_heap);
reread:
 for (VAR_4 = 0; VAR_4 <= VAR_2; VAR_4++)
 {
  FUNC_1();


  if ((VAR_4 == 0) ? VAR_1->need_to_scan_locally :
   !VAR_1->gm_tuple_buffers[VAR_4 - 1].done)
  {
   if (FUNC_4(VAR_1->gm_slots[VAR_4]))
   {

    if (FUNC_9(VAR_1, VAR_4, VAR_3))
     FUNC_5(VAR_1->gm_heap,
            FUNC_3(VAR_4));
   }
   else
   {




    FUNC_10(VAR_1, VAR_4);
   }
  }
 }


 for (VAR_4 = 1; VAR_4 <= VAR_2; VAR_4++)
 {
  if (!VAR_1->gm_tuple_buffers[VAR_4 - 1].done &&
   FUNC_4(VAR_1->gm_slots[VAR_4]))
  {
   VAR_3 = 0;
   goto reread;
  }
 }


 FUNC_6(VAR_1->gm_heap);

 VAR_1->gm_initialized = 1;
}
