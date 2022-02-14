
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freq_constraints {int max_freq; int min_freq; } ;
typedef int s32 ;
typedef enum freq_qos_req_type { ____Placeholder_freq_qos_req_type } freq_qos_req_type ;



 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct freq_constraints*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

s32 FUNC_3(struct freq_constraints *VAR_2,
   enum freq_qos_req_type VAR_3)
{
 s32 VAR_4;

 switch (VAR_3) {
 case 128:
  VAR_4 = FUNC_0(VAR_2) ?
   VAR_1 :
   FUNC_2(&VAR_2->min_freq);
  break;
 case 129:
  VAR_4 = FUNC_0(VAR_2) ?
   VAR_0 :
   FUNC_2(&VAR_2->max_freq);
  break;
 default:
  FUNC_1(1);
  VAR_4 = 0;
 }

 return VAR_4;
}
