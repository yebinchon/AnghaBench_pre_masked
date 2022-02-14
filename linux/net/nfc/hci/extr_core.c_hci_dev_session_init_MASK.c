
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_5__ {int session_id; TYPE_3__* gates; int gate_count; } ;
struct nfc_hci_dev {TYPE_2__ init_data; TYPE_1__* ops; } ;
struct TYPE_6__ {scalar_t__ gate; int pipe; } ;
struct TYPE_4__ {int (* load_session ) (struct nfc_hci_dev*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfc_hci_dev*,int ,TYPE_3__*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct nfc_hci_dev*,int ,scalar_t__,int ) ;
 int FUNC_4 (struct nfc_hci_dev*) ;
 int FUNC_5 (struct nfc_hci_dev*,scalar_t__,int ,struct sk_buff**) ;
 int FUNC_6 (struct nfc_hci_dev*,scalar_t__,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct nfc_hci_dev*) ;

__attribute__((used)) static int FUNC_9(struct nfc_hci_dev *VAR_4)
{
 struct sk_buff *VAR_5 = ((void*)0);
 int VAR_6;

 if (VAR_4->init_data.gates[0].gate != VAR_1)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_4, VAR_3,
     VAR_4->init_data.gates[0].gate,
     VAR_4->init_data.gates[0].pipe);
 if (VAR_6 < 0)
  goto exit;

 VAR_6 = FUNC_5(VAR_4, VAR_1,
         VAR_2, &VAR_5);
 if (VAR_6 < 0)
  goto disconnect_all;

 if (VAR_5->len && VAR_5->len == FUNC_7(VAR_4->init_data.session_id) &&
  (FUNC_2(VAR_4->init_data.session_id, VAR_5->data,
      VAR_5->len) == 0) && VAR_4->ops->load_session) {


  VAR_6 = VAR_4->ops->load_session(VAR_4);

  if (VAR_6 < 0)
   goto disconnect_all;
 } else {

  VAR_6 = FUNC_4(VAR_4);
  if (VAR_6 < 0)
   goto exit;

  VAR_6 = FUNC_0(VAR_4, VAR_4->init_data.gate_count,
       VAR_4->init_data.gates);
  if (VAR_6 < 0)
   goto disconnect_all;

  VAR_6 = FUNC_6(VAR_4, VAR_1,
    VAR_2,
    VAR_4->init_data.session_id,
    FUNC_7(VAR_4->init_data.session_id));
 }
 if (VAR_6 == 0)
  goto exit;

disconnect_all:
 FUNC_4(VAR_4);

exit:
 FUNC_1(VAR_5);

 return VAR_6;
}
