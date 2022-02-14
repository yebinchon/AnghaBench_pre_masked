
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mls_level {int dummy; } ;
struct TYPE_3__ {struct mls_level* level; } ;
struct user_datum {struct mls_level dfltlevel; TYPE_1__ range; } ;
struct policydb {scalar_t__ mls_enabled; } ;
struct TYPE_4__ {struct mls_level* level; } ;
struct context {TYPE_2__ range; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mls_level*,struct mls_level*,struct mls_level*) ;
 scalar_t__ FUNC_1 (struct mls_level*,struct mls_level*) ;

int FUNC_2(struct policydb *VAR_1,
    struct context *VAR_2, struct user_datum *VAR_3,
    struct context *VAR_4)
{
 if (VAR_1->mls_enabled) {
  struct mls_level *VAR_5 = &(VAR_2->range.level[0]);
  struct mls_level *VAR_6 = &(VAR_2->range.level[1]);
  struct mls_level *VAR_7 = &(VAR_3->range.level[0]);
  struct mls_level *VAR_8 = &(VAR_3->range.level[1]);
  struct mls_level *VAR_9 = &(VAR_3->dfltlevel);
  struct mls_level *VAR_10 = &(VAR_4->range.level[0]);
  struct mls_level *VAR_11 = &(VAR_4->range.level[1]);


  if (FUNC_0(VAR_9, VAR_5, VAR_6))
   *VAR_10 = *VAR_9;
  else if (FUNC_0(VAR_5, VAR_9, VAR_8))
   *VAR_10 = *VAR_5;
  else if (FUNC_0(VAR_6, VAR_7, VAR_9))
   *VAR_10 = *VAR_7;
  else
   return -VAR_0;






  if (FUNC_1(VAR_8, VAR_6))
   *VAR_11 = *VAR_6;
  else if (FUNC_1(VAR_6, VAR_8))
   *VAR_11 = *VAR_8;
  else
   return -VAR_0;
 }

 return 0;
}
