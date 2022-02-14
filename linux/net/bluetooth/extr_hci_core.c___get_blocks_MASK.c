
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct hci_dev {int block_len; } ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{

 return FUNC_0(VAR_2->len - VAR_0, VAR_1->block_len);
}
