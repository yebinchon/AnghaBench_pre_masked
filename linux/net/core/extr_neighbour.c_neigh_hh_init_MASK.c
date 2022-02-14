
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {TYPE_2__* header_ops; } ;
struct hh_cache {int hh_len; } ;
struct neighbour {int lock; struct hh_cache hh; TYPE_1__* tbl; struct net_device* dev; } ;
typedef int __be16 ;
struct TYPE_4__ {int (* cache ) (struct neighbour*,struct hh_cache*,int ) ;} ;
struct TYPE_3__ {int protocol; } ;


 int FUNC_0 (struct neighbour*,struct hh_cache*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct neighbour *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->dev;
 __be16 VAR_2 = VAR_0->tbl->protocol;
 struct hh_cache *VAR_3 = &VAR_0->hh;

 FUNC_1(&VAR_0->lock);




 if (!VAR_3->hh_len)
  VAR_1->header_ops->cache(VAR_0, VAR_3, VAR_2);

 FUNC_2(&VAR_0->lock);
}
