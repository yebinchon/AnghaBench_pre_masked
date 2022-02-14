
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nci_dev {TYPE_1__* hci_dev; } ;
struct nci_data {scalar_t__ data_len; int * data; int cmd; int pipe; int conn_id; } ;
struct nci_conn_info {int conn_id; } ;
struct TYPE_2__ {struct nci_conn_info* conn_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct nci_dev*,int ,unsigned long,int ) ;

int FUNC_3(struct nci_dev *VAR_5, u8 VAR_6)
{
 struct nci_data VAR_7;
 struct nci_conn_info *VAR_8;

 VAR_8 = VAR_5->hci_dev->conn_info;
 if (!VAR_8)
  return -VAR_0;

 VAR_7.conn_id = VAR_8->conn_id;
 VAR_7.pipe = VAR_6;
 VAR_7.cmd = FUNC_0(VAR_3,
           VAR_2);
 VAR_7.data = ((void*)0);
 VAR_7.data_len = 0;

 return FUNC_2(VAR_5, VAR_4,
   (unsigned long)&VAR_7,
   FUNC_1(VAR_1));
}
