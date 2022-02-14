
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct nfc_digital_dev {int dep_rwt; int (* skb_add_crc ) (struct sk_buff*) ;} ;
struct digital_dep_req_res {int pfb; int cmd; int dir; } ;
struct digital_data_exch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nfc_digital_dev*,struct sk_buff*,int,int ,struct digital_data_exch*) ;
 int* VAR_7 ;
 struct sk_buff* FUNC_1 (struct nfc_digital_dev*,int) ;
 int FUNC_2 (struct nfc_digital_dev*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct nfc_digital_dev *VAR_8,
    struct digital_data_exch *VAR_9, u8 VAR_10)
{
 struct digital_dep_req_res *VAR_11;
 struct sk_buff *VAR_12;
 int VAR_13;
 u16 VAR_14;

 VAR_14 = VAR_8->dep_rwt * VAR_10;
 if (VAR_14 > VAR_7[VAR_2])
  VAR_14 = VAR_7[VAR_2];

 VAR_12 = FUNC_1(VAR_8, 1);
 if (!VAR_12)
  return -VAR_5;

 FUNC_5(VAR_12, VAR_10);

 FUNC_4(VAR_12, sizeof(struct digital_dep_req_res));

 VAR_11 = (struct digital_dep_req_res *)VAR_12->data;

 VAR_11->dir = VAR_1;
 VAR_11->cmd = VAR_0;
 VAR_11->pfb = VAR_3 |
         VAR_4;

 FUNC_2(VAR_8, VAR_12);

 VAR_8->skb_add_crc(VAR_12);

 VAR_13 = FUNC_0(VAR_8, VAR_12, VAR_14,
     VAR_6, VAR_9);
 if (VAR_13)
  FUNC_3(VAR_12);

 return VAR_13;
}
