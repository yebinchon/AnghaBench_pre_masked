
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct dl_rq {scalar_t__ running_bw; scalar_t__ this_bw; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct dl_rq*) ;

__attribute__((used)) static inline
void FUNC_4(u64 VAR_0, struct dl_rq *VAR_1)
{
 u64 VAR_2 = VAR_1->running_bw;

 FUNC_2(&(FUNC_3(VAR_1))->lock);
 VAR_1->running_bw += VAR_0;
 FUNC_0(VAR_1->running_bw < VAR_2);
 FUNC_0(VAR_1->running_bw > VAR_1->this_bw);

 FUNC_1(FUNC_3(VAR_1), 0);
}
