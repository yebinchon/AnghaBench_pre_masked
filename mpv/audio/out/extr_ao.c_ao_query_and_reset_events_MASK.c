
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao {int events_; } ;


 int FUNC_0 (int *,unsigned int) ;

int FUNC_1(struct ao *VAR_0, int VAR_1)
{
    return FUNC_0(&VAR_0->events_, ~(unsigned)VAR_1) & VAR_1;
}
