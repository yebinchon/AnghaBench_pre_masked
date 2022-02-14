
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct dsa_switch {TYPE_2__* ops; } ;
struct dsa_slave_priv {TYPE_1__* dp; } ;
struct TYPE_6__ {struct sk_buff* clone; } ;
struct TYPE_5__ {scalar_t__ (* port_txtstamp ) (struct dsa_switch*,int ,struct sk_buff*,unsigned int) ;} ;
struct TYPE_4__ {int index; struct dsa_switch* ds; } ;


 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 unsigned int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct dsa_switch*,int ,struct sk_buff*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct dsa_slave_priv *VAR_1,
     struct sk_buff *VAR_2)
{
 struct dsa_switch *VAR_3 = VAR_1->dp->ds;
 struct sk_buff *VAR_4;
 unsigned int VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 == VAR_0)
  return;

 if (!VAR_3->ops->port_txtstamp)
  return;

 VAR_4 = FUNC_3(VAR_2);
 if (!VAR_4)
  return;

 FUNC_0(VAR_2)->clone = VAR_4;

 if (VAR_3->ops->port_txtstamp(VAR_3, VAR_1->dp->index, VAR_4, VAR_5))
  return;

 FUNC_1(VAR_4);
}
