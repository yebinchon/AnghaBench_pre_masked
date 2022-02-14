
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_sub_if_data {TYPE_2__* local; struct ieee80211_chanctx* reserved_chanctx; int reserved_chanctx_list; } ;
struct ieee80211_chanctx {scalar_t__ replace_state; int list; TYPE_1__* replace_ctx; } ;
struct TYPE_5__ {int chanctx_mtx; } ;
struct TYPE_4__ {scalar_t__ replace_state; struct ieee80211_chanctx* replace_ctx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,struct ieee80211_chanctx*) ;
 int FUNC_2 (TYPE_2__*,struct ieee80211_chanctx*) ;
 int FUNC_3 (struct ieee80211_chanctx*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;

int FUNC_7(struct ieee80211_sub_if_data *VAR_5)
{
 struct ieee80211_chanctx *VAR_6 = VAR_5->reserved_chanctx;

 FUNC_6(&VAR_5->local->chanctx_mtx);

 if (FUNC_0(!VAR_6))
  return -VAR_0;

 FUNC_4(&VAR_5->reserved_chanctx_list);
 VAR_5->reserved_chanctx = ((void*)0);

 if (FUNC_1(VAR_5->local, VAR_6) == 0) {
  if (VAR_6->replace_state == VAR_1) {
   if (FUNC_0(!VAR_6->replace_ctx))
    return -VAR_0;

   FUNC_0(VAR_6->replace_ctx->replace_state !=
           VAR_3);
   FUNC_0(VAR_6->replace_ctx->replace_ctx != VAR_6);

   VAR_6->replace_ctx->replace_ctx = ((void*)0);
   VAR_6->replace_ctx->replace_state =
     VAR_2;

   FUNC_5(&VAR_6->list);
   FUNC_3(VAR_6, VAR_4);
  } else {
   FUNC_2(VAR_5->local, VAR_6);
  }
 }

 return 0;
}
