
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timeout_t ;
struct timeouts {scalar_t__ curtime; } ;
struct timeout {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct timeouts*,struct timeout*,scalar_t__) ;

void FUNC_1(struct timeouts *VAR_1, struct timeout *VAR_2, timeout_t VAR_3)
{
    if (VAR_2->flags & VAR_0)
        FUNC_0(VAR_1, VAR_2, VAR_3);
    else
        FUNC_0(VAR_1, VAR_2, VAR_1->curtime + VAR_3);
}
