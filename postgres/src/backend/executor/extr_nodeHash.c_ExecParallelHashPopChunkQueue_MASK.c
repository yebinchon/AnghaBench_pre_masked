
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int dsa_pointer ;
struct TYPE_10__ {int area; TYPE_2__* parallel_state; } ;
struct TYPE_7__ {int shared; } ;
struct TYPE_9__ {TYPE_1__ next; } ;
struct TYPE_8__ {int lock; int chunk_work_queue; } ;
typedef TYPE_2__ ParallelHashJoinState ;
typedef TYPE_3__* HashMemoryChunk ;
typedef TYPE_4__* HashJoinTable ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static HashMemoryChunk
FUNC_4(HashJoinTable VAR_1, dsa_pointer *VAR_2)
{
 ParallelHashJoinState *VAR_3 = VAR_1->parallel_state;
 HashMemoryChunk VAR_4;

 FUNC_1(&VAR_3->lock, VAR_0);
 if (FUNC_0(VAR_3->chunk_work_queue))
 {
  *VAR_2 = VAR_3->chunk_work_queue;
  VAR_4 = (HashMemoryChunk)
   FUNC_3(VAR_1->area, *VAR_2);
  VAR_3->chunk_work_queue = VAR_4->next.shared;
 }
 else
  VAR_4 = ((void*)0);
 FUNC_2(&VAR_3->lock);

 return VAR_4;
}
