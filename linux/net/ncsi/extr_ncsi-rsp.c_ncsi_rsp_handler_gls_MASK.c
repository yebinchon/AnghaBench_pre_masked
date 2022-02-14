
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int channel; } ;
struct TYPE_5__ {TYPE_1__ common; } ;
struct ncsi_rsp_gls_pkt {int oem_status; int other; int status; TYPE_2__ rsp; } ;
struct ncsi_request {int flags; int rsp; struct ncsi_dev_priv* ndp; } ;
struct ncsi_dev_priv {int dummy; } ;
struct ncsi_channel_mode {void** data; } ;
struct TYPE_6__ {int state; } ;
struct ncsi_channel {int lock; TYPE_3__ monitor; struct ncsi_channel_mode* modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ncsi_dev_priv*,int ,int *,struct ncsi_channel**) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ncsi_request *VAR_4)
{
 struct ncsi_rsp_gls_pkt *VAR_5;
 struct ncsi_dev_priv *VAR_6 = VAR_4->ndp;
 struct ncsi_channel *VAR_7;
 struct ncsi_channel_mode *VAR_8;
 unsigned long VAR_9;


 VAR_5 = (struct ncsi_rsp_gls_pkt *)FUNC_2(VAR_4->rsp);
 FUNC_0(VAR_6, VAR_5->rsp.common.channel,
          ((void*)0), &VAR_7);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = &VAR_7->modes[VAR_2];
 VAR_8->data[2] = FUNC_1(VAR_5->status);
 VAR_8->data[3] = FUNC_1(VAR_5->other);
 VAR_8->data[4] = FUNC_1(VAR_5->oem_status);

 if (VAR_4->flags & VAR_3)
  return 0;


 FUNC_3(&VAR_7->lock, VAR_9);
 VAR_7->monitor.state = VAR_1;
 FUNC_4(&VAR_7->lock, VAR_9);

 return 0;
}
