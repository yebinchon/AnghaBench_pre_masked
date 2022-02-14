
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_mr_pool {scalar_t__ max_items; scalar_t__ pool_type; int item_count; } ;
struct rds_ib_mr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct rds_ib_mr_pool*,int ,struct rds_ib_mr**) ;
 struct rds_ib_mr* FUNC_3 (struct rds_ib_mr_pool*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

struct rds_ib_mr *FUNC_5(struct rds_ib_mr_pool *VAR_5)
{
 struct rds_ib_mr *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 while (1) {
  VAR_6 = FUNC_3(VAR_5);
  if (VAR_6)
   return VAR_6;

  if (FUNC_1(&VAR_5->item_count) <= VAR_5->max_items)
   break;

  FUNC_0(&VAR_5->item_count);

  if (++VAR_7 > 2) {
   if (VAR_5->pool_type == VAR_0)
    FUNC_4(VAR_3);
   else
    FUNC_4(VAR_1);
   break;
  }


  if (VAR_5->pool_type == VAR_0)
   FUNC_4(VAR_4);
  else
   FUNC_4(VAR_2);

  FUNC_2(VAR_5, 0, &VAR_6);
  if (VAR_6)
   return VAR_6;
 }

 return ((void*)0);
}
