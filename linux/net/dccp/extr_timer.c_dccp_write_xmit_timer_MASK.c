
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sock {int dummy; } ;
struct TYPE_3__ {struct sock sk; } ;
struct TYPE_4__ {TYPE_1__ icsk_inet; } ;
struct dccp_sock {TYPE_2__ dccps_inet_connection; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 struct dccp_sock* VAR_1 ;
 struct dccp_sock* FUNC_1 (int ,struct timer_list*,int ) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct dccp_sock *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_0);
 struct sock *VAR_4 = &VAR_3->dccps_inet_connection.icsk_inet.sk;

 FUNC_0((unsigned long)VAR_4);
}
