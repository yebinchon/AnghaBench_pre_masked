
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {unsigned int flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct timer_list *VAR_2, unsigned int VAR_3)
{
 VAR_2->flags = (VAR_2->flags & ~VAR_0) |
   VAR_3 << VAR_1;
}
