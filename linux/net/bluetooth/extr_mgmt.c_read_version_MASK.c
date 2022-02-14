
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_rp_read_version {int dummy; } ;
struct hci_dev {int dummy; } ;
typedef int rp ;


 int FUNC_0 (char*,struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sock*,int ,int ,int ,struct mgmt_rp_read_version*,int) ;
 int FUNC_2 (struct mgmt_rp_read_version*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_2, struct hci_dev *VAR_3, void *VAR_4,
   u16 VAR_5)
{
 struct mgmt_rp_read_version VAR_6;

 FUNC_0("sock %p", VAR_2);

 FUNC_2(&VAR_6);

 return FUNC_1(VAR_2, VAR_0, VAR_1, 0,
     &VAR_6, sizeof(VAR_6));
}
