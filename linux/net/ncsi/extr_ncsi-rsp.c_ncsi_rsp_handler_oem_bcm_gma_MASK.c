
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sockaddr {scalar_t__ sa_data; int sa_family; } ;
struct net_device_ops {int (* ndo_set_mac_address ) (struct net_device*,struct sockaddr*) ;} ;
struct net_device {int priv_flags; int type; struct net_device_ops* netdev_ops; } ;
struct ncsi_rsp_oem_pkt {int * data; } ;
struct ncsi_request {int rsp; struct ncsi_dev_priv* ndp; } ;
struct TYPE_2__ {struct net_device* dev; } ;
struct ncsi_dev_priv {TYPE_1__ ndev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (scalar_t__,int *,int ) ;
 int FUNC_3 (struct net_device*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,struct sockaddr*) ;

__attribute__((used)) static int FUNC_6(struct ncsi_request *VAR_4)
{
 struct ncsi_dev_priv *VAR_5 = VAR_4->ndp;
 struct net_device *VAR_6 = VAR_5->ndev.dev;
 const struct net_device_ops *VAR_7 = VAR_6->netdev_ops;
 struct ncsi_rsp_oem_pkt *VAR_8;
 struct sockaddr VAR_9;
 int VAR_10 = 0;


 VAR_8 = (struct ncsi_rsp_oem_pkt *)FUNC_4(VAR_4->rsp);

 VAR_9.sa_family = VAR_6->type;
 VAR_6->priv_flags |= VAR_3;
 FUNC_2(VAR_9.sa_data, &VAR_8->data[VAR_0], VAR_2);

 FUNC_0((u8 *)VAR_9.sa_data);
 if (!FUNC_1((const u8 *)VAR_9.sa_data))
  return -VAR_1;

 VAR_10 = VAR_7->ndo_set_mac_address(VAR_6, &VAR_9);
 if (VAR_10 < 0)
  FUNC_3(VAR_6, "NCSI: 'Writing mac address to device failed\n");

 return VAR_10;
}
