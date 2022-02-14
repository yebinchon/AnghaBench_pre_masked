
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int rt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int *,struct sock*,struct sk_buff*) ;
 int FUNC_2 (struct sock*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3(struct sock *VAR_4, struct sk_buff *VAR_5)
{

 if (FUNC_0(VAR_5)->rt_flags & (VAR_0 | VAR_1))
  goto drop;

 return FUNC_1(&VAR_3,
    &VAR_2, VAR_4, VAR_5);

drop:
 FUNC_2(VAR_4);
 return 0;
}
