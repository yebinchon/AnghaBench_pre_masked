
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nfc_target {int dummy; } ;
struct nfc_dev {int dep_link_up; int dev; int rf_mode; struct nfc_target* active_target; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* dep_link_up ) (struct nfc_dev*,struct nfc_target*,int ,int *,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct nfc_target* FUNC_4 (struct nfc_dev*,int) ;
 int * FUNC_5 (struct nfc_dev*,size_t*) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (struct nfc_dev*,struct nfc_target*,int ,int *,size_t) ;

int FUNC_8(struct nfc_dev *VAR_7, int VAR_8, u8 VAR_9)
{
 int VAR_10 = 0;
 u8 *VAR_11;
 size_t VAR_12;
 struct nfc_target *VAR_13;

 FUNC_6("dev_name=%s comm %d\n", FUNC_0(&VAR_7->dev), VAR_9);

 if (!VAR_7->ops->dep_link_up)
  return -VAR_4;

 FUNC_2(&VAR_7->dev);

 if (!FUNC_1(&VAR_7->dev)) {
  VAR_10 = -VAR_2;
  goto error;
 }

 if (VAR_7->dep_link_up == 1) {
  VAR_10 = -VAR_0;
  goto error;
 }

 VAR_11 = FUNC_5(VAR_7, &VAR_12);
 if (VAR_12 > VAR_5) {
  VAR_10 = -VAR_1;
  goto error;
 }

 VAR_13 = FUNC_4(VAR_7, VAR_8);
 if (VAR_13 == ((void*)0)) {
  VAR_10 = -VAR_3;
  goto error;
 }

 VAR_10 = VAR_7->ops->dep_link_up(VAR_7, VAR_13, VAR_9, VAR_11, VAR_12);
 if (!VAR_10) {
  VAR_7->active_target = VAR_13;
  VAR_7->rf_mode = VAR_6;
 }

error:
 FUNC_3(&VAR_7->dev);
 return VAR_10;
}
