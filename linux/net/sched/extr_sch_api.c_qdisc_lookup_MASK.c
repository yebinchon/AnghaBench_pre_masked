
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int qdisc; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int qdisc_sleeping; } ;


 TYPE_1__* FUNC_0 (struct net_device*) ;
 struct Qdisc* FUNC_1 (int ,int ) ;

struct Qdisc *FUNC_2(struct net_device *VAR_0, u32 VAR_1)
{
 struct Qdisc *VAR_2;

 if (!VAR_1)
  return ((void*)0);
 VAR_2 = FUNC_1(VAR_0->qdisc, VAR_1);
 if (VAR_2)
  goto out;

 if (FUNC_0(VAR_0))
  VAR_2 = FUNC_1(
   FUNC_0(VAR_0)->qdisc_sleeping,
   VAR_1);
out:
 return VAR_2;
}
