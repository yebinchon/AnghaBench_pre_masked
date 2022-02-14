
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int _flags; } ;
typedef enum ieee80211_sta_info_flags { ____Placeholder_ieee80211_sta_info_flags } ieee80211_sta_info_flags ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static inline int FUNC_1(struct sta_info *VAR_0,
    enum ieee80211_sta_info_flags VAR_1)
{
 return FUNC_0(VAR_1, &VAR_0->_flags);
}
