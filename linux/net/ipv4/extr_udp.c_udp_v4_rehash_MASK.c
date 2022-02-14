
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sock {int dummy; } ;
struct TYPE_2__ {int inet_num; int inet_rcv_saddr; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;

void FUNC_4(struct sock *VAR_0)
{
 u16 VAR_1 = FUNC_1(FUNC_2(VAR_0),
       FUNC_0(VAR_0)->inet_rcv_saddr,
       FUNC_0(VAR_0)->inet_num);
 FUNC_3(VAR_0, VAR_1);
}
