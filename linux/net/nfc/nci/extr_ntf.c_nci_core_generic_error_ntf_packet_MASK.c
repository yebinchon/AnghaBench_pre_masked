
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int * data; } ;
struct nci_dev {int state; } ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct nci_dev*,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct nci_dev *VAR_1,
           struct sk_buff *VAR_2)
{
 __u8 VAR_3 = VAR_2->data[0];

 FUNC_2("status 0x%x\n", VAR_3);

 if (FUNC_0(&VAR_1->state) == VAR_0) {


  FUNC_1(VAR_1, VAR_3);
 }
}
