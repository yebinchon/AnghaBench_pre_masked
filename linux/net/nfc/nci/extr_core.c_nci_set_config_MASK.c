
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_set_config_param {size_t len; int * val; int id; } ;
struct nci_dev {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (struct nci_dev*,int ,unsigned long,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

int FUNC_2(struct nci_dev *VAR_2, __u8 VAR_3, size_t VAR_4, __u8 *VAR_5)
{
 struct nci_set_config_param VAR_6;

 if (!VAR_5 || !VAR_4)
  return 0;

 VAR_6.id = VAR_3;
 VAR_6.len = VAR_4;
 VAR_6.val = VAR_5;

 return FUNC_0(VAR_2, VAR_1, (unsigned long)&VAR_6,
        FUNC_1(VAR_0));
}
