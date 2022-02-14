
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_mclist {int type; int addr; int alen; } ;
struct net_device {int addr_len; } ;


 int VAR_0 ;




 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, struct packet_mclist *VAR_2,
    int VAR_3)
{
 switch (VAR_2->type) {
 case 130:
  if (VAR_2->alen != VAR_1->addr_len)
   return -VAR_0;
  if (VAR_3 > 0)
   return FUNC_0(VAR_1, VAR_2->addr);
  else
   return FUNC_1(VAR_1, VAR_2->addr);
  break;
 case 129:
  return FUNC_3(VAR_1, VAR_3);
 case 131:
  return FUNC_2(VAR_1, VAR_3);
 case 128:
  if (VAR_2->alen != VAR_1->addr_len)
   return -VAR_0;
  if (VAR_3 > 0)
   return FUNC_4(VAR_1, VAR_2->addr);
  else
   return FUNC_5(VAR_1, VAR_2->addr);
  break;
 default:
  break;
 }
 return 0;
}
