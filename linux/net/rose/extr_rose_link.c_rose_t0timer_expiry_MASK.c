
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct rose_neigh {scalar_t__ dce_mode; } ;


 struct rose_neigh* FUNC_0 (int ,struct timer_list*,int ) ;
 struct rose_neigh* VAR_0 ;
 int FUNC_1 (struct rose_neigh*) ;
 int FUNC_2 (struct rose_neigh*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct rose_neigh *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 FUNC_2(VAR_3);

 VAR_3->dce_mode = 0;

 FUNC_1(VAR_3);
}
