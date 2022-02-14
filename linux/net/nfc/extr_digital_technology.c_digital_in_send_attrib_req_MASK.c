
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_target {int dummy; } ;
struct nfc_digital_dev {int dummy; } ;
struct digital_sensb_res {int* proto_info; int nfcid0; } ;
struct digital_attrib_req {int param1; int param2; int param3; int param4; int nfcid0; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct nfc_digital_dev*,struct sk_buff*,int,int ,struct nfc_target*) ;
 struct sk_buff* FUNC_2 (struct nfc_digital_dev*,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ,int) ;
 struct digital_attrib_req* FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_6(struct nfc_digital_dev *VAR_8,
          struct nfc_target *VAR_9,
          struct digital_sensb_res *VAR_10)
{
 struct digital_attrib_req *VAR_11;
 struct sk_buff *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_2(VAR_8, sizeof(*VAR_11));
 if (!VAR_12)
  return -VAR_6;

 VAR_11 = FUNC_5(VAR_12, sizeof(*VAR_11));

 VAR_11->cmd = VAR_5;
 FUNC_4(VAR_11->nfcid0, VAR_10->nfcid0,
        sizeof(VAR_11->nfcid0));
 VAR_11->param1 = VAR_0 |
        VAR_1;
 VAR_11->param2 = VAR_2 |
        VAR_4 |
        VAR_3;
 VAR_11->param3 = VAR_10->proto_info[1] & 0x07;
 VAR_11->param4 = FUNC_0(0);

 VAR_13 = FUNC_1(VAR_8, VAR_12, 30, VAR_7,
     VAR_9);
 if (VAR_13)
  FUNC_3(VAR_12);

 return VAR_13;
}
