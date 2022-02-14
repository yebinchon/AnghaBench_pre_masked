
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max; } ;
struct xt_hashlimit_htable {int rnd_initialized; scalar_t__ count; int lock; int * hash; TYPE_1__ cfg; int rnd; } ;
struct dsthash_ent {int node; int lock; int dst; } ;
struct dsthash_dst {int dummy; } ;


 int VAR_0 ;
 struct dsthash_ent* FUNC_0 (struct xt_hashlimit_htable*,struct dsthash_dst const*) ;
 int FUNC_1 (int *,int) ;
 size_t FUNC_2 (struct xt_hashlimit_htable*,struct dsthash_dst const*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 struct dsthash_ent* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,struct dsthash_dst const*,int) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static struct dsthash_ent *
FUNC_11(struct xt_hashlimit_htable *VAR_2,
     const struct dsthash_dst *VAR_3, bool *VAR_4)
{
 struct dsthash_ent *VAR_5;

 FUNC_7(&VAR_2->lock);




 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5 != ((void*)0)) {
  FUNC_9(&VAR_2->lock);
  *VAR_4 = 1;
  return VAR_5;
 }



 if (FUNC_10(!VAR_2->rnd_initialized)) {
  FUNC_1(&VAR_2->rnd, sizeof(VAR_2->rnd));
  VAR_2->rnd_initialized = 1;
 }

 if (VAR_2->cfg.max && VAR_2->count >= VAR_2->cfg.max) {

  FUNC_6("max count of %u reached\n", VAR_2->cfg.max);
  VAR_5 = ((void*)0);
 } else
  VAR_5 = FUNC_4(VAR_1, VAR_0);
 if (VAR_5) {
  FUNC_5(&VAR_5->dst, VAR_3, sizeof(VAR_5->dst));
  FUNC_8(&VAR_5->lock);

  FUNC_7(&VAR_5->lock);
  FUNC_3(&VAR_5->node, &VAR_2->hash[FUNC_2(VAR_2, VAR_3)]);
  VAR_2->count++;
 }
 FUNC_9(&VAR_2->lock);
 return VAR_5;
}
