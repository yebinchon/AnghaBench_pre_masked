
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {long tv_sec; long tv_usec; } ;
struct TYPE_6__ {TYPE_1__ timeout; } ;
typedef TYPE_2__* SelectSetPtr ;
typedef int SelectSet ;


 int FUNC_0 (TYPE_2__* const,int ,int) ;

void
FUNC_1(SelectSetPtr const VAR_0, const double VAR_1)
{
 double VAR_2;
 long VAR_3;




 FUNC_0(VAR_0, 0, sizeof(SelectSet));
 VAR_3 = (long) VAR_1;
 VAR_2 = (double) VAR_3;
 VAR_0->timeout.tv_sec = VAR_3;
 VAR_0->timeout.tv_usec = (long) ((VAR_1 - VAR_2) * 1000000.0);
}
