
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct inet_connection_sock {TYPE_1__* icsk_ca_ops; } ;
struct TYPE_4__ {int snd_cwnd_stamp; } ;
struct TYPE_3__ {int (* cong_avoid ) (struct sock*,int ,int ) ;} ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ,int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1, u32 VAR_2, u32 VAR_3)
{
 const struct inet_connection_sock *VAR_4 = FUNC_0(VAR_1);

 VAR_4->icsk_ca_ops->cong_avoid(VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_1)->snd_cwnd_stamp = VAR_0;
}
