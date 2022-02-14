
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct nci_dev {int flags; } ;
struct nci_core_intf_error_ntf {int conn_id; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nci_dev*,int *,int ,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct nci_dev *VAR_2,
      struct sk_buff *VAR_3)
{
 struct nci_core_intf_error_ntf *VAR_4 = (void *) VAR_3->data;

 VAR_4->conn_id = FUNC_0(&VAR_4->conn_id);

 FUNC_2("status 0x%x, conn_id %d\n", VAR_4->status, VAR_4->conn_id);


 if (FUNC_3(VAR_1, &VAR_2->flags))
  FUNC_1(VAR_2, ((void*)0), VAR_4->conn_id, -VAR_0);
}
