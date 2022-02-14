
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct rtable {scalar_t__ rt_genid; TYPE_1__ dst; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(const struct rtable *VAR_0)
{
 return VAR_0->rt_genid != FUNC_1(FUNC_0(VAR_0->dst.dev));
}
