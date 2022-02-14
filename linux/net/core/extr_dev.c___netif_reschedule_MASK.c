
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct softnet_data {struct Qdisc** output_queue_tailp; } ;
struct Qdisc {struct Qdisc* next_sched; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 struct softnet_data* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct Qdisc *VAR_2)
{
 struct softnet_data *VAR_3;
 unsigned long VAR_4;

 FUNC_1(VAR_4);
 VAR_3 = FUNC_3(&VAR_1);
 VAR_2->next_sched = ((void*)0);
 *VAR_3->output_queue_tailp = VAR_2;
 VAR_3->output_queue_tailp = &VAR_2->next_sched;
 FUNC_2(VAR_0);
 FUNC_0(VAR_4);
}
