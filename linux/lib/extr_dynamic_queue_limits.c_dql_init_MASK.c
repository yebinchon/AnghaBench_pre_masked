
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dql {unsigned int slack_hold_time; scalar_t__ min_limit; int max_limit; } ;


 int VAR_0 ;
 int FUNC_0 (struct dql*) ;

void FUNC_1(struct dql *VAR_1, unsigned int VAR_2)
{
 VAR_1->max_limit = VAR_0;
 VAR_1->min_limit = 0;
 VAR_1->slack_hold_time = VAR_2;
 FUNC_0(VAR_1);
}
