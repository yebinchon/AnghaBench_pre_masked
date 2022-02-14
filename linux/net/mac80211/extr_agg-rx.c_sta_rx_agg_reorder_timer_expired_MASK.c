
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct tid_ampdu_rx {int tid; int sta; } ;


 struct tid_ampdu_rx* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 struct tid_ampdu_rx* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct tid_ampdu_rx *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);

 FUNC_2();
 FUNC_1(VAR_3->sta, VAR_3->tid);
 FUNC_3();
}
