
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_etm_trace_params {int protocol; } ;
struct cs_etm_decoder {int dummy; } ;
typedef int ocsd_etmv4_cfg ;
typedef int ocsd_etmv3_cfg ;





 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (struct cs_etm_decoder*,char const*,void*) ;
 int FUNC_1 (struct cs_etm_trace_params*,int *) ;
 int FUNC_2 (struct cs_etm_trace_params*,int *) ;

__attribute__((used)) static int
FUNC_3(struct cs_etm_trace_params *VAR_3,
       struct cs_etm_decoder *VAR_4)
{
 const char *VAR_5;
 ocsd_etmv3_cfg VAR_6;
 ocsd_etmv4_cfg VAR_7;
 void *VAR_8;

 switch (VAR_3->protocol) {
 case 130:
 case 128:
  FUNC_1(VAR_3, &VAR_6);
  VAR_5 = (VAR_3->protocol == 130) ?
       VAR_0 :
       VAR_2;
  VAR_8 = &VAR_6;
  break;
 case 129:
  FUNC_2(VAR_3, &VAR_7);
  VAR_5 = VAR_1;
  VAR_8 = &VAR_7;
  break;
 default:
  return -1;
 }

 return FUNC_0(VAR_4,
           VAR_5,
           VAR_8);
}
