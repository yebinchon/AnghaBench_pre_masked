
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_dest {int flags; int weight; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct ip_vs_dest *VAR_1)
{
 return FUNC_0(&VAR_1->weight) <= 0 ||
        VAR_1->flags & VAR_0;
}
