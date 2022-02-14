
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_set {int dummy; } ;


 unsigned int VAR_0 ;
 struct event_set* FUNC_0 (int*,unsigned int) ;
 struct event_set* FUNC_1 (int*,unsigned int) ;

struct event_set *
FUNC_2(int *VAR_1, unsigned int VAR_2)
{
    if (VAR_2 & VAR_0)
    {
        return FUNC_1(VAR_1, VAR_2);
    }
    else
    {
        return FUNC_0(VAR_1, VAR_2);
    }
}
