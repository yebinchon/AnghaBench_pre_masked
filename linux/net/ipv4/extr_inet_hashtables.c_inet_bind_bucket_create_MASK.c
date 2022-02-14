
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct kmem_cache {int dummy; } ;
struct inet_bind_hashbucket {int chain; } ;
struct inet_bind_bucket {int l3mdev; unsigned short port; int node; int owners; scalar_t__ fastreuseport; scalar_t__ fastreuse; int ib_net; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 struct inet_bind_bucket* FUNC_2 (struct kmem_cache*,int ) ;
 int FUNC_3 (int *,struct net*) ;

struct inet_bind_bucket *FUNC_4(struct kmem_cache *VAR_1,
       struct net *VAR_2,
       struct inet_bind_hashbucket *VAR_3,
       const unsigned short VAR_4,
       int VAR_5)
{
 struct inet_bind_bucket *VAR_6 = FUNC_2(VAR_1, VAR_0);

 if (VAR_6) {
  FUNC_3(&VAR_6->ib_net, VAR_2);
  VAR_6->l3mdev = VAR_5;
  VAR_6->port = VAR_4;
  VAR_6->fastreuse = 0;
  VAR_6->fastreuseport = 0;
  FUNC_0(&VAR_6->owners);
  FUNC_1(&VAR_6->node, &VAR_3->chain);
 }
 return VAR_6;
}
