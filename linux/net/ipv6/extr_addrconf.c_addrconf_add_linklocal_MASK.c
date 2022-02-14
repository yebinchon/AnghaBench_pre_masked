
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct inet6_ifaddr {int prefix_len; int addr; } ;
struct TYPE_5__ {scalar_t__ optimistic_dad; } ;
struct inet6_dev {int dev; TYPE_1__ cnf; } ;
struct in6_addr {int dummy; } ;
struct ifa6_config {int plen; int ifa_flags; int scope; int preferred_lft; int valid_lft; struct in6_addr const* pfx; } ;
struct TYPE_7__ {TYPE_2__* devconf_all; } ;
struct TYPE_8__ {TYPE_3__ ipv6; } ;
struct TYPE_6__ {int forwarding; scalar_t__ optimistic_dad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inet6_ifaddr*) ;
 int FUNC_1 (struct inet6_ifaddr*) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int ,int ) ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (struct inet6_ifaddr*) ;
 struct inet6_ifaddr* FUNC_5 (struct inet6_dev*,struct ifa6_config*,int,int *) ;

void FUNC_6(struct inet6_dev *VAR_5,
       const struct in6_addr *VAR_6, u32 VAR_7)
{
 struct ifa6_config VAR_8 = {
  .pfx = VAR_6,
  .plen = 64,
  .ifa_flags = VAR_7 | VAR_2,
  .valid_lft = VAR_4,
  .preferred_lft = VAR_4,
  .scope = VAR_3
 };
 struct inet6_ifaddr *VAR_9;
 VAR_9 = FUNC_5(VAR_5, &VAR_8, 1, ((void*)0));
 if (!FUNC_0(VAR_9)) {
  FUNC_2(&VAR_9->addr, VAR_9->prefix_len, 0, VAR_5->dev,
          0, 0, VAR_0);
  FUNC_1(VAR_9);
  FUNC_4(VAR_9);
 }
}
