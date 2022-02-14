
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int dummy; } ;
struct mgmt_cp_set_dev_class {int minor; int major; } ;
struct hci_request {int dummy; } ;
struct hci_dev {int major_class; int minor_class; int dev_class; int id; int service_cache; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct hci_request*) ;
 int FUNC_2 (struct hci_request*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_request*,struct hci_dev*) ;
 int FUNC_8 (struct hci_request*,int ) ;
 int FUNC_9 (struct hci_dev*) ;
 int FUNC_10 (struct hci_dev*) ;
 int FUNC_11 (struct sock*,int ,int ,int ,int ,int) ;
 int FUNC_12 (struct sock*,int ,int ,int ) ;
 struct mgmt_pending_cmd* FUNC_13 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 scalar_t__ FUNC_14 (struct hci_dev*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_15(struct sock *VAR_8, struct hci_dev *VAR_9, void *VAR_10,
    u16 VAR_11)
{
 struct mgmt_cp_set_dev_class *VAR_12 = VAR_10;
 struct mgmt_pending_cmd *VAR_13;
 struct hci_request VAR_14;
 int VAR_15;

 FUNC_0("request for %s", VAR_9->name);

 if (!FUNC_10(VAR_9))
  return FUNC_12(VAR_8, VAR_9->id, VAR_3,
           VAR_6);

 FUNC_4(VAR_9);

 if (FUNC_14(VAR_9)) {
  VAR_15 = FUNC_12(VAR_8, VAR_9->id, VAR_3,
          VAR_4);
  goto unlock;
 }

 if ((VAR_12->minor & 0x03) != 0 || (VAR_12->major & 0xe0) != 0) {
  VAR_15 = FUNC_12(VAR_8, VAR_9->id, VAR_3,
          VAR_5);
  goto unlock;
 }

 VAR_9->major_class = VAR_12->major;
 VAR_9->minor_class = VAR_12->minor;

 if (!FUNC_9(VAR_9)) {
  VAR_15 = FUNC_11(VAR_8, VAR_9->id, VAR_3, 0,
     VAR_9->dev_class, 3);
  goto unlock;
 }

 FUNC_7(&VAR_14, VAR_9);

 if (FUNC_5(VAR_9, VAR_2)) {
  FUNC_6(VAR_9);
  FUNC_3(&VAR_9->service_cache);
  FUNC_4(VAR_9);
  FUNC_2(&VAR_14);
 }

 FUNC_1(&VAR_14);

 VAR_15 = FUNC_8(&VAR_14, VAR_7);
 if (VAR_15 < 0) {
  if (VAR_15 != -VAR_0)
   goto unlock;

  VAR_15 = FUNC_11(VAR_8, VAR_9->id, VAR_3, 0,
     VAR_9->dev_class, 3);
  goto unlock;
 }

 VAR_13 = FUNC_13(VAR_8, VAR_3, VAR_9, VAR_10, VAR_11);
 if (!VAR_13) {
  VAR_15 = -VAR_1;
  goto unlock;
 }

 VAR_15 = 0;

unlock:
 FUNC_6(VAR_9);
 return VAR_15;
}
