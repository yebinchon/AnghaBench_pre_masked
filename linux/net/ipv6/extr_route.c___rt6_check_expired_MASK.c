
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int expires; } ;
struct rt6_info {int rt6i_flags; TYPE_1__ dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(const struct rt6_info *VAR_2)
{
 if (VAR_2->rt6i_flags & VAR_0)
  return FUNC_0(VAR_1, VAR_2->dst.expires);
 else
  return 0;
}
