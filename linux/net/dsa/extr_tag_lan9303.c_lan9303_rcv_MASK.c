
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {int data; int offload_fwd_mark; int dev; } ;
struct packet_type {int dummy; } ;
struct net_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct net_device*,int ,unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct sk_buff *VAR_5, struct net_device *VAR_6,
       struct packet_type *VAR_7)
{
 u16 *VAR_8;
 u16 VAR_9;
 unsigned int VAR_10;

 if (FUNC_7(!FUNC_5(VAR_5, VAR_3))) {
  FUNC_0(&VAR_6->dev,
         "Dropping packet, cannot pull\n");
  return ((void*)0);
 }







 VAR_8 = (u16 *)(VAR_5->data - 2);

 if (VAR_8[0] != FUNC_2(VAR_2)) {
  FUNC_0(&VAR_6->dev, "Dropping packet due to invalid VLAN marker\n");
  return ((void*)0);
 }

 VAR_9 = FUNC_4(VAR_8[1]);
 VAR_10 = VAR_9 & 0x3;

 VAR_5->dev = FUNC_1(VAR_6, 0, VAR_10);
 if (!VAR_5->dev) {
  FUNC_0(&VAR_6->dev, "Dropping packet due to invalid source port\n");
  return ((void*)0);
 }




 FUNC_6(VAR_5, 2 + 2);
 FUNC_3(VAR_5->data - VAR_1, VAR_5->data - (VAR_1 + VAR_3),
  2 * VAR_0);
 VAR_5->offload_fwd_mark = !(VAR_9 & VAR_4);

 return VAR_5;
}
