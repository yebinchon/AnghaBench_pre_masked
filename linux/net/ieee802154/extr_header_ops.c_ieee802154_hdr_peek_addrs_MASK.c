
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee802154_hdr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,struct ieee802154_hdr*) ;
 int FUNC_1 (struct ieee802154_hdr*) ;
 int FUNC_2 (struct ieee802154_hdr*,int const*,int) ;
 int * FUNC_3 (struct sk_buff const*) ;
 int const* FUNC_4 (struct sk_buff const*) ;

int
FUNC_5(const struct sk_buff *VAR_1, struct ieee802154_hdr *VAR_2)
{
 const u8 *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = 3, VAR_5;

 if (VAR_3 + 3 > FUNC_4(VAR_1))
  return -VAR_0;

 FUNC_2(VAR_2, VAR_3, 3);

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 < 0 || VAR_3 + VAR_5 > FUNC_4(VAR_1))
  return -VAR_0;

 VAR_4 += FUNC_0(VAR_3 + VAR_4, VAR_2);
 return VAR_4;
}
