
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ obsolete; } ;
struct rtable {TYPE_1__ dst; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rtable const*) ;

__attribute__((used)) static bool FUNC_1(const struct rtable *VAR_1)
{
 return VAR_1 &&
  VAR_1->dst.obsolete == VAR_0 &&
  !FUNC_0(VAR_1);
}
