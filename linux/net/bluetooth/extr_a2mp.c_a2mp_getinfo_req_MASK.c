
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_request {int dummy; } ;
struct hci_dev {scalar_t__ dev_type; } ;
struct amp_mgr {int state; } ;
struct a2mp_info_rsp {int status; int id; } ;
struct a2mp_info_req {int id; } ;
struct a2mp_cmd {int ident; int len; } ;
typedef int rsp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct amp_mgr*,int ,int ,int,struct a2mp_info_rsp*) ;
 int FUNC_2 (struct hci_dev*) ;
 struct hci_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_request*,int ,int ,int *) ;
 int FUNC_6 (struct hci_request*,struct hci_dev*) ;
 int FUNC_7 (struct hci_request*,int ) ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_11(struct amp_mgr *VAR_7, struct sk_buff *VAR_8,
       struct a2mp_cmd *VAR_9)
{
 struct a2mp_info_req *VAR_10 = (void *) VAR_8->data;
 struct hci_dev *VAR_11;
 struct hci_request VAR_12;
 int VAR_13 = 0;

 if (FUNC_8(VAR_9->len) < sizeof(*VAR_10))
  return -VAR_2;

 FUNC_0("id %d", VAR_10->id);

 VAR_11 = FUNC_3(VAR_10->id);
 if (!VAR_11 || VAR_11->dev_type != VAR_3) {
  struct a2mp_info_rsp VAR_14;

  VAR_14.id = VAR_10->id;
  VAR_14.status = VAR_1;

  FUNC_1(VAR_7, VAR_0, VAR_9->ident, sizeof(VAR_14),
     &VAR_14);

  goto done;
 }

 FUNC_9(VAR_5, &VAR_7->state);
 FUNC_6(&VAR_12, VAR_11);
 FUNC_5(&VAR_12, VAR_4, 0, ((void*)0));
 VAR_13 = FUNC_7(&VAR_12, VAR_6);
 if (VAR_13 < 0)
  FUNC_2(VAR_11);

done:
 if (VAR_11)
  FUNC_4(VAR_11);

 FUNC_10(VAR_8, sizeof(*VAR_10));
 return 0;
}
