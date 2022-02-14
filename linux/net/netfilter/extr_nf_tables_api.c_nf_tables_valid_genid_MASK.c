
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ base_seq; int commit_mutex; } ;
struct net {TYPE_1__ nft; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct net *VAR_0, u32 VAR_1)
{
 bool VAR_2;

 FUNC_0(&VAR_0->nft.commit_mutex);

 VAR_2 = VAR_1 == 0 || VAR_0->nft.base_seq == VAR_1;
 if (!VAR_2)
  FUNC_1(&VAR_0->nft.commit_mutex);


 return VAR_2;
}
