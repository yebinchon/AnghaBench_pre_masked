
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct wireless_dev {int wiphy; } ;
struct TYPE_2__ {size_t extended_capabilities_len; size_t const* extended_capabilities; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; } ;


 int FUNC_0 (size_t const*) ;
 int VAR_0 ;
 int VAR_1 ;

 size_t VAR_2 ;





 scalar_t__ FUNC_1 (size_t,size_t const*,size_t) ;
 size_t FUNC_2 (size_t const*,size_t,size_t const*,int ,int ) ;
 size_t* FUNC_3 (size_t,int ) ;
 size_t* FUNC_4 (size_t const*,size_t,int ) ;
 int FUNC_5 (size_t*,size_t const*,size_t) ;
 struct cfg80211_registered_device* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct wireless_dev *VAR_3,
         const u8 *VAR_4, size_t VAR_5,
         const u8 **VAR_6, size_t *VAR_7)
{
 struct cfg80211_registered_device *VAR_8 = FUNC_6(VAR_3->wiphy);
 u8 *VAR_9;
 size_t VAR_10;

 if (!VAR_8->wiphy.extended_capabilities_len ||
     (VAR_4 && FUNC_1(VAR_2, VAR_4, VAR_5))) {
  *VAR_6 = FUNC_4(VAR_4, VAR_5, VAR_1);
  if (!*VAR_6)
   return -VAR_0;
  *VAR_7 = VAR_5;
  return 0;
 }

 VAR_9 = FUNC_3(VAR_5 + VAR_8->wiphy.extended_capabilities_len + 2,
        VAR_1);
 if (!VAR_9)
  return -VAR_0;

 if (VAR_5) {
  static const u8 VAR_11[] = {

   129,
   131,
   130,
   132,
   128,
   133,
  };

  VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_11,
       FUNC_0(VAR_11), 0);
  FUNC_5(VAR_9, VAR_4, VAR_10);

  FUNC_5(VAR_9 + VAR_10 + VAR_8->wiphy.extended_capabilities_len + 2,
         VAR_4 + VAR_10, VAR_5 - VAR_10);
 } else {
  VAR_10 = 0;
 }


 VAR_9[VAR_10] = VAR_2;
 VAR_9[VAR_10 + 1] = VAR_8->wiphy.extended_capabilities_len;
 FUNC_5(VAR_9 + VAR_10 + 2,
        VAR_8->wiphy.extended_capabilities,
        VAR_8->wiphy.extended_capabilities_len);

 *VAR_6 = VAR_9;
 *VAR_7 = VAR_5 + VAR_8->wiphy.extended_capabilities_len + 2;

 return 0;
}
