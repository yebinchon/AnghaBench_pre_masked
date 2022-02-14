
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int len; } ;
struct nfc_dev {scalar_t__ rf_mode; int dev; TYPE_1__* ops; int check_pres_timer; int shutting_down; TYPE_2__* active_target; } ;
typedef int data_exchange_cb_t ;
struct TYPE_4__ {scalar_t__ idx; } ;
struct TYPE_3__ {int (* im_transceive ) (struct nfc_dev*,TYPE_2__*,struct sk_buff*,int ,void*) ;int (* tm_send ) (struct nfc_dev*,struct sk_buff*) ;scalar_t__ check_presence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,scalar_t__,int ) ;
 int FUNC_9 (struct nfc_dev*,TYPE_2__*,struct sk_buff*,int ,void*) ;
 int FUNC_10 (struct nfc_dev*,struct sk_buff*) ;

int FUNC_11(struct nfc_dev *VAR_7, u32 VAR_8, struct sk_buff *VAR_9,
        data_exchange_cb_t VAR_10, void *VAR_11)
{
 int VAR_12;

 FUNC_8("dev_name=%s target_idx=%u skb->len=%u\n",
   FUNC_1(&VAR_7->dev), VAR_8, VAR_9->len);

 FUNC_3(&VAR_7->dev);

 if (!FUNC_2(&VAR_7->dev)) {
  VAR_12 = -VAR_1;
  FUNC_5(VAR_9);
  goto error;
 }

 if (VAR_7->rf_mode == VAR_4 && VAR_7->active_target != ((void*)0)) {
  if (VAR_7->active_target->idx != VAR_8) {
   VAR_12 = -VAR_0;
   FUNC_5(VAR_9);
   goto error;
  }

  if (VAR_7->ops->check_presence)
   FUNC_0(&VAR_7->check_pres_timer);

  VAR_12 = VAR_7->ops->im_transceive(VAR_7, VAR_7->active_target, VAR_9, VAR_10,
          VAR_11);

  if (!VAR_12 && VAR_7->ops->check_presence && !VAR_7->shutting_down)
   FUNC_6(&VAR_7->check_pres_timer, VAR_6 +
      FUNC_7(VAR_3));
 } else if (VAR_7->rf_mode == VAR_5 && VAR_7->ops->tm_send != ((void*)0)) {
  VAR_12 = VAR_7->ops->tm_send(VAR_7, VAR_9);
 } else {
  VAR_12 = -VAR_2;
  FUNC_5(VAR_9);
  goto error;
 }


error:
 FUNC_4(&VAR_7->dev);
 return VAR_12;
}
