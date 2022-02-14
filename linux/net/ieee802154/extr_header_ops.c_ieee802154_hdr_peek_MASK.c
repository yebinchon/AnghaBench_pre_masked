
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ security_enabled; } ;
struct ieee802154_hdr {int sec; TYPE_1__ fc; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t const) ;
 scalar_t__ FUNC_1 (size_t const*,int *) ;
 int FUNC_2 (struct sk_buff const*,struct ieee802154_hdr*) ;
 int* VAR_1 ;
 size_t* FUNC_3 (struct sk_buff const*) ;
 size_t const* FUNC_4 (struct sk_buff const*) ;

int
FUNC_5(const struct sk_buff *VAR_2, struct ieee802154_hdr *VAR_3)
{
 const u8 *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5 < 0)
  return -VAR_0;

 if (VAR_3->fc.security_enabled) {
  u8 VAR_6 = FUNC_0(*(VAR_4 + VAR_5));
  int VAR_7 = VAR_5 + VAR_1[VAR_6];

  if (VAR_4 + VAR_7 > FUNC_4(VAR_2))
   return -VAR_0;

  VAR_5 += FUNC_1(VAR_4 + VAR_5, &VAR_3->sec);
 }

 return VAR_5;
}
