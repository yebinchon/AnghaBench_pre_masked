
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_chain {int dummy; } ;
struct nft_base_chain {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int commit_mutex; } ;
struct net {TYPE_1__ nft; } ;
typedef int flow_indr_block_bind_cb_t ;
typedef enum flow_block_command { ____Placeholder_flow_block_command } flow_block_command ;


 struct nft_chain* FUNC_0 (struct net_device*) ;
 struct net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct nft_base_chain* FUNC_4 (struct nft_chain*) ;
 int FUNC_5 (struct net_device*,struct nft_base_chain*,int *,void*,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0,
         flow_indr_block_bind_cb_t *VAR_1, void *VAR_2,
         enum flow_block_command VAR_3)
{
 struct net *VAR_4 = FUNC_1(VAR_0);
 struct nft_chain *VAR_5;

 FUNC_2(&VAR_4->nft.commit_mutex);
 VAR_5 = FUNC_0(VAR_0);
 if (VAR_5) {
  struct nft_base_chain *VAR_6;

  VAR_6 = FUNC_4(VAR_5);
  FUNC_5(VAR_0, VAR_6, VAR_1, VAR_2, VAR_3);
 }
 FUNC_3(&VAR_4->nft.commit_mutex);
}
