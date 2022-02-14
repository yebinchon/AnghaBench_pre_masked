
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tcp_fastopen_context {int dummy; } ;
struct TYPE_2__ {int tcp_fastopen_ctx; } ;
struct net {TYPE_1__ ipv4; } ;
typedef int key ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct tcp_fastopen_context* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct net*,int *,int *,int *) ;

void FUNC_5(struct net *VAR_1)
{
 u8 VAR_2[VAR_0];
 struct tcp_fastopen_context *VAR_3;

 FUNC_2();
 VAR_3 = FUNC_1(VAR_1->ipv4.tcp_fastopen_ctx);
 if (VAR_3) {
  FUNC_3();
  return;
 }
 FUNC_3();







 FUNC_0(VAR_2, sizeof(VAR_2));
 FUNC_4(VAR_1, ((void*)0), VAR_2, ((void*)0));
}
