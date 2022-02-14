
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nfc_ops {scalar_t__ check_presence; int im_transceive; int deactivate_target; int activate_target; int stop_poll; int start_poll; } ;
struct TYPE_3__ {int * class; } ;
struct nfc_dev {int idx; int tx_headroom; int tx_tailroom; int targets_generation; int check_pres_work; int check_pres_timer; int rf_mode; int genl_data; int secure_elements; scalar_t__ supported_protocols; struct nfc_ops* ops; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (struct nfc_dev*) ;
 struct nfc_dev* FUNC_6 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int FUNC_8 (int *,int ,int ) ;

struct nfc_dev *FUNC_9(struct nfc_ops *VAR_6,
        u32 VAR_7,
        int VAR_8, int VAR_9)
{
 struct nfc_dev *VAR_10;
 int VAR_11;

 if (!VAR_6->start_poll || !VAR_6->stop_poll || !VAR_6->activate_target ||
     !VAR_6->deactivate_target || !VAR_6->im_transceive)
  return ((void*)0);

 if (!VAR_7)
  return ((void*)0);

 VAR_10 = FUNC_6(sizeof(struct nfc_dev), VAR_0);
 if (!VAR_10)
  return ((void*)0);

 VAR_11 = FUNC_4(&VAR_5, 0, 0, VAR_0);
 if (VAR_11 < 0)
  goto err_free_dev;
 VAR_10->idx = VAR_11;

 VAR_10->dev.class = &VAR_4;
 FUNC_2(&VAR_10->dev, "nfc%d", VAR_10->idx);
 FUNC_3(&VAR_10->dev);

 VAR_10->ops = VAR_6;
 VAR_10->supported_protocols = VAR_7;
 VAR_10->tx_headroom = VAR_8;
 VAR_10->tx_tailroom = VAR_9;
 FUNC_0(&VAR_10->secure_elements);

 FUNC_7(&VAR_10->genl_data);

 VAR_10->rf_mode = VAR_1;


 VAR_10->targets_generation = 1;

 if (VAR_6->check_presence) {
  FUNC_8(&VAR_10->check_pres_timer, VAR_2, 0);
  FUNC_1(&VAR_10->check_pres_work, VAR_3);
 }

 return VAR_10;

err_free_dev:
 FUNC_5(VAR_10);

 return ((void*)0);
}
