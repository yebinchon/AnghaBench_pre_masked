
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct cs_etm_traceid_queue {int dummy; } ;
struct cs_etm_queue {int dummy; } ;
struct TYPE_7__ {TYPE_1__* heap_array; int heap_cnt; } ;
struct TYPE_6__ {struct auxtrace_queue* queue_array; } ;
struct cs_etm_auxtrace {TYPE_3__ heap; TYPE_2__ queues; } ;
struct auxtrace_queue {struct cs_etm_queue* priv; } ;
struct TYPE_5__ {unsigned int queue_nr; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (TYPE_3__*,unsigned int,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct cs_etm_queue*) ;
 int FUNC_6 (struct cs_etm_queue*) ;
 int FUNC_7 (struct cs_etm_queue*,int *) ;
 struct cs_etm_traceid_queue* FUNC_8 (struct cs_etm_queue*,int ) ;
 int FUNC_9 (struct cs_etm_queue*) ;
 int FUNC_10 (struct cs_etm_queue*,struct cs_etm_traceid_queue*) ;

__attribute__((used)) static int FUNC_11(struct cs_etm_auxtrace *VAR_1)
{
 int VAR_2 = 0;
 unsigned int VAR_3, VAR_4;
 u8 VAR_5;
 u64 VAR_6;
 struct auxtrace_queue *VAR_7;
 struct cs_etm_queue *VAR_8;
 struct cs_etm_traceid_queue *VAR_9;

 while (1) {
  if (!VAR_1->heap.heap_cnt)
   goto out;


  VAR_3 = VAR_1->heap.heap_array[0].queue_nr;
  VAR_4 = FUNC_1(VAR_3);
  VAR_5 = FUNC_2(VAR_3);
  VAR_7 = &VAR_1->queues.queue_array[VAR_4];
  VAR_8 = VAR_7->priv;





  FUNC_4(&VAR_1->heap);

  VAR_9 = FUNC_8(VAR_8, VAR_5);
  if (!VAR_9) {





   VAR_2 = -VAR_0;
   goto out;
  }





  VAR_2 = FUNC_10(VAR_8, VAR_9);
  if (VAR_2 < 0)
   goto out;






refetch:
  VAR_2 = FUNC_9(VAR_8);
  if (VAR_2 < 0)
   goto out;





  if (!VAR_2)
   continue;

  VAR_2 = FUNC_6(VAR_8);
  if (VAR_2)
   goto out;

  VAR_6 = FUNC_7(VAR_8, &VAR_5);

  if (!VAR_6) {
   FUNC_5(VAR_8);


   goto refetch;
  }







  VAR_3 = FUNC_0(VAR_4, VAR_5);
  VAR_2 = FUNC_3(&VAR_1->heap, VAR_3, VAR_6);
 }

out:
 return VAR_2;
}
