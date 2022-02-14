
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cs_etm_trace_params {int dummy; } ;
struct cs_etm_queue {int traceid_queues_list; int decoder; } ;
struct cs_etm_decoder_params {int dummy; } ;
struct cs_etm_auxtrace {int num_cpu; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cs_etm_decoder_params*,struct cs_etm_queue*,int ) ;
 scalar_t__ FUNC_1 (struct cs_etm_trace_params*,struct cs_etm_auxtrace*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,struct cs_etm_decoder_params*,struct cs_etm_trace_params*) ;
 int FUNC_5 (struct cs_etm_queue*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (struct cs_etm_trace_params**) ;

__attribute__((used)) static struct cs_etm_queue *FUNC_10(struct cs_etm_auxtrace *VAR_2)
{
 struct cs_etm_decoder_params VAR_3;
 struct cs_etm_trace_params *VAR_4 = ((void*)0);
 struct cs_etm_queue *VAR_5;

 VAR_5 = FUNC_8(sizeof(*VAR_5));
 if (!VAR_5)
  return ((void*)0);

 VAR_5->traceid_queues_list = FUNC_7(((void*)0));
 if (!VAR_5->traceid_queues_list)
  goto out_free;


 VAR_4 = FUNC_8(sizeof(*VAR_4) * VAR_2->num_cpu);

 if (!VAR_4)
  goto out_free;

 if (FUNC_1(VAR_4, VAR_2))
  goto out_free;


 if (FUNC_0(&VAR_3, VAR_5,
     VAR_0))
  goto out_free;

 VAR_5->decoder = FUNC_4(VAR_2->num_cpu, &VAR_3, VAR_4);

 if (!VAR_5->decoder)
  goto out_free;





 if (FUNC_2(VAR_5->decoder,
           0x0L, ((u64) -1L),
           VAR_1))
  goto out_free_decoder;

 FUNC_9(&VAR_4);
 return VAR_5;

out_free_decoder:
 FUNC_3(VAR_5->decoder);
out_free:
 FUNC_6(VAR_5->traceid_queues_list);
 FUNC_5(VAR_5);

 return ((void*)0);
}
