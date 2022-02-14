
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {void* vif; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct fq_tin {int dummy; } ;
struct fq_flow {int dummy; } ;
struct fq {int dummy; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_1(struct fq *VAR_0, struct fq_tin *VAR_1,
    struct fq_flow *VAR_2, struct sk_buff *VAR_3,
    void *VAR_4)
{
 struct ieee80211_tx_info *VAR_5 = FUNC_0(VAR_3);

 return VAR_5->control.vif == VAR_4;
}
