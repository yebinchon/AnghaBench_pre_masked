
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct dccp_ackvec {scalar_t__ av_buf; int av_buf_head; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct dccp_ackvec *VAR_2, u16 VAR_3)
{
 u16 VAR_4 = FUNC_0(VAR_2->av_buf_head, 1),
     VAR_5 = VAR_0 - VAR_4;


 if (VAR_3 > VAR_5) {
  FUNC_1(VAR_2->av_buf + VAR_4, VAR_1, VAR_5);
  VAR_4 = 0;
  VAR_3 -= VAR_5;
 }
 if (VAR_3)
  FUNC_1(VAR_2->av_buf + VAR_4, VAR_1, VAR_3);
}
