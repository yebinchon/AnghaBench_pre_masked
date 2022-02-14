
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_flowtable {int ops_len; TYPE_1__* ops; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* dev; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0, struct net_device *VAR_1,
    struct nft_flowtable *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->ops_len; VAR_3++) {
  if (VAR_2->ops[VAR_3].dev != VAR_1)
   continue;

  FUNC_1(FUNC_0(VAR_1), &VAR_2->ops[VAR_3]);
  VAR_2->ops[VAR_3].dev = ((void*)0);
  break;
 }
}
