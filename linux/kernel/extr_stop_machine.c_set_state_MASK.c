
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multi_stop_data {int state; int num_threads; int thread_ack; } ;
typedef enum multi_stop_state { ____Placeholder_multi_stop_state } multi_stop_state ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct multi_stop_data *VAR_0,
        enum multi_stop_state VAR_1)
{

 FUNC_1(&VAR_0->thread_ack, VAR_0->num_threads);
 FUNC_2();
 FUNC_0(VAR_0->state, VAR_1);
}
