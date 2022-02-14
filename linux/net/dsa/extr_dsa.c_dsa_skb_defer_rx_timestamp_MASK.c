
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct dsa_switch {TYPE_2__* ops; } ;
struct dsa_slave_priv {TYPE_1__* dp; } ;
struct TYPE_4__ {int (* port_rxtstamp ) (struct dsa_switch*,int ,struct sk_buff*,unsigned int) ;} ;
struct TYPE_3__ {int index; struct dsa_switch* ds; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct sk_buff*,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_2 (int (*) (struct dsa_switch*,int ,struct sk_buff*,unsigned int)) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct dsa_switch*,int ,struct sk_buff*,unsigned int) ;

__attribute__((used)) static bool FUNC_6(struct dsa_slave_priv *VAR_2,
           struct sk_buff *VAR_3)
{
 struct dsa_switch *VAR_4 = VAR_2->dp->ds;
 unsigned int VAR_5;

 if (FUNC_4(VAR_3) < VAR_0)
  return 0;

 FUNC_1(VAR_3, VAR_0);

 VAR_5 = FUNC_3(VAR_3);

 FUNC_0(VAR_3, VAR_0);

 if (VAR_5 == VAR_1)
  return 0;

 if (FUNC_2(VAR_4->ops->port_rxtstamp))
  return VAR_4->ops->port_rxtstamp(VAR_4, VAR_2->dp->index, VAR_3, VAR_5);

 return 0;
}
