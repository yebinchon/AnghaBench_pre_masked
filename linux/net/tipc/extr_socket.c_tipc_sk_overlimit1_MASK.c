
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int len; } ;
struct sock {TYPE_1__ sk_backlog; } ;
struct sk_buff {int dummy; } ;
typedef int atomic_t ;
struct TYPE_4__ {int dupl_rcvcnt; } ;


 unsigned int FUNC_0 (int *) ;
 unsigned int FUNC_1 (struct sock*,struct sk_buff*) ;
 unsigned int FUNC_2 (struct sock*) ;
 TYPE_2__* FUNC_3 (struct sock*) ;

bool FUNC_4(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 atomic_t *VAR_2 = &FUNC_3(VAR_0)->dupl_rcvcnt;
 unsigned int VAR_3 = FUNC_1(VAR_0, VAR_1) + FUNC_0(VAR_2);
 unsigned int VAR_4 = VAR_0->sk_backlog.len + FUNC_2(VAR_0);

 return (VAR_4 > VAR_3 * 90 / 100);
}
