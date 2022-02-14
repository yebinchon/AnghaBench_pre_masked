
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {int len; } ;
struct lowpan_802154_cb {int d_size; scalar_t__ d_offset; int d_tag; } ;
struct ipv6hdr {int dummy; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sk_buff*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4, u8 VAR_5,
    struct lowpan_802154_cb *VAR_6)
{
 bool VAR_7;
 u8 VAR_8 = 0, VAR_9 = 0;
 __be16 VAR_10 = 0;

 VAR_7 = FUNC_0(VAR_4, &VAR_8, 1);
 VAR_7 |= FUNC_0(VAR_4, &VAR_9, 1);



 VAR_6->d_size = (VAR_8 & VAR_2) <<
  VAR_3 | VAR_9;
 VAR_7 |= FUNC_0(VAR_4, &VAR_10, 2);
 VAR_6->d_tag = FUNC_1(VAR_10);

 if (VAR_5 == VAR_1) {
  VAR_7 |= FUNC_0(VAR_4, &VAR_6->d_offset, 1);
 } else {
  FUNC_2(VAR_4);
  VAR_6->d_offset = 0;

  VAR_7 |= VAR_6->d_size < sizeof(struct ipv6hdr);

  VAR_7 |= !VAR_4->len;
 }

 if (FUNC_3(VAR_7))
  return -VAR_0;

 return 0;
}
