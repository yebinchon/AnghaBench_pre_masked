
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_key {int conf; } ;
struct arc4_ctx {int dummy; } ;


 int FUNC_0 (int *,struct sk_buff*,int *) ;
 int FUNC_1 (struct arc4_ctx*,int *,int,int *,size_t) ;

int FUNC_2(struct arc4_ctx *VAR_0,
    struct ieee80211_key *VAR_1,
    struct sk_buff *VAR_2,
    u8 *VAR_3, size_t VAR_4)
{
 u8 VAR_5[16];

 FUNC_0(&VAR_1->conf, VAR_2, VAR_5);

 return FUNC_1(VAR_0, VAR_5, 16,
       VAR_3, VAR_4);
}
