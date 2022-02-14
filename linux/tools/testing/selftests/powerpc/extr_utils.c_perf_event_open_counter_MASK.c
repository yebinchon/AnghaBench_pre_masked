
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;


 int FUNC_0 (struct perf_event_attr*,unsigned int,unsigned long) ;
 int FUNC_1 (struct perf_event_attr*,int ,int,int,int ) ;
 int FUNC_2 (char*) ;

int FUNC_3(unsigned int VAR_0,
       unsigned long VAR_1, int VAR_2)
{
 int VAR_3;
 struct perf_event_attr VAR_4;

 FUNC_0(&VAR_4, VAR_0, VAR_1);

 VAR_3 = FUNC_1(&VAR_4, 0, -1, VAR_2, 0);

 if (VAR_3 < 0)
  FUNC_2("perf_event_open() failed");

 return VAR_3;
}
