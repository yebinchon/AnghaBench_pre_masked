
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backing_dev_info {int max_ratio; int wb_waitq; int wb_list; int bdi_list; int max_prop_frac; scalar_t__ min_ratio; int refcnt; int * dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct backing_dev_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct backing_dev_info *VAR_1)
{
 int VAR_2;

 VAR_1->dev = ((void*)0);

 FUNC_3(&VAR_1->refcnt);
 VAR_1->min_ratio = 0;
 VAR_1->max_ratio = 100;
 VAR_1->max_prop_frac = VAR_0;
 FUNC_0(&VAR_1->bdi_list);
 FUNC_0(&VAR_1->wb_list);
 FUNC_2(&VAR_1->wb_waitq);

 VAR_2 = FUNC_1(VAR_1);

 return VAR_2;
}
