
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_etm_trace_params {int dummy; } ;
struct cs_etm_decoder_params {scalar_t__ operation; } ;
struct cs_etm_decoder {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cs_etm_trace_params*,struct cs_etm_decoder*) ;
 int FUNC_1 (struct cs_etm_trace_params*,struct cs_etm_decoder*) ;

__attribute__((used)) static int
FUNC_2(struct cs_etm_decoder_params *VAR_2,
       struct cs_etm_trace_params *VAR_3,
       struct cs_etm_decoder *VAR_4)
{
 if (VAR_2->operation == VAR_1)
  return FUNC_1(VAR_3,
         VAR_4);
 else if (VAR_2->operation == VAR_0)
  return FUNC_0(VAR_3,
         VAR_4);

 return -1;
}
