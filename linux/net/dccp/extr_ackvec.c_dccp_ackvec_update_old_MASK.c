
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct dccp_ackvec {int av_buf_head; int av_buf_tail; scalar_t__* av_buf; } ;
typedef scalar_t__ s64 ;
typedef enum dccp_ackvec_states { ____Placeholder_dccp_ackvec_states } dccp_ackvec_states ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct dccp_ackvec*) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 int FUNC_4 (char*,unsigned long long,int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct dccp_ackvec *VAR_1, s64 VAR_2,
       u64 VAR_3, enum dccp_ackvec_states VAR_4)
{
 u16 VAR_5 = VAR_1->av_buf_head;

 FUNC_0(VAR_2 > 0);
 if (FUNC_5(FUNC_2(VAR_1)))
  return;

 do {
  u8 VAR_6 = FUNC_3(VAR_1->av_buf + VAR_5);

  if (VAR_2 + VAR_6 >= 0) {
   if (VAR_1->av_buf[VAR_5] == VAR_0)
    VAR_1->av_buf[VAR_5] = VAR_4;
   else
    FUNC_4("Not changing %llu state to %u\n",
           (unsigned long long)VAR_3, VAR_4);
   break;
  }

  VAR_2 += VAR_6 + 1;
  VAR_5 = FUNC_1(VAR_5, 1);

 } while (VAR_5 != VAR_1->av_buf_tail);
}
