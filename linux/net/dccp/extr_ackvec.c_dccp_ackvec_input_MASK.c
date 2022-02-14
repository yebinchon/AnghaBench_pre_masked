
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u64 ;
struct sk_buff {int dummy; } ;
struct dccp_ackvec {int* av_buf; int av_buf_head; void* av_buf_ackno; void* av_tail_ackno; } ;
typedef int s64 ;
typedef enum dccp_ackvec_states { ____Placeholder_dccp_ackvec_states } dccp_ackvec_states ;
struct TYPE_2__ {void* dccpd_seq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct dccp_ackvec*,int,void*,int) ;
 scalar_t__ FUNC_2 (struct dccp_ackvec*) ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (struct dccp_ackvec*,int,void*,int) ;
 int FUNC_6 (void*,void*) ;

void FUNC_7(struct dccp_ackvec *VAR_2, struct sk_buff *VAR_3)
{
 u64 VAR_4 = FUNC_0(VAR_3)->dccpd_seq;
 enum dccp_ackvec_states VAR_5 = VAR_1;

 if (FUNC_2(VAR_2)) {
  FUNC_1(VAR_2, 1, VAR_4, VAR_5);
  VAR_2->av_tail_ackno = VAR_4;

 } else {
  s64 VAR_6 = FUNC_6(VAR_2->av_buf_ackno, VAR_4);
  u8 *VAR_7 = VAR_2->av_buf + VAR_2->av_buf_head;

  if (VAR_6 == 1 &&
      FUNC_4(VAR_7) == VAR_5 &&
      FUNC_3(VAR_7) < VAR_0) {

   *VAR_7 += 1;
   VAR_2->av_buf_ackno = VAR_4;

  } else if (VAR_6 > 0) {
   FUNC_1(VAR_2, VAR_6, VAR_4, VAR_5);
  } else {
   FUNC_5(VAR_2, VAR_6, VAR_4, VAR_5);
  }
 }
}
