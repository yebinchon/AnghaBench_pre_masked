
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dccp_ackvec {int av_records; scalar_t__ av_buf_tail; scalar_t__ av_buf_head; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct dccp_ackvec* FUNC_1 (int ,int const) ;

struct dccp_ackvec *FUNC_2(const gfp_t VAR_2)
{
 struct dccp_ackvec *VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (VAR_3 != ((void*)0)) {
  VAR_3->av_buf_head = VAR_3->av_buf_tail = VAR_0 - 1;
  FUNC_0(&VAR_3->av_records);
 }
 return VAR_3;
}
