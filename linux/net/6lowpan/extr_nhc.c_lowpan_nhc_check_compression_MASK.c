
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct lowpan_nhc {scalar_t__ compress; } ;
struct ipv6hdr {size_t nexthdr; } ;


 int VAR_0 ;
 struct lowpan_nhc** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct sk_buff *VAR_3,
     const struct ipv6hdr *VAR_4, u8 **VAR_5)
{
 struct lowpan_nhc *VAR_6;
 int VAR_7 = 0;

 FUNC_0(&VAR_2);

 VAR_6 = VAR_1[VAR_4->nexthdr];
 if (!(VAR_6 && VAR_6->compress))
  VAR_7 = -VAR_0;

 FUNC_1(&VAR_2);

 return VAR_7;
}
