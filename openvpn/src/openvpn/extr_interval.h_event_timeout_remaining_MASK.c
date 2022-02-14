
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_timeout {scalar_t__ n; scalar_t__ last; } ;
typedef int interval_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline interval_t
FUNC_0(struct event_timeout *VAR_1)
{
    return (interval_t) (VAR_1->last - VAR_0 + VAR_1->n);
}
