
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callchain_list {int unfolded; scalar_t__ has_children; } ;


 char FUNC_0 (int ) ;

__attribute__((used)) static char FUNC_1(const struct callchain_list *VAR_0)
{
 return VAR_0->has_children ? FUNC_0(VAR_0->unfolded) : ' ';
}
