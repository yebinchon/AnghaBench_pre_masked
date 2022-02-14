
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nci_dev {TYPE_1__* ops; } ;
typedef int __u16 ;
struct TYPE_2__ {int n_core_ops; int core_ops; } ;


 int FUNC_0 (struct nci_dev*,int ,struct sk_buff*,int ,int ) ;

int FUNC_1(struct nci_dev *VAR_0, __u16 VAR_1,
   struct sk_buff *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_0->ops->core_ops,
     VAR_0->ops->n_core_ops);
}
