
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq {int nr_running; } ;


 int FUNC_0 (struct rq*) ;

__attribute__((used)) static inline void FUNC_1(struct rq *VAR_0, unsigned VAR_1)
{
 VAR_0->nr_running -= VAR_1;

 FUNC_0(VAR_0);
}
