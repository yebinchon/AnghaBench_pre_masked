
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_bridge_port {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct net_bridge_port*,int ,int ) ;
 int FUNC_1 (struct net_bridge_port*,int ) ;

__attribute__((used)) static int FUNC_2(struct net_bridge_port *VAR_1, int VAR_2,
          u16 VAR_3, u32 VAR_4, bool *VAR_5)
{
 int VAR_6 = 0;

 if (!VAR_1)
  return -VAR_0;

 switch (VAR_2) {
 case 128:
  VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_4);
  if (!VAR_6)
   *VAR_5 = 1;
  break;
 case 129:
  if (!FUNC_1(VAR_1, VAR_3))
   *VAR_5 = 1;
  break;
 }

 return VAR_6;
}
