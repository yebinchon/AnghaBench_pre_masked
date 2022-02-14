
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fib6_result {scalar_t__ f6i; } ;
struct fib6_node {int dummy; } ;
struct fib6_info {int fib6_metric; } ;


 int FUNC_0 (struct fib6_info*,struct fib6_info*,int ,struct fib6_result*,struct fib6_info**,int,int,int*,int*) ;

__attribute__((used)) static void FUNC_1(struct fib6_node *VAR_0, struct fib6_info *VAR_1,
    struct fib6_info *VAR_2, int VAR_3, int VAR_4,
    bool *VAR_5, struct fib6_result *VAR_6)
{
 u32 VAR_7 = VAR_2->fib6_metric;
 struct fib6_info *VAR_8 = ((void*)0);
 int VAR_9 = -1;

 FUNC_0(VAR_2, ((void*)0), VAR_7, VAR_6, &VAR_8,
         VAR_3, VAR_4, VAR_5, &VAR_9);

 FUNC_0(VAR_1, VAR_2, VAR_7, VAR_6, &VAR_8,
         VAR_3, VAR_4, VAR_5, &VAR_9);

 if (VAR_6->f6i || !VAR_8)
  return;

 FUNC_0(VAR_8, ((void*)0), VAR_7, VAR_6, ((void*)0),
         VAR_3, VAR_4, VAR_5, &VAR_9);
}
