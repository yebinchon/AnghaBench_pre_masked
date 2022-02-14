
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpnotify_globals {scalar_t__ ncalls; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(const struct tcpnotify_globals *VAR_1)
{
 return (VAR_1->ncalls > 0 && VAR_1->ncalls == VAR_0 ? 0 : 1);
}
