
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nprim; } ;
struct TYPE_6__ {scalar_t__ nprim; int table; } ;
struct policydb {TYPE_2__ p_cats; TYPE_3__ p_levels; } ;
struct mls_level {scalar_t__ sens; int cat; } ;
struct level_datum {TYPE_1__* level; } ;
struct TYPE_4__ {int cat; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 struct level_datum* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct policydb*,int ,scalar_t__) ;

int FUNC_3(struct policydb *VAR_1, struct mls_level *VAR_2)
{
 struct level_datum *VAR_3;

 if (!VAR_2->sens || VAR_2->sens > VAR_1->p_levels.nprim)
  return 0;
 VAR_3 = FUNC_1(VAR_1->p_levels.table,
      FUNC_2(VAR_1, VAR_0, VAR_2->sens - 1));
 if (!VAR_3)
  return 0;






 return FUNC_0(&VAR_3->level->cat, &VAR_2->cat,
    VAR_1->p_cats.nprim);
}
