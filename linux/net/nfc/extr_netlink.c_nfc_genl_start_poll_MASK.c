
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int genl_data_mutex; int poll_req_portid; } ;
struct nfc_dev {TYPE_1__ genl_data; } ;
struct genl_info {int snd_portid; scalar_t__* attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nfc_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct nfc_dev*) ;
 int FUNC_4 (struct nfc_dev*,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct nfc_dev *VAR_8;
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11 = 0, VAR_12 = 0;

 FUNC_6("Poll start\n");

 if (!VAR_7->attrs[VAR_2] ||
     ((!VAR_7->attrs[VAR_3] &&
       !VAR_7->attrs[VAR_4]) &&
       !VAR_7->attrs[VAR_5]))
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_7->attrs[VAR_2]);

 if (VAR_7->attrs[VAR_5])
  VAR_12 = FUNC_5(VAR_7->attrs[VAR_5]);

 if (VAR_7->attrs[VAR_3])
  VAR_11 = FUNC_5(VAR_7->attrs[VAR_3]);
 else if (VAR_7->attrs[VAR_4])
  VAR_11 = FUNC_5(VAR_7->attrs[VAR_4]);

 VAR_8 = FUNC_2(VAR_10);
 if (!VAR_8)
  return -VAR_1;

 FUNC_0(&VAR_8->genl_data.genl_data_mutex);

 VAR_9 = FUNC_4(VAR_8, VAR_11, VAR_12);
 if (!VAR_9)
  VAR_8->genl_data.poll_req_portid = VAR_7->snd_portid;

 FUNC_1(&VAR_8->genl_data.genl_data_mutex);

 FUNC_3(VAR_8);
 return VAR_9;
}
