
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct hci_dev {int id; } ;
typedef int options ;
typedef int __le32 ;


 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct sock*,int ,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_0, u16 VAR_1, struct hci_dev *VAR_2)
{
 __le32 VAR_3 = FUNC_0(VAR_2);

 return FUNC_1(VAR_0, VAR_2->id, VAR_1, 0, &VAR_3,
     sizeof(VAR_3));
}
