
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int * data; } ;
struct nci_dev {int dummy; } ;
typedef int __u8 ;


 int FUNC_0 (struct nci_dev*,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct nci_dev *VAR_0,
           struct sk_buff *VAR_1)
{
 __u8 VAR_2 = VAR_1->data[0];

 FUNC_1("status 0x%x\n", VAR_2);

 FUNC_0(VAR_0, VAR_2);
}
