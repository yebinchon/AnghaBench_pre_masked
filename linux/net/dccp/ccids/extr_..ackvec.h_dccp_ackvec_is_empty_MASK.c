
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dccp_ackvec {scalar_t__ av_overflow; scalar_t__ av_buf_head; scalar_t__ av_buf_tail; } ;



__attribute__((used)) static inline bool FUNC_0(const struct dccp_ackvec *VAR_0)
{
 return VAR_0->av_overflow == 0 && VAR_0->av_buf_head == VAR_0->av_buf_tail;
}
