
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cs_etm_trace_params {int protocol; } ;
struct cs_etm_decoder {int dcd_tree; } ;
typedef int ocsd_etmv4_cfg ;
typedef int ocsd_etmv3_cfg ;





 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cs_etm_trace_params*,int *) ;
 int FUNC_1 (struct cs_etm_trace_params*,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,char const*,int ,void*,int *) ;
 scalar_t__ FUNC_3 (int ,int ,struct cs_etm_decoder*) ;

__attribute__((used)) static int FUNC_4(
     struct cs_etm_trace_params *VAR_5,
     struct cs_etm_decoder *VAR_6)
{
 const char *VAR_7;
 ocsd_etmv3_cfg VAR_8;
 ocsd_etmv4_cfg VAR_9;
 void *VAR_10;
 u8 VAR_11;

 switch (VAR_5->protocol) {
 case 130:
 case 128:
  FUNC_0(VAR_5, &VAR_8);
  VAR_7 = (VAR_5->protocol == 130) ?
       VAR_0 :
       VAR_2;
  VAR_10 = &VAR_8;
  break;
 case 129:
  FUNC_1(VAR_5, &VAR_9);
  VAR_7 = VAR_1;
  VAR_10 = &VAR_9;
  break;
 default:
  return -1;
 }

 if (FUNC_2(VAR_6->dcd_tree,
         VAR_7,
         VAR_3,
         VAR_10, &VAR_11))
  return -1;

 if (FUNC_3(VAR_6->dcd_tree,
           VAR_4,
           VAR_6))
  return -1;

 return 0;
}
