
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_dev {int dummy; } ;
struct nci_conn_info {int max_pkt_payload_len; } ;
typedef int __u8 ;


 int VAR_0 ;
 struct nci_conn_info* FUNC_0 (struct nci_dev*,int ) ;

int FUNC_1(struct nci_dev *VAR_1, __u8 VAR_2)
{
 struct nci_conn_info *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3)
  return -VAR_0;

 return VAR_3->max_pkt_payload_len;
}
