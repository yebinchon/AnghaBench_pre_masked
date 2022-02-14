
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int function; } ;
struct sched_dl_entity {struct hrtimer dl_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hrtimer*,int ,int ) ;

void FUNC_1(struct sched_dl_entity *VAR_3)
{
 struct hrtimer *VAR_4 = &VAR_3->dl_timer;

 FUNC_0(VAR_4, VAR_0, VAR_1);
 VAR_4->function = VAR_2;
}
