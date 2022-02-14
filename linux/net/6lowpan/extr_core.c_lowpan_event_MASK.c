
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {scalar_t__ type; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int * s6_addr32; int s6_addr; } ;
struct TYPE_5__ {TYPE_1__* table; } ;
struct TYPE_6__ {TYPE_2__ ctx; } ;
struct TYPE_4__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 struct inet6_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct inet6_dev*,struct in6_addr*,int ) ;
 int FUNC_3 (int ,struct net_device*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int) ;
 TYPE_3__* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int ) ;
 struct net_device* FUNC_8 (void*) ;

__attribute__((used)) static int FUNC_9(struct notifier_block *VAR_6,
   unsigned long VAR_7, void *VAR_8)
{
 struct net_device *VAR_9 = FUNC_8(VAR_8);
 struct inet6_dev *VAR_10;
 struct in6_addr VAR_11;
 int VAR_12;

 if (VAR_9->type != VAR_0)
  return VAR_4;

 VAR_10 = FUNC_0(VAR_9);
 if (!VAR_10)
  return VAR_4;

 switch (VAR_7) {
 case 128:
 case 130:

  if (FUNC_7(VAR_9, VAR_3) &&
      FUNC_3(VAR_11.s6_addr + 8, VAR_9) == 0) {
   FUNC_1(&VAR_11.s6_addr32[0],
          FUNC_5(0xFE800000), 0);
   FUNC_2(VAR_10, &VAR_11, 0);
  }
  break;
 case 129:
  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
   FUNC_4(VAR_1,
      &FUNC_6(VAR_9)->ctx.table[VAR_12].flags);
  break;
 default:
  return VAR_4;
 }

 return VAR_5;
}
