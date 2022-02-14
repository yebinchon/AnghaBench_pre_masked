
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cs_etm_trace_params {int dummy; } ;
struct cs_etm_decoder_params {scalar_t__ frame_aligned; scalar_t__ hsyncs; scalar_t__ fsyncs; scalar_t__ formatted; int data; } ;
struct cs_etm_decoder {scalar_t__ dcd_tree; int prev_return; int data; } ;
typedef int ocsd_dcd_tree_src_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cs_etm_decoder_params*,struct cs_etm_trace_params*,struct cs_etm_decoder*) ;
 int FUNC_1 (struct cs_etm_decoder*) ;
 int FUNC_2 (struct cs_etm_decoder_params*,struct cs_etm_decoder*) ;
 int FUNC_3 (struct cs_etm_decoder_params*,struct cs_etm_decoder*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 struct cs_etm_decoder* FUNC_5 (int) ;

struct cs_etm_decoder *
FUNC_6(int VAR_7, struct cs_etm_decoder_params *VAR_8,
      struct cs_etm_trace_params VAR_9[])
{
 struct cs_etm_decoder *VAR_10;
 ocsd_dcd_tree_src_t VAR_11;
 u32 VAR_12;
 int VAR_13, VAR_14;

 if ((!VAR_9) || (!VAR_8))
  return ((void*)0);

 VAR_10 = FUNC_5(sizeof(*VAR_10));

 if (!VAR_10)
  return ((void*)0);

 VAR_10->data = VAR_8->data;
 VAR_10->prev_return = VAR_4;
 VAR_11 = (VAR_8->formatted ? VAR_5 :
      VAR_6);
 VAR_12 = 0;
 VAR_12 |= (VAR_8->fsyncs ? VAR_1 : 0);
 VAR_12 |= (VAR_8->hsyncs ? VAR_2 : 0);
 VAR_12 |= (VAR_8->frame_aligned ? VAR_0 : 0);





 VAR_12 |= VAR_3;


 VAR_10->dcd_tree = FUNC_4(VAR_11, VAR_12);

 if (VAR_10->dcd_tree == 0)
  goto err_free_decoder;


 VAR_14 = FUNC_2(VAR_8, VAR_10);
 if (VAR_14 != 0)
  goto err_free_decoder;


 FUNC_3(VAR_8, VAR_10);

 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  VAR_14 = FUNC_0(VAR_8,
        &VAR_9[VAR_13],
        VAR_10);
  if (VAR_14 != 0)
   goto err_free_decoder;
 }

 return VAR_10;

err_free_decoder:
 FUNC_1(VAR_10);
 return ((void*)0);
}
