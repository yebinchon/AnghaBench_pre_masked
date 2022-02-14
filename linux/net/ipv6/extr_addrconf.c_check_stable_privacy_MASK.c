
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* devconf_dflt; } ;
struct net {TYPE_5__ ipv6; } ;
struct TYPE_6__ {int initialized; } ;
struct TYPE_7__ {TYPE_1__ stable_secret; } ;
struct inet6_dev {TYPE_2__ cnf; } ;
struct TYPE_8__ {int initialized; } ;
struct TYPE_9__ {TYPE_3__ stable_secret; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct inet6_dev *VAR_2, struct net *VAR_3,
    int VAR_4)
{
 if (VAR_4 == VAR_1 &&
     !VAR_2->cnf.stable_secret.initialized &&
     !VAR_3->ipv6.devconf_dflt->stable_secret.initialized)
  return -VAR_0;
 return 1;
}
