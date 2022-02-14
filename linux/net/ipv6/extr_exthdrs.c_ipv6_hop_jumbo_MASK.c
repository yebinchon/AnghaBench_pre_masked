
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int len; int dev; } ;
struct net {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct inet6_dev {int dummy; } ;
typedef int __be32 ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {scalar_t__ payload_len; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct net*,struct inet6_dev*,int ) ;
 struct inet6_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ,int) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 struct net* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (char*,unsigned char const) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,scalar_t__) ;
 unsigned char* FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_11(struct sk_buff *VAR_5, int VAR_6)
{
 const unsigned char *VAR_7 = FUNC_10(VAR_5);
 struct inet6_dev *VAR_8 = FUNC_2(VAR_5->dev);
 struct net *VAR_9 = FUNC_5(VAR_5);
 u32 VAR_10;

 if (VAR_7[VAR_6 + 1] != 4 || (VAR_6 & 3) != 2) {
  FUNC_7("ipv6_hop_jumbo: wrong jumbo opt length/alignment %d\n",
        VAR_7[VAR_6+1]);
  FUNC_1(VAR_9, VAR_8, VAR_2);
  goto drop;
 }

 VAR_10 = FUNC_8(*(__be32 *)(VAR_7 + VAR_6 + 2));
 if (VAR_10 <= VAR_4) {
  FUNC_1(VAR_9, VAR_8, VAR_2);
  FUNC_3(VAR_5, VAR_0, VAR_6+2);
  return 0;
 }
 if (FUNC_4(VAR_5)->payload_len) {
  FUNC_1(VAR_9, VAR_8, VAR_2);
  FUNC_3(VAR_5, VAR_0, VAR_6);
  return 0;
 }

 if (VAR_10 > VAR_5->len - sizeof(struct ipv6hdr)) {
  FUNC_1(VAR_9, VAR_8, VAR_3);
  goto drop;
 }

 if (FUNC_9(VAR_5, VAR_10 + sizeof(struct ipv6hdr)))
  goto drop;

 FUNC_0(VAR_5)->flags |= VAR_1;
 return 1;

drop:
 FUNC_6(VAR_5);
 return 0;
}
