
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_rxq_info {scalar_t__ reg_state; int queue_index; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct xdp_rxq_info*) ;
 int FUNC_2 (struct xdp_rxq_info*) ;

int FUNC_3(struct xdp_rxq_info *VAR_4,
       struct net_device *VAR_5, u32 VAR_6)
{
 if (VAR_4->reg_state == VAR_3) {
  FUNC_0(1, "Driver promised not to register this");
  return -VAR_0;
 }

 if (VAR_4->reg_state == VAR_2) {
  FUNC_0(1, "Missing unregister, handled but fix driver");
  FUNC_2(VAR_4);
 }

 if (!VAR_5) {
  FUNC_0(1, "Missing net_device from driver");
  return -VAR_1;
 }


 FUNC_1(VAR_4);
 VAR_4->dev = VAR_5;
 VAR_4->queue_index = VAR_6;

 VAR_4->reg_state = VAR_2;
 return 0;
}
