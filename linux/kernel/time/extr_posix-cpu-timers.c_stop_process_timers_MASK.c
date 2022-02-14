
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_cputimers {int timers_active; } ;
struct signal_struct {struct posix_cputimers posix_cputimers; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct signal_struct*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct signal_struct *VAR_1)
{
 struct posix_cputimers *VAR_2 = &VAR_1->posix_cputimers;


 FUNC_0(VAR_2->timers_active, 0);
 FUNC_1(VAR_1, VAR_0);
}
