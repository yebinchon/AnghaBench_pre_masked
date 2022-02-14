
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib_result {int nhc; struct fib_info* fi; } ;
struct fib_info {int dummy; } ;


 int FUNC_0 (struct fib_info*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct fib_result *VAR_0,
         struct fib_info *VAR_1)
{

 VAR_0->fi = VAR_1;
 VAR_0->nhc = FUNC_0(VAR_1, 0);
}
