
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dst_entry {int dummy; } ;
struct rt6_info {struct dst_entry dst; } ;
struct fib6_info {int dummy; } ;


 int FUNC_0 (struct fib6_info*,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct rt6_info*) ;

__attribute__((used)) static struct dst_entry *FUNC_2(struct rt6_info *VAR_0,
       struct fib6_info *VAR_1,
       u32 VAR_2)
{
 u32 VAR_3 = 0;

 if (!VAR_1 || !FUNC_0(VAR_1, &VAR_3) ||
     VAR_3 != VAR_2)
  return ((void*)0);

 if (FUNC_1(VAR_0))
  return ((void*)0);

 return &VAR_0->dst;
}
