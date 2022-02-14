
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct posix_cputimers {struct posix_cputimer_base* bases; } ;
struct posix_cputimer_base {int tqhead; int nextevt; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct list_head*,int ) ;

__attribute__((used)) static void FUNC_1(struct posix_cputimers *VAR_1, u64 *VAR_2,
        struct list_head *VAR_3)
{
 struct posix_cputimer_base *VAR_4 = VAR_1->bases;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++, VAR_4++) {
  VAR_4->nextevt = FUNC_0(&VAR_4->tqhead, VAR_3,
          VAR_2[VAR_5]);
 }
}
