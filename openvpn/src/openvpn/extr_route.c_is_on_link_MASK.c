
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route_gateway_info {int flags; } ;


 int const VAR_0 ;
 int VAR_1 ;
 unsigned int const VAR_2 ;

__attribute__((used)) static inline bool
FUNC_0(const int VAR_3, const unsigned int VAR_4, const struct route_gateway_info *VAR_5)
{
    return VAR_5 && (VAR_3 == VAR_0 || ((VAR_4 & VAR_2) && (VAR_5->flags & VAR_1)));
}
