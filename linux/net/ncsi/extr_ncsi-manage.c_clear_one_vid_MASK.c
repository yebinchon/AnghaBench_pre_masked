
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ncsi_dev_priv {int dummy; } ;
struct ncsi_cmd_arg {int* bytes; scalar_t__* words; int type; } ;
struct ncsi_channel_vlan_filter {int n_vids; scalar_t__* vids; int bitmap; } ;
struct ncsi_channel {int lock; struct ncsi_channel_vlan_filter vlan_filter; } ;


 int VAR_0 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (void*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ncsi_dev_priv *VAR_1, struct ncsi_channel *VAR_2,
    struct ncsi_cmd_arg *VAR_3)
{
 struct ncsi_channel_vlan_filter *VAR_4;
 unsigned long VAR_5;
 void *VAR_6;
 int VAR_7;
 u16 VAR_8;

 VAR_4 = &VAR_2->vlan_filter;
 VAR_6 = &VAR_4->bitmap;

 FUNC_2(&VAR_2->lock, VAR_5);
 VAR_7 = FUNC_1(VAR_6, VAR_4->n_vids, 0);
 if (VAR_7 >= VAR_4->n_vids) {
  FUNC_3(&VAR_2->lock, VAR_5);
  return -1;
 }
 VAR_8 = VAR_4->vids[VAR_7];

 FUNC_0(VAR_7, VAR_6);
 VAR_4->vids[VAR_7] = 0;
 FUNC_3(&VAR_2->lock, VAR_5);

 VAR_3->type = VAR_0;
 VAR_3->words[1] = VAR_8;

 VAR_3->bytes[6] = VAR_7 + 1;
 VAR_3->bytes[7] = 0x00;
 return 0;
}
