
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__* data; } ;
struct nci_dev {int dummy; } ;
typedef scalar_t__ __u8 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nci_dev*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct nci_dev *VAR_1,
       struct sk_buff *VAR_2)
{
 __u8 VAR_3 = VAR_2->data[0];

 FUNC_1("status 0x%x\n", VAR_3);


 if (VAR_3 != VAR_0)
  FUNC_0(VAR_1, VAR_3);
}
