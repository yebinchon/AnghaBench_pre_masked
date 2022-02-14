
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct nft_chain {int dummy; } ;
struct TYPE_3__ {struct net_device* dev; } ;
struct nft_base_chain {scalar_t__ policy; TYPE_1__ ops; } ;
struct net_device {TYPE_2__* netdev_ops; } ;
typedef enum flow_block_command { ____Placeholder_flow_block_command } flow_block_command ;
struct TYPE_4__ {scalar_t__ ndo_setup_tc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct nft_base_chain* FUNC_0 (struct nft_chain*) ;
 int FUNC_1 (struct nft_base_chain*,struct net_device*,int) ;
 int FUNC_2 (struct nft_base_chain*,struct net_device*,int) ;
 int FUNC_3 (struct nft_chain*) ;

__attribute__((used)) static int FUNC_4(struct nft_chain *VAR_3,
      u8 *VAR_4,
      enum flow_block_command VAR_5)
{
 struct nft_base_chain *VAR_6;
 struct net_device *VAR_7;
 u8 VAR_8;

 if (!FUNC_3(VAR_3))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_3);
 VAR_7 = VAR_6->ops.dev;
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = VAR_4 ? *VAR_4 : VAR_6->policy;


 if (VAR_5 == VAR_1 && VAR_8 == VAR_2)
  return -VAR_0;

 if (VAR_7->netdev_ops->ndo_setup_tc)
  return FUNC_1(VAR_6, VAR_7, VAR_5);
 else
  return FUNC_2(VAR_6, VAR_7, VAR_5);
}
