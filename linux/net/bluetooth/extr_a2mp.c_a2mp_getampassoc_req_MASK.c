
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {scalar_t__ amp_type; } ;
struct amp_mgr {int dummy; } ;
struct a2mp_cmd {int ident; int len; } ;
struct a2mp_amp_assoc_rsp {int status; int id; } ;
struct a2mp_amp_assoc_req {int id; } ;
typedef int rsp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct amp_mgr*,int ,int ,int,struct a2mp_amp_assoc_rsp*) ;
 struct amp_mgr* FUNC_2 (int ) ;
 int FUNC_3 (struct amp_mgr*) ;
 int FUNC_4 (struct hci_dev*,struct amp_mgr*) ;
 struct hci_dev* FUNC_5 (int ) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_9(struct amp_mgr *VAR_6, struct sk_buff *VAR_7,
    struct a2mp_cmd *VAR_8)
{
 struct a2mp_amp_assoc_req *VAR_9 = (void *) VAR_7->data;
 struct hci_dev *VAR_10;
 struct amp_mgr *VAR_11;

 if (FUNC_7(VAR_8->len) < sizeof(*VAR_9))
  return -VAR_4;

 FUNC_0("id %d", VAR_9->id);


 VAR_11 = FUNC_2(VAR_5);

 VAR_10 = FUNC_5(VAR_9->id);
 if (!VAR_10 || VAR_10->amp_type == VAR_3 || VAR_11) {
  struct a2mp_amp_assoc_rsp VAR_12;
  VAR_12.id = VAR_9->id;

  if (VAR_11) {
   VAR_12.status = VAR_1;
   FUNC_3(VAR_11);
  } else {
   VAR_12.status = VAR_2;
  }

  FUNC_1(VAR_6, VAR_0, VAR_8->ident, sizeof(VAR_12),
     &VAR_12);

  goto done;
 }

 FUNC_4(VAR_10, VAR_6);

done:
 if (VAR_10)
  FUNC_6(VAR_10);

 FUNC_8(VAR_7, sizeof(*VAR_9));
 return 0;
}
