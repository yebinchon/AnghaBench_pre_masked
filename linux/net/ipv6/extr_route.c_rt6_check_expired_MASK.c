
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ obsolete; int expires; } ;
struct rt6_info {int rt6i_flags; TYPE_1__ dst; int from; } ;
struct fib6_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fib6_info*) ;
 int VAR_2 ;
 struct fib6_info* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static bool FUNC_3(const struct rt6_info *VAR_3)
{
 struct fib6_info *VAR_4;

 VAR_4 = FUNC_1(VAR_3->from);

 if (VAR_3->rt6i_flags & VAR_1) {
  if (FUNC_2(VAR_2, VAR_3->dst.expires))
   return 1;
 } else if (VAR_4) {
  return VAR_3->dst.obsolete != VAR_0 ||
   FUNC_0(VAR_4);
 }
 return 0;
}
