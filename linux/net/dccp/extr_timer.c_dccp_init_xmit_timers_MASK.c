
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dccp_sock {int dccps_xmit_timer; int dccps_xmitlet; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dccp_sock* FUNC_0 (struct sock*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sock*,int *,int *,int *) ;
 int FUNC_2 (int *,int ,unsigned long) ;
 int FUNC_3 (int *,int ,int ) ;

void FUNC_4(struct sock *VAR_5)
{
 struct dccp_sock *VAR_6 = FUNC_0(VAR_5);

 FUNC_2(&VAR_6->dccps_xmitlet, VAR_4, (unsigned long)VAR_5);
 FUNC_3(&VAR_6->dccps_xmit_timer, VAR_3, 0);
 FUNC_1(VAR_5, &VAR_2, &VAR_0,
      &VAR_1);
}
