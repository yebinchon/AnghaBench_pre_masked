
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int flags; int ip_ptr; } ;
struct TYPE_6__ {int * sysctl; } ;
struct in_device {int dead; int refcnt; TYPE_2__ cnf; int arp_parms; struct net_device* dev; } ;
struct TYPE_5__ {int devconf_dflt; } ;
struct TYPE_7__ {TYPE_1__ ipv4; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct in_device* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_2__,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 TYPE_3__* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct in_device*) ;
 int FUNC_7 (struct in_device*) ;
 int FUNC_8 (struct in_device*) ;
 int FUNC_9 (struct in_device*) ;
 int FUNC_10 (struct in_device*) ;
 struct in_device* FUNC_11 (int,int ) ;
 int FUNC_12 (TYPE_2__*,int ,int) ;
 int FUNC_13 (struct net_device*,int *) ;
 int FUNC_14 (int ,struct in_device*) ;
 int FUNC_15 (int *,int) ;

__attribute__((used)) static struct in_device *FUNC_16(struct net_device *VAR_5)
{
 struct in_device *VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_0();

 VAR_6 = FUNC_11(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  goto out;
 FUNC_12(&VAR_6->cnf, FUNC_5(VAR_5)->ipv4.devconf_dflt,
   sizeof(VAR_6->cnf));
 VAR_6->cnf.sysctl = ((void*)0);
 VAR_6->dev = VAR_5;
 VAR_6->arp_parms = FUNC_13(VAR_5, &VAR_4);
 if (!VAR_6->arp_parms)
  goto out_kfree;
 if (FUNC_2(VAR_6->cnf, VAR_1))
  FUNC_3(VAR_5);

 FUNC_4(VAR_5);

 FUNC_15(&VAR_6->refcnt, 1);

 VAR_7 = FUNC_6(VAR_6);
 if (VAR_7) {
  VAR_6->dead = 1;
  FUNC_7(VAR_6);
  VAR_6 = ((void*)0);
  goto out;
 }
 FUNC_8(VAR_6);
 if (VAR_5->flags & VAR_3)
  FUNC_9(VAR_6);


 FUNC_14(VAR_5->ip_ptr, VAR_6);
out:
 return VAR_6 ?: FUNC_1(VAR_7);
out_kfree:
 FUNC_10(VAR_6);
 VAR_6 = ((void*)0);
 goto out;
}
