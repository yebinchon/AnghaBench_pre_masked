
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct request_sock {int rsk_listener; } ;
struct net {int dummy; } ;
struct TYPE_2__ {scalar_t__ snt_isn; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int ,struct request_sock*) ;
 struct request_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct request_sock*) ;
 struct net* FUNC_4 (struct sock*) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (struct request_sock*) ;

void FUNC_7(struct sock *VAR_1, u32 VAR_2, bool VAR_3)
{
 struct request_sock *VAR_4 = FUNC_2(VAR_1);
 struct net *VAR_5 = FUNC_4(VAR_1);




 if (VAR_2 != FUNC_6(VAR_4)->snt_isn) {
  FUNC_0(VAR_5, VAR_0);
 } else if (VAR_3) {






  FUNC_1(VAR_4->rsk_listener, VAR_4);
  FUNC_5(VAR_4->rsk_listener);
 }
 FUNC_3(VAR_4);
}
