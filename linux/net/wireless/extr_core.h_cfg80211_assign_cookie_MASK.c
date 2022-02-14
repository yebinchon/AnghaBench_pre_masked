
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct cfg80211_registered_device {scalar_t__ cookie_counter; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline u64 FUNC_1(struct cfg80211_registered_device *VAR_0)
{
 u64 VAR_1 = ++VAR_0->cookie_counter;

 if (FUNC_0(VAR_1 == 0))
  VAR_1 = ++VAR_0->cookie_counter;

 return VAR_1;
}
