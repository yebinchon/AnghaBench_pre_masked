
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_timeout {scalar_t__ n; scalar_t__ defined; } ;
typedef scalar_t__ interval_t ;



__attribute__((used)) static inline void
FUNC_0(struct event_timeout *VAR_0, interval_t VAR_1)
{

    if (VAR_0->defined)
    {
        VAR_0->n = (VAR_1 >= 0) ? VAR_1 : 0;
    }
}
