
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netlink_callback {long* args; TYPE_1__* skb; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int rhash_table; } ;
struct ila_net {TYPE_2__ xlat; } ;
struct ila_dump_iter {scalar_t__ skip; int rhiter; } ;
struct TYPE_3__ {int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ila_dump_iter* FUNC_0 (int,int ) ;
 struct ila_net* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (int *,int *) ;
 struct net* FUNC_3 (int ) ;

int FUNC_4(struct netlink_callback *VAR_3)
{
 struct net *VAR_4 = FUNC_3(VAR_3->skb->sk);
 struct ila_net *VAR_5 = FUNC_1(VAR_4, VAR_2);
 struct ila_dump_iter *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(&VAR_5->xlat.rhash_table, &VAR_6->rhiter);

 VAR_6->skip = 0;
 VAR_3->args[0] = (long)VAR_6;

 return 0;
}
