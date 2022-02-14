
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct nft_chain {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int commit_mutex; } ;
struct net {TYPE_1__ nft; } ;


 int VAR_0 ;
 struct nft_chain* FUNC_0 (struct net_device*) ;
 struct net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct net_device* FUNC_4 (void*) ;
 int FUNC_5 (struct nft_chain*) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_1,
        unsigned long VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = FUNC_4(VAR_3);
 struct net *VAR_5 = FUNC_1(VAR_4);
 struct nft_chain *VAR_6;

 FUNC_2(&VAR_5->nft.commit_mutex);
 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6)
  FUNC_5(VAR_6);
 FUNC_3(&VAR_5->nft.commit_mutex);

 return VAR_0;
}
