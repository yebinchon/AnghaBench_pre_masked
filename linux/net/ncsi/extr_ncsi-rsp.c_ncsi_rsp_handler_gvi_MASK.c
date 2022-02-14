
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct ncsi_rsp_gvi_pkt {int mf_id; int * pci_ids; int fw_version; int fw_name; int alpha2; int ncsi_version; TYPE_2__ rsp; } ;
struct ncsi_request {int rsp; struct ncsi_dev_priv* ndp; } ;
struct ncsi_dev_priv {int dummy; } ;
struct ncsi_channel_version {void* mf_id; int * pci_ids; void* fw_version; int fw_name; int alpha2; void* version; } ;
struct ncsi_channel {struct ncsi_channel_version version; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct ncsi_dev_priv*,int ,int *,struct ncsi_channel**) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ncsi_request *VAR_1)
{
 struct ncsi_rsp_gvi_pkt *VAR_2;
 struct ncsi_dev_priv *VAR_3 = VAR_1->ndp;
 struct ncsi_channel *VAR_4;
 struct ncsi_channel_version *VAR_5;
 int VAR_6;


 VAR_2 = (struct ncsi_rsp_gvi_pkt *)FUNC_5(VAR_1->rsp);
 FUNC_2(VAR_3, VAR_2->rsp.common.channel,
          ((void*)0), &VAR_4);
 if (!VAR_4)
  return -VAR_0;


 VAR_5 = &VAR_4->version;
 VAR_5->version = FUNC_3(VAR_2->ncsi_version);
 VAR_5->alpha2 = VAR_2->alpha2;
 FUNC_1(VAR_5->fw_name, VAR_2->fw_name, 12);
 VAR_5->fw_version = FUNC_3(VAR_2->fw_version);
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->pci_ids); VAR_6++)
  VAR_5->pci_ids[VAR_6] = FUNC_4(VAR_2->pci_ids[VAR_6]);
 VAR_5->mf_id = FUNC_3(VAR_2->mf_id);

 return 0;
}
