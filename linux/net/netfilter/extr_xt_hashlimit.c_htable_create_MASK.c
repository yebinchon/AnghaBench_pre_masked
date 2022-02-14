
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
struct TYPE_2__ {unsigned int size; int max; int gc_interval; } ;
struct xt_hashlimit_htable {int use; int rnd_initialized; int node; TYPE_1__ cfg; int gc_work; struct net* net; int name; int * pde; int lock; scalar_t__ family; scalar_t__ count; int * hash; } ;
struct seq_operations {int dummy; } ;
struct net {int dummy; } ;
struct hlist_head {int dummy; } ;
struct hashlimit_net {int htables; int ip6t_hashlimit; int ipt_hashlimit; } ;
struct hashlimit_cfg3 {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,void*,int) ;
 struct seq_operations VAR_5 ;
 struct seq_operations VAR_6 ;
 struct seq_operations VAR_7 ;
 int VAR_8 ;
 struct hashlimit_net* FUNC_3 (struct net*) ;
 int FUNC_4 (int *,int *) ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (char const*,int ,int ,struct seq_operations const*,struct xt_hashlimit_htable*) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct xt_hashlimit_htable*,int ,unsigned int) ;
 int VAR_10 ;
 unsigned long FUNC_12 () ;
 int FUNC_13 (struct xt_hashlimit_htable*) ;
 struct xt_hashlimit_htable* FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct net *VAR_11, struct hashlimit_cfg3 *VAR_12,
    const char *VAR_13, u_int8_t VAR_14,
    struct xt_hashlimit_htable **VAR_15,
    int VAR_16)
{
 struct hashlimit_net *VAR_17 = FUNC_3(VAR_11);
 struct xt_hashlimit_htable *VAR_18;
 const struct seq_operations *VAR_19;
 unsigned int VAR_20, VAR_21;
 unsigned long VAR_22 = FUNC_12();
 int VAR_23;

 if (VAR_12->size) {
  VAR_20 = VAR_12->size;
 } else {
  VAR_20 = (VAR_22 << VAR_3) / 16384 /
         sizeof(struct hlist_head);
  if (VAR_22 > 1024 * 1024 * 1024 / VAR_4)
   VAR_20 = 8192;
  if (VAR_20 < 16)
   VAR_20 = 16;
 }

 VAR_18 = FUNC_14(FUNC_11(VAR_18, VAR_8, VAR_20));
 if (VAR_18 == ((void*)0))
  return -VAR_0;
 *VAR_15 = VAR_18;


 VAR_23 = FUNC_2(&VAR_18->cfg, (void *)VAR_12, 3);
 if (VAR_23) {
  FUNC_13(VAR_18);
  return VAR_23;
 }

 VAR_18->cfg.size = VAR_20;
 if (VAR_18->cfg.max == 0)
  VAR_18->cfg.max = 8 * VAR_18->cfg.size;
 else if (VAR_18->cfg.max < VAR_18->cfg.size)
  VAR_18->cfg.max = VAR_18->cfg.size;

 for (VAR_21 = 0; VAR_21 < VAR_18->cfg.size; VAR_21++)
  FUNC_1(&VAR_18->hash[VAR_21]);

 VAR_18->use = 1;
 VAR_18->count = 0;
 VAR_18->family = VAR_14;
 VAR_18->rnd_initialized = 0;
 VAR_18->name = FUNC_6(VAR_13, VAR_1);
 if (!VAR_18->name) {
  FUNC_13(VAR_18);
  return -VAR_0;
 }
 FUNC_10(&VAR_18->lock);

 switch (VAR_16) {
 case 1:
  VAR_19 = &VAR_6;
  break;
 case 2:
  VAR_19 = &VAR_7;
  break;
 default:
  VAR_19 = &VAR_5;
 }

 VAR_18->pde = FUNC_8(VAR_13, 0,
  (VAR_14 == VAR_2) ?
  VAR_17->ipt_hashlimit : VAR_17->ip6t_hashlimit,
  VAR_19, VAR_18);
 if (VAR_18->pde == ((void*)0)) {
  FUNC_5(VAR_18->name);
  FUNC_13(VAR_18);
  return -VAR_0;
 }
 VAR_18->net = VAR_11;

 FUNC_0(&VAR_18->gc_work, VAR_9);
 FUNC_9(VAR_10, &VAR_18->gc_work,
      FUNC_7(VAR_18->cfg.gc_interval));

 FUNC_4(&VAR_18->node, &VAR_17->htables);

 return 0;
}
