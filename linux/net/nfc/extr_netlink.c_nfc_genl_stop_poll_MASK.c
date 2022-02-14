
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ poll_req_portid; int genl_data_mutex; } ;
struct nfc_dev {TYPE_1__ genl_data; int dev; int polling; } ;
struct genl_info {scalar_t__ snd_portid; int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct nfc_dev* FUNC_4 (int ) ;
 int FUNC_5 (struct nfc_dev*) ;
 int FUNC_6 (struct nfc_dev*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 struct nfc_dev *VAR_6;
 int VAR_7;
 u32 VAR_8;

 if (!VAR_5->attrs[VAR_3])
  return -VAR_1;

 VAR_8 = FUNC_7(VAR_5->attrs[VAR_3]);

 VAR_6 = FUNC_4(VAR_8);
 if (!VAR_6)
  return -VAR_2;

 FUNC_0(&VAR_6->dev);

 if (!VAR_6->polling) {
  FUNC_1(&VAR_6->dev);
  return -VAR_1;
 }

 FUNC_1(&VAR_6->dev);

 FUNC_2(&VAR_6->genl_data.genl_data_mutex);

 if (VAR_6->genl_data.poll_req_portid != VAR_5->snd_portid) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_6(VAR_6);
 VAR_6->genl_data.poll_req_portid = 0;

out:
 FUNC_3(&VAR_6->genl_data.genl_data_mutex);
 FUNC_5(VAR_6);
 return VAR_7;
}
