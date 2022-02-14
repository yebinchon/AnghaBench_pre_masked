
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {void* dev_addr; int flags; } ;
struct ethhdr {int h_dest; int h_source; void* h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,void const*,int ) ;
 struct ethhdr* FUNC_3 (struct sk_buff*,int) ;

int FUNC_4(struct sk_buff *VAR_6, struct net_device *VAR_7,
        unsigned short VAR_8,
        const void *VAR_9, const void *VAR_10, unsigned int VAR_11)
{
 struct ethhdr *VAR_12 = FUNC_3(VAR_6, VAR_1);

 if (VAR_8 != VAR_3 && VAR_8 != VAR_2)
  VAR_12->h_proto = FUNC_1(VAR_8);
 else
  VAR_12->h_proto = FUNC_1(VAR_11);





 if (!VAR_10)
  VAR_10 = VAR_7->dev_addr;
 FUNC_2(VAR_12->h_source, VAR_10, VAR_0);

 if (VAR_9) {
  FUNC_2(VAR_12->h_dest, VAR_9, VAR_0);
  return VAR_1;
 }





 if (VAR_7->flags & (VAR_4 | VAR_5)) {
  FUNC_0(VAR_12->h_dest);
  return VAR_1;
 }

 return -VAR_1;
}
