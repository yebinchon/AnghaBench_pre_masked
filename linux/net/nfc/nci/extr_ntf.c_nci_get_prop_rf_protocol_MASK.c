
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nci_dev {TYPE_1__* ops; } ;
typedef int __u8 ;
typedef int __u32 ;
struct TYPE_2__ {int (* get_rfprotocol ) (struct nci_dev*,int ) ;} ;


 int FUNC_0 (struct nci_dev*,int ) ;

__attribute__((used)) static __u32 FUNC_1(struct nci_dev *VAR_0, __u8 VAR_1)
{
 if (VAR_0->ops->get_rfprotocol)
  return VAR_0->ops->get_rfprotocol(VAR_0, VAR_1);
 return 0;
}
