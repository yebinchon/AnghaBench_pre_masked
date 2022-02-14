
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct hci_dev {int dummy; } ;
typedef int ev ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int ,struct hci_dev*,int *,int,int ,struct sock*) ;

__attribute__((used)) static int FUNC_3(struct hci_dev *VAR_2, struct sock *VAR_3)
{
 __le32 VAR_4 = FUNC_0(FUNC_1(VAR_2));

 return FUNC_2(VAR_1, VAR_2, &VAR_4,
      sizeof(VAR_4), VAR_0, VAR_3);
}
