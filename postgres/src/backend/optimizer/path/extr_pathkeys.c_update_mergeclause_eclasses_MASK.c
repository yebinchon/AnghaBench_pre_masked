
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ mergeopfamilies; TYPE_1__* right_ec; TYPE_2__* left_ec; } ;
struct TYPE_6__ {struct TYPE_6__* ec_merged; } ;
struct TYPE_5__ {struct TYPE_5__* ec_merged; } ;
typedef TYPE_3__ RestrictInfo ;
typedef int PlannerInfo ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

void
FUNC_1(PlannerInfo *VAR_1, RestrictInfo *VAR_2)
{

 FUNC_0(VAR_2->mergeopfamilies != VAR_0);

 FUNC_0(VAR_2->left_ec != ((void*)0));
 FUNC_0(VAR_2->right_ec != ((void*)0));


 while (VAR_2->left_ec->ec_merged)
  VAR_2->left_ec = VAR_2->left_ec->ec_merged;
 while (VAR_2->right_ec->ec_merged)
  VAR_2->right_ec = VAR_2->right_ec->ec_merged;
}
