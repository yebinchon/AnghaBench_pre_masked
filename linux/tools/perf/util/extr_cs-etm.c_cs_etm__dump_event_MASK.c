
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cs_etm_trace_params {int dummy; } ;
struct cs_etm_decoder_params {int dummy; } ;
struct cs_etm_decoder {int dummy; } ;
struct cs_etm_auxtrace {int num_cpu; } ;
struct auxtrace_buffer {size_t size; scalar_t__ data; int offset; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char const*,char*,size_t) ;
 scalar_t__ FUNC_1 (struct cs_etm_decoder_params*,int *,int ) ;
 scalar_t__ FUNC_2 (struct cs_etm_trace_params*,struct cs_etm_auxtrace*) ;
 int FUNC_3 (struct cs_etm_decoder*) ;
 struct cs_etm_decoder* FUNC_4 (int,struct cs_etm_decoder_params*,struct cs_etm_trace_params*) ;
 int FUNC_5 (struct cs_etm_decoder*,int ,int *,size_t,size_t*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_2 ;
 struct cs_etm_trace_params* FUNC_7 (int) ;
 int FUNC_8 (struct cs_etm_trace_params**) ;

__attribute__((used)) static void FUNC_9(struct cs_etm_auxtrace *VAR_3,
          struct auxtrace_buffer *VAR_4)
{
 int VAR_5;
 const char *VAR_6 = VAR_1;
 struct cs_etm_decoder_params VAR_7;
 struct cs_etm_trace_params *VAR_8;
 struct cs_etm_decoder *VAR_9;
 size_t VAR_10 = 0;

 FUNC_6(VAR_2, "\n");
 FUNC_0(VAR_2, VAR_6,
       ". ... CoreSight ETM Trace data: size %zu bytes\n",
       VAR_4->size);


 VAR_8 = FUNC_7(sizeof(*VAR_8) * VAR_3->num_cpu);

 if (!VAR_8)
  return;

 if (FUNC_2(VAR_8, VAR_3))
  goto out_free;


 if (FUNC_1(&VAR_7, ((void*)0),
     VAR_0))
  goto out_free;

 VAR_9 = FUNC_4(VAR_3->num_cpu, &VAR_7, VAR_8);

 if (!VAR_9)
  goto out_free;
 do {
  size_t VAR_11;

  VAR_5 = FUNC_5(
    VAR_9, VAR_4->offset,
    &((u8 *)VAR_4->data)[VAR_10],
    VAR_4->size - VAR_10, &VAR_11);
  if (VAR_5)
   break;

  VAR_10 += VAR_11;
 } while (VAR_10 < VAR_4->size);

 FUNC_3(VAR_9);

out_free:
 FUNC_8(&VAR_8);
}
