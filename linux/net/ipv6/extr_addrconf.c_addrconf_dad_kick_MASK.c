
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inet6_ifaddr {int flags; int dad_probes; scalar_t__ dad_nonce; struct inet6_dev* idev; } ;
struct TYPE_7__ {int dad_transmits; scalar_t__ enhanced_dad; scalar_t__ rtr_solicit_delay; } ;
struct inet6_dev {TYPE_3__ cnf; int dev; } ;
struct TYPE_6__ {TYPE_1__* devconf_all; } ;
struct TYPE_8__ {TYPE_2__ ipv6; } ;
struct TYPE_5__ {scalar_t__ enhanced_dad; } ;


 int VAR_0 ;
 int FUNC_0 (struct inet6_ifaddr*,unsigned long) ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct inet6_ifaddr *VAR_1)
{
 unsigned long VAR_2;
 struct inet6_dev *VAR_3 = VAR_1->idev;
 u64 VAR_4;

 if (VAR_1->flags & VAR_0)
  VAR_2 = 0;
 else
  VAR_2 = FUNC_3() % (VAR_3->cnf.rtr_solicit_delay ? : 1);

 VAR_4 = 0;
 if (VAR_3->cnf.enhanced_dad ||
     FUNC_1(VAR_3->dev)->ipv6.devconf_all->enhanced_dad) {
  do
   FUNC_2(&VAR_4, 6);
  while (VAR_4 == 0);
 }
 VAR_1->dad_nonce = VAR_4;
 VAR_1->dad_probes = VAR_3->cnf.dad_transmits;
 FUNC_0(VAR_1, VAR_2);
}
