
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct ncsi_dev_priv {TYPE_2__ ndev; } ;
struct ncsi_channel_mode {int* data; } ;
struct ncsi_channel {int id; int lock; struct ncsi_channel_mode* modes; } ;
struct TYPE_3__ {int channel; } ;
struct ncsi_aen_pkt_hdr {TYPE_1__ common; } ;
struct ncsi_aen_hncdsc_pkt {int status; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ncsi_dev_priv*,int ,int *,struct ncsi_channel**) ;
 int FUNC_1 (int ,char*,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ncsi_dev_priv *VAR_2,
       struct ncsi_aen_pkt_hdr *VAR_3)
{
 struct ncsi_channel *VAR_4;
 struct ncsi_channel_mode *VAR_5;
 struct ncsi_aen_hncdsc_pkt *VAR_6;
 unsigned long VAR_7;


 FUNC_0(VAR_2, VAR_3->common.channel, ((void*)0), &VAR_4);
 if (!VAR_4)
  return -VAR_0;

 FUNC_3(&VAR_4->lock, VAR_7);
 VAR_5 = &VAR_4->modes[VAR_1];
 VAR_6 = (struct ncsi_aen_hncdsc_pkt *)VAR_3;
 VAR_5->data[3] = FUNC_2(VAR_6->status);
 FUNC_4(&VAR_4->lock, VAR_7);
 FUNC_1(VAR_2->ndev.dev,
     "NCSI: host driver %srunning on channel %u\n",
     VAR_5->data[3] & 0x1 ? "" : "not ", VAR_4->id);

 return 0;
}
