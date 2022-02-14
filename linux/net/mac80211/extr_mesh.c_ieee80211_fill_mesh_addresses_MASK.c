
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hdr {int addr4; int addr3; int addr2; int addr1; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int ,int const*,int ) ;

int FUNC_4(struct ieee80211_hdr *VAR_3, __le16 *VAR_4,
      const u8 *VAR_5, const u8 *VAR_6)
{
 if (FUNC_2(VAR_5)) {
  *VAR_4 |= FUNC_0(VAR_1);

  FUNC_3(VAR_3->addr1, VAR_5, VAR_0);
  FUNC_3(VAR_3->addr2, VAR_6, VAR_0);
  FUNC_3(VAR_3->addr3, VAR_6, VAR_0);
  return 24;
 } else {
  *VAR_4 |= FUNC_0(VAR_1 | VAR_2);

  FUNC_1(VAR_3->addr1);
  FUNC_3(VAR_3->addr2, VAR_6, VAR_0);
  FUNC_3(VAR_3->addr3, VAR_5, VAR_0);
  FUNC_3(VAR_3->addr4, VAR_6, VAR_0);
  return 30;
 }
}
