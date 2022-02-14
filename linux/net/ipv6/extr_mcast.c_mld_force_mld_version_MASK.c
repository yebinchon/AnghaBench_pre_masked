
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int force_mld_version; } ;
struct inet6_dev {TYPE_3__ cnf; int dev; } ;
struct TYPE_6__ {TYPE_1__* devconf_all; } ;
struct TYPE_8__ {TYPE_2__ ipv6; } ;
struct TYPE_5__ {scalar_t__ force_mld_version; } ;


 TYPE_4__* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const struct inet6_dev *VAR_0)
{





 if (FUNC_0(VAR_0->dev)->ipv6.devconf_all->force_mld_version != 0)
  return FUNC_0(VAR_0->dev)->ipv6.devconf_all->force_mld_version;
 else
  return VAR_0->cnf.force_mld_version;
}
