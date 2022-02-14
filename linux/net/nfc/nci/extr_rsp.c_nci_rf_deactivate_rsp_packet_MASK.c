
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__* data; } ;
struct nci_dev {int state; } ;
typedef scalar_t__ __u8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct nci_dev*) ;
 int FUNC_3 (struct nci_dev*,scalar_t__) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct nci_dev *VAR_3,
      struct sk_buff *VAR_4)
{
 __u8 VAR_5 = VAR_4->data[0];

 FUNC_4("status 0x%x\n", VAR_5);


 if ((VAR_5 != VAR_2) ||
     (FUNC_0(&VAR_3->state) != VAR_1)) {
  FUNC_2(VAR_3);
  FUNC_1(&VAR_3->state, VAR_0);
  FUNC_3(VAR_3, VAR_5);
 }
}
