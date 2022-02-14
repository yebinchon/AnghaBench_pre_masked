
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* reset ) (struct event_set*) ;} ;
struct event_set {TYPE_1__ func; } ;


 int FUNC_0 (struct event_set*) ;

__attribute__((used)) static inline void
FUNC_1(struct event_set *VAR_0)
{
    (*VAR_0->func.reset)(VAR_0);
}
