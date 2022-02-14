
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net {int dummy; } ;
struct TYPE_4__ {int locator_match; } ;
struct ila_xlat_params {TYPE_2__ ip; } ;
struct TYPE_3__ {int hooks_registered; int rhash_table; } ;
struct ila_net {TYPE_1__ xlat; } ;
struct ila_map {int node; int next; struct ila_xlat_params xp; } ;
typedef int spinlock_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct ila_map*) ;
 int FUNC_2 (struct ila_map*,struct ila_xlat_params*) ;
 int * FUNC_3 (struct ila_net*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct ila_map*) ;
 int FUNC_6 (struct ila_map*) ;
 struct ila_map* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 struct ila_net* FUNC_9 (struct net*,int ) ;
 int FUNC_10 (struct net*,int ,int ) ;
 int FUNC_11 (int ,struct ila_map*) ;
 struct ila_map* FUNC_12 (int ,int ) ;
 struct ila_map* FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int *,int *,int ) ;
 int FUNC_15 (int *,int *,int *,int ) ;
 int VAR_5 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct net *VAR_6, struct ila_xlat_params *VAR_7)
{
 struct ila_net *VAR_8 = FUNC_9(VAR_6, VAR_3);
 struct ila_map *VAR_9, *VAR_10;
 spinlock_t *VAR_11 = FUNC_3(VAR_8, VAR_7->ip.locator_match);
 int VAR_12 = 0, VAR_13;

 if (!VAR_8->xlat.hooks_registered) {



  VAR_12 = FUNC_10(VAR_6, VAR_4,
         FUNC_0(VAR_4));
  if (VAR_12)
   return VAR_12;

  VAR_8->xlat.hooks_registered = 1;
 }

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_4(&VAR_7->ip);

 VAR_9->xp = *VAR_7;

 VAR_13 = FUNC_5(VAR_9);

 FUNC_16(VAR_11);

 VAR_10 = FUNC_13(&VAR_8->xlat.rhash_table,
          &VAR_7->ip.locator_match,
          VAR_5);
 if (!VAR_10) {

  VAR_12 = FUNC_14(&VAR_8->xlat.rhash_table,
          &VAR_9->node, VAR_5);
 } else {
  struct ila_map *VAR_14 = VAR_10, *VAR_15 = ((void*)0);

  do {
   if (!FUNC_2(VAR_14, VAR_7)) {
    VAR_12 = -VAR_0;
    goto out;
   }

   if (VAR_13 > FUNC_5(VAR_14))
    break;

   VAR_15 = VAR_14;
   VAR_14 = FUNC_12(VAR_14->next,
    FUNC_8(VAR_11));
  } while (VAR_14);

  if (VAR_15) {

   FUNC_1(VAR_9->next, VAR_14);
   FUNC_11(VAR_15->next, VAR_9);
  } else {

   FUNC_1(VAR_9->next, VAR_10);
   VAR_12 = FUNC_15(&VAR_8->xlat.rhash_table,
            &VAR_10->node,
            &VAR_9->node, VAR_5);
   if (VAR_12)
    goto out;
  }
 }

out:
 FUNC_17(VAR_11);

 if (VAR_12)
  FUNC_6(VAR_9);

 return VAR_12;
}
