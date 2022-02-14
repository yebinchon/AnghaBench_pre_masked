
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_bearer {int addr; TYPE_1__* media; int mtu; int up; } ;
struct notifier_block {int dummy; } ;
struct net_device {scalar_t__ dev_addr; int mtu; int tipc_ptr; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int (* raw2addr ) (struct tipc_bearer*,int *,char*) ;} ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,struct tipc_bearer*) ;
 int FUNC_1 (int ,int *) ;
 struct net* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (void*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 struct tipc_bearer* FUNC_6 (int ) ;
 int FUNC_7 (struct tipc_bearer*,int *,char*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct net_device*,int ) ;
 int FUNC_10 (struct net*,struct tipc_bearer*) ;
 int FUNC_11 (struct net_device*,struct tipc_bearer*,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct notifier_block *VAR_2, unsigned long VAR_3,
    void *VAR_4)
{
 struct net_device *VAR_5 = FUNC_3(VAR_4);
 struct net *VAR_6 = FUNC_2(VAR_5);
 struct tipc_bearer *VAR_7;

 VAR_7 = FUNC_6(VAR_5->tipc_ptr);
 if (!VAR_7)
  return VAR_0;

 FUNC_11(VAR_5, VAR_7, VAR_3);
 switch (VAR_3) {
 case 134:
  if (FUNC_4(VAR_5) && FUNC_5(VAR_5)) {
   FUNC_8(0, &VAR_7->up);
   break;
  }

 case 130:
  FUNC_1(0, &VAR_7->up);
  FUNC_10(VAR_6, VAR_7);
  break;
 case 128:
  FUNC_8(0, &VAR_7->up);
  break;
 case 132:
  if (FUNC_9(VAR_5, 0)) {
   FUNC_0(VAR_6, VAR_7);
   break;
  }
  VAR_7->mtu = VAR_5->mtu;
  FUNC_10(VAR_6, VAR_7);
  break;
 case 133:
  VAR_7->media->raw2addr(VAR_7, &VAR_7->addr,
       (char *)VAR_5->dev_addr);
  FUNC_10(VAR_6, VAR_7);
  break;
 case 129:
 case 131:
  FUNC_0(VAR_6, VAR_7);
  break;
 }
 return VAR_1;
}
