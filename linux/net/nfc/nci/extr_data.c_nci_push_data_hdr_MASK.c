
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct nci_dev {int dummy; } ;
struct nci_data_hdr {int plen; scalar_t__ rfu; int conn_id; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 struct nci_data_hdr* FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct nci_dev *VAR_2,
         __u8 VAR_3,
         struct sk_buff *VAR_4,
         __u8 VAR_5)
{
 struct nci_data_hdr *VAR_6;
 int VAR_7 = VAR_4->len;

 VAR_6 = FUNC_2(VAR_4, VAR_0);
 VAR_6->conn_id = VAR_3;
 VAR_6->rfu = 0;
 VAR_6->plen = VAR_7;

 FUNC_0((__u8 *)VAR_6, VAR_1);
 FUNC_1((__u8 *)VAR_6, VAR_5);
}
