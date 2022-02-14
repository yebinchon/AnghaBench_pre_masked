
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct flowi4 {int flowi4_flags; scalar_t__ saddr; scalar_t__ flowi4_oif; } ;
struct fib_result {scalar_t__ type; TYPE_1__* table; int prefixlen; int fi; } ;
struct TYPE_2__ {int tb_num_default; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net*,struct flowi4*,struct sk_buff const*,int *) ;
 scalar_t__ FUNC_2 (struct net*,struct fib_result*) ;
 int FUNC_3 (struct flowi4*,struct fib_result*) ;
 int FUNC_4 (struct fib_result*,int) ;

void FUNC_5(struct net *VAR_2, struct fib_result *VAR_3,
       struct flowi4 *VAR_4, const struct sk_buff *VAR_5)
{
 if (VAR_4->flowi4_oif && !(VAR_4->flowi4_flags & VAR_0))
  goto check_saddr;
 if (!VAR_3->prefixlen &&
     VAR_3->table->tb_num_default > 1 &&
     VAR_3->type == VAR_1)
  FUNC_3(VAR_4, VAR_3);

check_saddr:
 if (!VAR_4->saddr)
  VAR_4->saddr = FUNC_2(VAR_2, VAR_3);
}
