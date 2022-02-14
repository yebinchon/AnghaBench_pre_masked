
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sock {int dummy; } ;
struct request_sock {int rsk_listener; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int dreq_gss; int dreq_iss; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_1__* FUNC_2 (struct request_sock*) ;
 int FUNC_3 (int ,struct request_sock*) ;
 struct request_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct request_sock*) ;
 struct net* FUNC_6 (struct sock*) ;

void FUNC_7(struct sock *VAR_1, u64 VAR_2)
 {
 struct request_sock *VAR_3 = FUNC_4(VAR_1);
 struct net *VAR_4 = FUNC_6(VAR_1);





 if (!FUNC_1(VAR_2, FUNC_2(VAR_3)->dreq_iss, FUNC_2(VAR_3)->dreq_gss)) {
  FUNC_0(VAR_4, VAR_0);
 } else {






  FUNC_3(VAR_3->rsk_listener, VAR_3);
 }
 FUNC_5(VAR_3);
}
