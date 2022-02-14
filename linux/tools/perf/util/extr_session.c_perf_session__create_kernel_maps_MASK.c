
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int host; } ;
struct perf_session {TYPE_1__ machines; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(struct perf_session *VAR_0)
{
 int VAR_1 = FUNC_0(&VAR_0->machines.host);

 if (VAR_1 >= 0)
  VAR_1 = FUNC_1(&VAR_0->machines);
 return VAR_1;
}
