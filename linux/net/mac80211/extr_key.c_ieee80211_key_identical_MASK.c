
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;
struct TYPE_4__ {int keylen; scalar_t__ cipher; int flags; int * key; } ;
struct ieee80211_key {TYPE_2__ conf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static bool FUNC_3(struct ieee80211_sub_if_data *VAR_5,
        struct ieee80211_key *VAR_6,
        struct ieee80211_key *VAR_7)
{
 u8 VAR_8[VAR_4], VAR_9[VAR_4];
 u8 *VAR_10, *VAR_11;

 if (!VAR_6 || VAR_7->conf.keylen != VAR_6->conf.keylen)
  return 0;

 VAR_10 = VAR_6->conf.key;
 VAR_11 = VAR_7->conf.key;






 if (VAR_5->vif.type == VAR_1 &&
     VAR_7->conf.cipher == VAR_3 &&
     VAR_7->conf.keylen == VAR_4 &&
     !(VAR_7->conf.flags & VAR_0)) {
  FUNC_1(VAR_8, VAR_10, VAR_4);
  FUNC_1(VAR_9, VAR_11, VAR_4);
  FUNC_2(VAR_8 + VAR_2, 0, 8);
  FUNC_2(VAR_9 + VAR_2, 0, 8);
  VAR_10 = VAR_8;
  VAR_11 = VAR_9;
 }

 return !FUNC_0(VAR_10, VAR_11, VAR_7->conf.keylen);
}
