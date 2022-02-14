
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct cs_etm_trace_params {int dummy; } ;
struct cs_etm_auxtrace {int num_cpu; int** metadata; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct cs_etm_trace_params*,struct cs_etm_auxtrace*,int,int) ;
 int FUNC_1 (struct cs_etm_trace_params*,struct cs_etm_auxtrace*,int) ;

__attribute__((used)) static int FUNC_2(struct cs_etm_trace_params *VAR_3,
         struct cs_etm_auxtrace *VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 u64 VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_cpu; VAR_5++) {
  VAR_7 = VAR_4->metadata[VAR_5][VAR_1];

  switch (VAR_7) {
  case 129:
   VAR_6 = VAR_4->metadata[VAR_5][VAR_0];
   FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
   break;
  case 128:
   FUNC_1(VAR_3, VAR_4, VAR_5);
   break;
  default:
   return -VAR_2;
  }
 }

 return 0;
}
