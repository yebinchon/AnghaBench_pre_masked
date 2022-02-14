
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {void const* dev_addr; int addr_len; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (unsigned char*,void const*,int ) ;
 unsigned char* FUNC_1 (struct sk_buff*,scalar_t__) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_9, struct net_device *VAR_10,
       unsigned short VAR_11,
       const void *VAR_12, const void *VAR_13, unsigned int VAR_14)
{
 unsigned char *VAR_15 = FUNC_1(VAR_9, VAR_4 + VAR_7);

 FUNC_0(VAR_15, (VAR_13 != ((void*)0)) ? VAR_13 : VAR_10->dev_addr, VAR_10->addr_len);
 VAR_15[6] &= ~VAR_1;
 VAR_15[6] &= ~VAR_2;
 VAR_15[6] |= VAR_3;
 VAR_15 += VAR_0;

 if (VAR_12 != ((void*)0))
  FUNC_0(VAR_15, VAR_12, VAR_10->addr_len);
 VAR_15[6] &= ~VAR_1;
 VAR_15[6] |= VAR_2;
 VAR_15[6] |= VAR_3;
 VAR_15 += VAR_0;

 *VAR_15++ = VAR_8;

 *VAR_15++ = VAR_6;
 *VAR_15++ = VAR_6;
 *VAR_15++ = 0;
 *VAR_15++ = 0;
 *VAR_15++ = VAR_5;

 if (VAR_12 != ((void*)0))
  return 37;

 return -37;
}
