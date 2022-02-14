
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tkip_ctx {scalar_t__ state; int p1k_iv32; } ;
struct TYPE_6__ {int addr; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;
struct TYPE_7__ {int txlock; struct tkip_ctx tx; } ;
struct TYPE_8__ {TYPE_3__ tkip; } ;
struct TYPE_5__ {int * key; } ;
struct ieee80211_key {TYPE_4__ u; TYPE_1__ conf; struct ieee80211_sub_if_data* sdata; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const*,struct tkip_ctx*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_key *VAR_2, u32 VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4 = VAR_2->sdata;
 struct tkip_ctx *VAR_5 = &VAR_2->u.tkip.tx;
 const u8 *VAR_6 = &VAR_2->conf.key[VAR_0];

 FUNC_0(&VAR_2->u.tkip.txlock);
 if (VAR_5->p1k_iv32 != VAR_3 || VAR_5->state == VAR_1)
  FUNC_1(VAR_6, VAR_5, VAR_4->vif.addr, VAR_3);
}
