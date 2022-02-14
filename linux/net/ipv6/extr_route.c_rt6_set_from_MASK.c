
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {int dst; int from; int rt6i_flags; } ;
struct fib6_info {int fib6_metrics; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,struct fib6_info*) ;

__attribute__((used)) static void FUNC_2(struct rt6_info *VAR_1, struct fib6_info *VAR_2)
{
 VAR_1->rt6i_flags &= ~VAR_0;
 FUNC_1(VAR_1->from, VAR_2);
 FUNC_0(&VAR_1->dst, VAR_2->fib6_metrics);
}
