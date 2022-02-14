
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dst_entry {scalar_t__ obsolete; } ;
struct rt6_info {struct dst_entry dst; } ;
struct fib6_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rt6_info*) ;
 scalar_t__ FUNC_1 (struct fib6_info*,int ) ;

__attribute__((used)) static struct dst_entry *FUNC_2(struct rt6_info *VAR_1,
         struct fib6_info *VAR_2,
         u32 VAR_3)
{
 if (!FUNC_0(VAR_1) &&
     VAR_1->dst.obsolete == VAR_0 &&
     FUNC_1(VAR_2, VAR_3))
  return &VAR_1->dst;
 else
  return ((void*)0);
}
