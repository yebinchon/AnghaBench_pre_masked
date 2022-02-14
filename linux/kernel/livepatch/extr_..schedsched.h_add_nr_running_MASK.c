
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rq {unsigned int nr_running; TYPE_1__* rd; } ;
struct TYPE_2__ {int overload; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct rq*) ;

__attribute__((used)) static inline void FUNC_3(struct rq *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2 = VAR_0->nr_running;

 VAR_0->nr_running = VAR_2 + VAR_1;
 FUNC_2(VAR_0);
}
