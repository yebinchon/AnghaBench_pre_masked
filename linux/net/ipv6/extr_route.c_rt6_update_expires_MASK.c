
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int expires; } ;
struct rt6_info {int rt6i_flags; TYPE_1__ dst; int from; } ;
struct fib6_info {int expires; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 struct fib6_info* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct rt6_info *VAR_1, int VAR_2)
{
 if (!(VAR_1->rt6i_flags & VAR_0)) {
  struct fib6_info *VAR_3;

  FUNC_2();
  VAR_3 = FUNC_1(VAR_1->from);
  if (VAR_3)
   VAR_1->dst.expires = VAR_3->expires;
  FUNC_3();
 }

 FUNC_0(&VAR_1->dst, VAR_2);
 VAR_1->rt6i_flags |= VAR_0;
}
