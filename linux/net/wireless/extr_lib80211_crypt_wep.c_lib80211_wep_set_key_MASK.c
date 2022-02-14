
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lib80211_wep_data {int key_len; int key; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, int VAR_2, u8 * VAR_3, void *VAR_4)
{
 struct lib80211_wep_data *VAR_5 = VAR_4;

 if (VAR_2 < 0 || VAR_2 > VAR_0)
  return -1;

 FUNC_0(VAR_5->key, VAR_1, VAR_2);
 VAR_5->key_len = VAR_2;

 return 0;
}
