
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nfc_dev {TYPE_1__* cur_cmd_info; } ;
typedef enum nfc_attrs { ____Placeholder_nfc_attrs } nfc_attrs ;
struct TYPE_2__ {int snd_seq; int snd_portid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (struct nfc_dev*,int,int ,int ,int,int ,int ,int ) ;

struct sk_buff *FUNC_2(struct nfc_dev *VAR_1,
       enum nfc_attrs VAR_2,
       u32 VAR_3, u32 VAR_4,
       int VAR_5)
{
 if (FUNC_0(!VAR_1->cur_cmd_info))
  return ((void*)0);

 return FUNC_1(VAR_1, VAR_5,
       VAR_1->cur_cmd_info->snd_portid,
       VAR_1->cur_cmd_info->snd_seq, VAR_2,
       VAR_3, VAR_4, VAR_0);
}
