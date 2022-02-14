
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route_list {int iflags; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_1(const struct route_list *VAR_1)
{
    return VAR_1 && FUNC_0(VAR_1->iflags & VAR_0);
}
