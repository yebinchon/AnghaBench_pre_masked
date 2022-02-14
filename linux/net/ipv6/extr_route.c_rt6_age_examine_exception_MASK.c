
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int expires; scalar_t__ lastuse; } ;
struct rt6_info {int rt6i_flags; int rt6i_gateway; TYPE_1__ dst; } ;
struct rt6_exception_bucket {int dummy; } ;
struct rt6_exception {struct rt6_info* rt6i; } ;
struct neighbour {int flags; } ;
struct fib6_gc_args {int more; scalar_t__ timeout; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (char*,struct rt6_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct neighbour* FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (struct rt6_exception_bucket*,struct rt6_exception*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct rt6_exception_bucket *VAR_4,
          struct rt6_exception *VAR_5,
          struct fib6_gc_args *VAR_6,
          unsigned long VAR_7)
{
 struct rt6_info *VAR_8 = VAR_5->rt6i;







 if (!(VAR_8->rt6i_flags & VAR_1)) {
  if (FUNC_4(VAR_7, VAR_8->dst.lastuse + VAR_6->timeout)) {
   FUNC_0("aging clone %p\n", VAR_8);
   FUNC_2(VAR_4, VAR_5);
   return;
  }
 } else if (FUNC_3(VAR_3, VAR_8->dst.expires)) {
  FUNC_0("purging expired route %p\n", VAR_8);
  FUNC_2(VAR_4, VAR_5);
  return;
 }

 if (VAR_8->rt6i_flags & VAR_2) {
  struct neighbour *VAR_9;
  __u8 VAR_10 = 0;

  VAR_9 = FUNC_1(VAR_8->dst.dev, &VAR_8->rt6i_gateway);
  if (VAR_9)
   VAR_10 = VAR_9->flags;

  if (!(VAR_10 & VAR_0)) {
   FUNC_0("purging route %p via non-router but gateway\n",
      VAR_8);
   FUNC_2(VAR_4, VAR_5);
   return;
  }
 }

 VAR_6->more++;
}
