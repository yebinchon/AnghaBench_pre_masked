
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nci_driver_ops {int (* ntf ) (struct nci_dev*,struct sk_buff*) ;} ;
struct nci_dev {int dummy; } ;
typedef int __u16 ;


 int VAR_0 ;
 struct nci_driver_ops* FUNC_0 (struct nci_driver_ops*,size_t,int ) ;
 int FUNC_1 (struct nci_dev*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct nci_dev *VAR_1, __u16 VAR_2,
        struct sk_buff *VAR_3, struct nci_driver_ops *VAR_4,
        size_t VAR_5)
{
 struct nci_driver_ops *VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_2);
 if (!VAR_6 || !VAR_6->ntf)
  return -VAR_0;

 return VAR_6->ntf(VAR_1, VAR_3);
}
