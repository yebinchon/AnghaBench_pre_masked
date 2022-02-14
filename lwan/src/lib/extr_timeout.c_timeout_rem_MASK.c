
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeouts {scalar_t__ curtime; } ;
struct timeout {scalar_t__ expires; } ;
typedef scalar_t__ reltime_t ;



__attribute__((used)) static inline reltime_t FUNC_0(struct timeouts *VAR_0, struct timeout *VAR_1)
{
    return VAR_1->expires - VAR_0->curtime;
}
