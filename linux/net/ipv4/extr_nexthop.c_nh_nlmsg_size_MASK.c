
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nexthop {scalar_t__ is_group; } ;


 scalar_t__ FUNC_0 (struct nexthop*) ;
 scalar_t__ FUNC_1 (struct nexthop*) ;
 size_t FUNC_2 (int) ;

__attribute__((used)) static size_t FUNC_3(struct nexthop *VAR_0)
{
 size_t VAR_1 = FUNC_2(4);

 if (VAR_0->is_group)
  VAR_1 += FUNC_0(VAR_0);
 else
  VAR_1 += FUNC_1(VAR_0);

 return VAR_1;
}
