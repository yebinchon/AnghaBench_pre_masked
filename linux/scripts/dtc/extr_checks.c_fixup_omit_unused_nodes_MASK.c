
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int is_referenced; scalar_t__ omit_if_unused; scalar_t__ labels; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;


 int FUNC_0 (struct node*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct check *VAR_1, struct dt_info *VAR_2,
        struct node *VAR_3)
{
 if (VAR_0 && VAR_3->labels)
  return;
 if (VAR_3->omit_if_unused && !VAR_3->is_referenced)
  FUNC_0(VAR_3);
}
