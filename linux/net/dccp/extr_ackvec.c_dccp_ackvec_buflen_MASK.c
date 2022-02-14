
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dccp_ackvec {int av_buf_head; int av_buf_tail; int av_overflow; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

u16 FUNC_2(const struct dccp_ackvec *VAR_1)
{
 if (FUNC_1(VAR_1->av_overflow))
  return VAR_0;
 return FUNC_0(VAR_1->av_buf_tail, VAR_1->av_buf_head);
}
