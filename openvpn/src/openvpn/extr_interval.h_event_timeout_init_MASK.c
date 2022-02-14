
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct event_timeout {int defined; int last; scalar_t__ n; } ;
typedef scalar_t__ interval_t ;



__attribute__((used)) static inline void
FUNC_0(struct event_timeout *VAR_0, interval_t VAR_1, const time_t VAR_2)
{
    VAR_0->defined = 1;
    VAR_0->n = (VAR_1 >= 0) ? VAR_1 : 0;
    VAR_0->last = VAR_2;
}
