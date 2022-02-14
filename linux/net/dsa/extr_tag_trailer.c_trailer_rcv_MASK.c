
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ len; int dev; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int ,int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct sk_buff *VAR_0, struct net_device *VAR_1,
       struct packet_type *VAR_2)
{
 u8 *VAR_3;
 int VAR_4;

 if (FUNC_2(VAR_0))
  return ((void*)0);

 VAR_3 = FUNC_3(VAR_0) - 4;
 if (VAR_3[0] != 0x80 || (VAR_3[1] & 0xf8) != 0x00 ||
     (VAR_3[2] & 0xef) != 0x00 || VAR_3[3] != 0x00)
  return ((void*)0);

 VAR_4 = VAR_3[1] & 7;

 VAR_0->dev = FUNC_0(VAR_1, 0, VAR_4);
 if (!VAR_0->dev)
  return ((void*)0);

 if (FUNC_1(VAR_0, VAR_0->len - 4))
  return ((void*)0);

 return VAR_0;
}
