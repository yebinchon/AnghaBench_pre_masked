
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_dm_hw_metadata {int dummy; } ;
struct TYPE_2__ {int (* hw_probe ) (struct sk_buff*,struct net_dm_hw_metadata const*) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct sk_buff*,struct net_dm_hw_metadata const*) ;

void FUNC_3(struct sk_buff *VAR_3,
        const struct net_dm_hw_metadata *VAR_4)
{
 FUNC_0();

 if (!VAR_0)
  goto out;

 VAR_2[VAR_1]->hw_probe(VAR_3, VAR_4);

out:
 FUNC_1();
}
