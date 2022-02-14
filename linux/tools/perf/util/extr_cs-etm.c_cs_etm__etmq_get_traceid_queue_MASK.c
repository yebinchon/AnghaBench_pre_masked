
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intlist {int dummy; } ;
struct int_node {void* priv; } ;
struct cs_etm_traceid_queue {int dummy; } ;
struct cs_etm_queue {struct cs_etm_traceid_queue** traceid_queues; struct intlist* traceid_queues_list; struct cs_etm_auxtrace* etm; } ;
struct cs_etm_auxtrace {scalar_t__ timeless_decoding; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cs_etm_queue*,struct cs_etm_traceid_queue*,int ) ;
 int FUNC_1 (struct cs_etm_traceid_queue*) ;
 struct int_node* FUNC_2 (struct intlist*,int ) ;
 struct int_node* FUNC_3 (struct intlist*,int ) ;
 int FUNC_4 (struct intlist*) ;
 int FUNC_5 (struct intlist*,struct int_node*) ;
 struct cs_etm_traceid_queue* FUNC_6 (int) ;
 int FUNC_7 (struct cs_etm_traceid_queue*,int ,int) ;
 struct cs_etm_traceid_queue** FUNC_8 (struct cs_etm_traceid_queue**,int,int) ;

__attribute__((used)) static struct cs_etm_traceid_queue
*FUNC_9(struct cs_etm_queue *VAR_1, u8 VAR_2)
{
 int VAR_3;
 struct int_node *VAR_4;
 struct intlist *VAR_5;
 struct cs_etm_traceid_queue *VAR_6, **VAR_7;
 struct cs_etm_auxtrace *VAR_8 = VAR_1->etm;

 if (VAR_8->timeless_decoding)
  VAR_2 = VAR_0;

 VAR_5 = VAR_1->traceid_queues_list;





 VAR_4 = FUNC_2(VAR_5, VAR_2);
 if (VAR_4) {
  VAR_3 = (int)(intptr_t)VAR_4->priv;
  return VAR_1->traceid_queues[VAR_3];
 }


 VAR_6 = FUNC_6(sizeof(*VAR_6));
 if (!VAR_6)
  return ((void*)0);

 FUNC_7(VAR_6, 0, sizeof(*VAR_6));


 VAR_3 = FUNC_4(VAR_5);

 VAR_4 = FUNC_3(VAR_5, VAR_2);
 if (!VAR_4)
  goto out_free;


 VAR_4->priv = (void *)(intptr_t)VAR_3;

 if (FUNC_0(VAR_1, VAR_6, VAR_2))
  goto out_free;


 VAR_7 = VAR_1->traceid_queues;
 VAR_7 = FUNC_8(VAR_7,
          VAR_3 + 1,
          sizeof(*VAR_7));





 if (!VAR_7)
  goto out_free;

 VAR_7[VAR_3] = VAR_6;
 VAR_1->traceid_queues = VAR_7;

 return VAR_1->traceid_queues[VAR_3];

out_free:




 FUNC_5(VAR_5, VAR_4);
 FUNC_1(VAR_6);

 return ((void*)0);
}
