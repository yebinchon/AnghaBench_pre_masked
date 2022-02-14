
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int hash_node; } ;
struct ieee80211_local {int sta_hash; } ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct ieee80211_local *VAR_1,
        struct sta_info *VAR_2)
{
 return FUNC_0(&VAR_1->sta_hash, &VAR_2->hash_node,
          VAR_0);
}
