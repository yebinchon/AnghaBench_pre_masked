
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dql {int slack_start_time; int lowest_slack; scalar_t__ prev_ovlimit; scalar_t__ prev_last_obj_cnt; scalar_t__ prev_num_queued; scalar_t__ last_obj_cnt; scalar_t__ num_completed; scalar_t__ num_queued; scalar_t__ limit; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct dql *VAR_2)
{

 VAR_2->limit = 0;
 VAR_2->num_queued = 0;
 VAR_2->num_completed = 0;
 VAR_2->last_obj_cnt = 0;
 VAR_2->prev_num_queued = 0;
 VAR_2->prev_last_obj_cnt = 0;
 VAR_2->prev_ovlimit = 0;
 VAR_2->lowest_slack = VAR_0;
 VAR_2->slack_start_time = VAR_1;
}
