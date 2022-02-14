
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct dctcp {int loss_cwnd; } ;
struct TYPE_2__ {int snd_cwnd; } ;


 struct dctcp* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (struct sock*) ;

__attribute__((used)) static u32 FUNC_3(struct sock *VAR_0)
{
 const struct dctcp *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(FUNC_2(VAR_0)->snd_cwnd, VAR_1->loss_cwnd);
}
