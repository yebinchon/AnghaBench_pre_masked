
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int commit_mutex; } ;
struct net {TYPE_1__ nft; } ;


 int FUNC_0 (struct net*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_0->nft.commit_mutex);

 return VAR_2;
}
