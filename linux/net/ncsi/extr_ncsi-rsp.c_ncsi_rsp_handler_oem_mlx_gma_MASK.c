
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; int sa_family; } ;
struct net_device_ops {int (* ndo_set_mac_address ) (struct net_device*,struct sockaddr*) ;} ;
struct net_device {int priv_flags; int type; struct net_device_ops* netdev_ops; } ;
struct ncsi_rsp_oem_pkt {int * data; } ;
struct ncsi_request {int rsp; struct ncsi_dev_priv* ndp; } ;
struct TYPE_2__ {struct net_device* dev; } ;
struct ncsi_dev_priv {TYPE_1__ ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct net_device*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,struct sockaddr*) ;

__attribute__((used)) static int FUNC_4(struct ncsi_request *VAR_3)
{
 struct ncsi_dev_priv *VAR_4 = VAR_3->ndp;
 struct net_device *VAR_5 = VAR_4->ndev.dev;
 const struct net_device_ops *VAR_6 = VAR_5->netdev_ops;
 struct ncsi_rsp_oem_pkt *VAR_7;
 struct sockaddr VAR_8;
 int VAR_9 = 0;


 VAR_7 = (struct ncsi_rsp_oem_pkt *)FUNC_2(VAR_3->rsp);

 VAR_8.sa_family = VAR_5->type;
 VAR_5->priv_flags |= VAR_1;
 FUNC_0(VAR_8.sa_data, &VAR_7->data[VAR_2], VAR_0);
 VAR_9 = VAR_6->ndo_set_mac_address(VAR_5, &VAR_8);
 if (VAR_9 < 0)
  FUNC_1(VAR_5, "NCSI: 'Writing mac address to device failed\n");

 return VAR_9;
}
