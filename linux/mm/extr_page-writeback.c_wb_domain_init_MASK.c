
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_domain {int completions; int dirty_limit_tstamp; int period_timer; int lock; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct wb_domain*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_2 ;

int FUNC_4(struct wb_domain *VAR_3, gfp_t VAR_4)
{
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));

 FUNC_2(&VAR_3->lock);

 FUNC_3(&VAR_3->period_timer, VAR_2, VAR_0);

 VAR_3->dirty_limit_tstamp = VAR_1;

 return FUNC_0(&VAR_3->completions, VAR_4);
}
