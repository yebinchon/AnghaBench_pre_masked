
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ seq; } ;
struct TYPE_5__ {TYPE_1__* duplicate_sack; } ;
struct TYPE_4__ {scalar_t__ start_seq; } ;


 TYPE_3__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct sock*) ;
 TYPE_2__* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, const struct sk_buff *VAR_1)
{





 if (FUNC_0(VAR_1)->seq == FUNC_2(VAR_0)->duplicate_sack[0].start_seq)
  FUNC_1(VAR_0);
}
