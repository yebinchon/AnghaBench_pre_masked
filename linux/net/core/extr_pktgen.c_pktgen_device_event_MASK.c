
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktgen_net {scalar_t__ pktgen_exiting; } ;
struct notifier_block {int dummy; } ;
struct net_device {int name; } ;




 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 struct pktgen_net* FUNC_1 (int ,int ) ;
 struct net_device* FUNC_2 (void*) ;
 int VAR_1 ;
 int FUNC_3 (struct pktgen_net*,struct net_device*) ;
 int FUNC_4 (struct pktgen_net*,int ) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_2,
          unsigned long VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = FUNC_2(VAR_4);
 struct pktgen_net *VAR_6 = FUNC_1(FUNC_0(VAR_5), VAR_1);

 if (VAR_6->pktgen_exiting)
  return VAR_0;





 switch (VAR_3) {
 case 129:
  FUNC_3(VAR_6, VAR_5);
  break;

 case 128:
  FUNC_4(VAR_6, VAR_5->name);
  break;
 }

 return VAR_0;
}
