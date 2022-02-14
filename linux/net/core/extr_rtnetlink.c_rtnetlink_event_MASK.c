
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_0 (void*) ;
 int FUNC_1 (int ,struct net_device*,int ,int ,int ,int *,int ) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_3, unsigned long VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = FUNC_0(VAR_5);

 switch (VAR_4) {
 case 129:
 case 136:
 case 139:
 case 135:
 case 132:
 case 140:
 case 130:
 case 131:
 case 134:
 case 128:
 case 138:
 case 137:
 case 133:
  FUNC_1(VAR_2, VAR_6, 0, FUNC_2(VAR_4),
       VAR_0, ((void*)0), 0);
  break;
 default:
  break;
 }
 return VAR_1;
}
