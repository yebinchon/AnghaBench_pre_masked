
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xdp_frame {int dummy; } ;
struct xdp_buff {scalar_t__ data; scalar_t__ data_end; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct bpf_map {int dummy; } ;
struct TYPE_2__ {int (* ndo_xdp_xmit ) (struct net_device*,int,struct xdp_frame**,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xdp_frame* FUNC_0 (struct xdp_buff*) ;
 int FUNC_1 (struct net_device*,int,struct xdp_frame**,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
   struct bpf_map *VAR_4,
   struct xdp_buff *VAR_5,
   u32 VAR_6)
{
 struct xdp_frame *VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_3->netdev_ops->ndo_xdp_xmit) {
  return -VAR_0;
 }

 VAR_8 = FUNC_3(VAR_3, VAR_5->data_end - VAR_5->data);
 if (FUNC_2(VAR_8))
  return VAR_8;

 VAR_7 = FUNC_0(VAR_5);
 if (FUNC_2(!VAR_7))
  return -VAR_1;

 VAR_9 = VAR_3->netdev_ops->ndo_xdp_xmit(VAR_3, 1, &VAR_7, VAR_2);
 if (VAR_9 <= 0)
  return VAR_9;
 return 0;
}
