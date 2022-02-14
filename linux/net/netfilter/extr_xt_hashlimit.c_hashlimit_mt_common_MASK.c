
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int mode; int expire; } ;
struct xt_hashlimit_htable {TYPE_1__ cfg; } ;
struct xt_action_param {int hotdrop; int thoff; } ;
struct sk_buff {int len; } ;
struct hashlimit_cfg3 {int mode; } ;
struct TYPE_4__ {scalar_t__ current_rate; scalar_t__ burst; int cost; int credit; int prev_window; } ;
struct dsthash_ent {int lock; TYPE_2__ rateinfo; void* expires; } ;
struct dsthash_dst {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dsthash_ent* FUNC_0 (struct xt_hashlimit_htable*,struct dsthash_dst*,int*) ;
 struct dsthash_ent* FUNC_1 (struct xt_hashlimit_htable*,struct dsthash_dst*) ;
 int FUNC_2 (int,struct dsthash_ent*) ;
 scalar_t__ FUNC_3 (struct xt_hashlimit_htable*,struct dsthash_dst*,struct sk_buff const*,int ) ;
 unsigned long VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct dsthash_ent*,struct xt_hashlimit_htable*,int) ;
 int FUNC_8 (struct dsthash_ent*,unsigned long,int ,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static bool
FUNC_10(const struct sk_buff *VAR_4, struct xt_action_param *VAR_5,
      struct xt_hashlimit_htable *VAR_6,
      const struct hashlimit_cfg3 *VAR_7, int VAR_8)
{
 unsigned long VAR_9 = VAR_3;
 struct dsthash_ent *VAR_10;
 struct dsthash_dst VAR_11;
 bool VAR_12 = 0;
 u64 VAR_13;

 if (FUNC_3(VAR_6, &VAR_11, VAR_4, VAR_5->thoff) < 0)
  goto hotdrop;

 FUNC_4();
 VAR_10 = FUNC_1(VAR_6, &VAR_11);
 if (VAR_10 == ((void*)0)) {
  VAR_10 = FUNC_0(VAR_6, &VAR_11, &VAR_12);
  if (VAR_10 == ((void*)0)) {
   FUNC_5();
   goto hotdrop;
  } else if (VAR_12) {

   VAR_10->expires = VAR_9 + FUNC_6(VAR_6->cfg.expire);
   FUNC_8(VAR_10, VAR_9, VAR_6->cfg.mode, VAR_8);
  } else {
   VAR_10->expires = VAR_3 + FUNC_6(VAR_6->cfg.expire);
   FUNC_7(VAR_10, VAR_6, VAR_8);
  }
 } else {

  VAR_10->expires = VAR_9 + FUNC_6(VAR_6->cfg.expire);
  FUNC_8(VAR_10, VAR_9, VAR_6->cfg.mode, VAR_8);
 }

 if (VAR_7->mode & VAR_2) {
  VAR_13 = (VAR_7->mode & VAR_0) ? VAR_4->len : 1;
  VAR_10->rateinfo.current_rate += VAR_13;

  if (!VAR_10->rateinfo.prev_window &&
      (VAR_10->rateinfo.current_rate <= VAR_10->rateinfo.burst)) {
   FUNC_9(&VAR_10->lock);
   FUNC_5();
   return !(VAR_7->mode & VAR_1);
  } else {
   goto overlimit;
  }
 }

 if (VAR_7->mode & VAR_0)
  VAR_13 = FUNC_2(VAR_4->len, VAR_10);
 else
  VAR_13 = VAR_10->rateinfo.cost;

 if (VAR_10->rateinfo.credit >= VAR_13) {

  VAR_10->rateinfo.credit -= VAR_13;
  FUNC_9(&VAR_10->lock);
  FUNC_5();
  return !(VAR_7->mode & VAR_1);
 }

overlimit:
 FUNC_9(&VAR_10->lock);
 FUNC_5();

 return VAR_7->mode & VAR_1;

 hotdrop:
 VAR_5->hotdrop = 1;
 return 0;
}
