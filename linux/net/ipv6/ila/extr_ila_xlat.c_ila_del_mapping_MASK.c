
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net {int dummy; } ;
struct TYPE_3__ {int locator_match; } ;
struct ila_xlat_params {TYPE_1__ ip; } ;
struct TYPE_4__ {int rhash_table; } ;
struct ila_net {TYPE_2__ xlat; } ;
struct ila_map {int node; int next; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ila_map*,struct ila_xlat_params*) ;
 int * FUNC_1 (struct ila_net*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct ila_map*) ;
 int FUNC_3 (int *) ;
 struct ila_net* FUNC_4 (struct net*,int ) ;
 int FUNC_5 (int ,int ) ;
 struct ila_map* FUNC_6 (int ,int ) ;
 struct ila_map* FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,int *,int *,int ) ;
 int VAR_2 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct net *VAR_3, struct ila_xlat_params *VAR_4)
{
 struct ila_net *VAR_5 = FUNC_4(VAR_3, VAR_1);
 struct ila_map *VAR_6, *VAR_7, *VAR_8;
 spinlock_t *VAR_9 = FUNC_1(VAR_5, VAR_4->ip.locator_match);
 int VAR_10 = -VAR_0;

 FUNC_10(VAR_9);

 VAR_7 = FUNC_7(&VAR_5->xlat.rhash_table,
          &VAR_4->ip.locator_match, VAR_2);
 VAR_6 = VAR_7;

 VAR_8 = ((void*)0);

 while (VAR_6) {
  if (FUNC_0(VAR_6, VAR_4)) {
   VAR_8 = VAR_6;
   VAR_6 = FUNC_6(VAR_6->next,
       FUNC_3(VAR_9));
   continue;
  }

  VAR_10 = 0;

  if (VAR_8) {

   FUNC_5(VAR_8->next, VAR_6->next);
  } else {



   VAR_7 = FUNC_6(VAR_6->next,
        FUNC_3(VAR_9));
   if (VAR_7) {



    VAR_10 = FUNC_9(
     &VAR_5->xlat.rhash_table, &VAR_6->node,
     &VAR_7->node, VAR_2);
    if (VAR_10)
     goto out;
   } else {

    VAR_10 = FUNC_8(
      &VAR_5->xlat.rhash_table,
      &VAR_6->node, VAR_2);
   }
  }

  FUNC_2(VAR_6);

  break;
 }

out:
 FUNC_11(VAR_9);

 return VAR_10;
}
