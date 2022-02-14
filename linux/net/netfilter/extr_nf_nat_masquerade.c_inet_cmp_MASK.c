
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ip; } ;
struct TYPE_6__ {TYPE_1__ u3; } ;
struct nf_conntrack_tuple {TYPE_2__ dst; } ;
struct nf_conn {TYPE_4__* tuplehash; } ;
struct net_device {scalar_t__ ifindex; } ;
struct in_ifaddr {scalar_t__ ifa_address; TYPE_3__* ifa_dev; } ;
struct TYPE_8__ {struct nf_conntrack_tuple tuple; } ;
struct TYPE_7__ {struct net_device* dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct nf_conn*,void*) ;

__attribute__((used)) static int FUNC_1(struct nf_conn *VAR_1, void *VAR_2)
{
 struct in_ifaddr *VAR_3 = (struct in_ifaddr *)VAR_2;
 struct net_device *VAR_4 = VAR_3->ifa_dev->dev;
 struct nf_conntrack_tuple *VAR_5;

 if (!FUNC_0(VAR_1, (void *)(long)VAR_4->ifindex))
  return 0;

 VAR_5 = &VAR_1->tuplehash[VAR_0].tuple;

 return VAR_3->ifa_address == VAR_5->dst.u3.ip;
}
