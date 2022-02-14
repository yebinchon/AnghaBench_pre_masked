
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int precise_ip; } ;
struct TYPE_4__ {TYPE_2__ attr; } ;
struct evsel {TYPE_1__ core; int precise_max; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (TYPE_2__*,int ,int,int,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct evsel *VAR_1,
      pid_t VAR_2, int VAR_3, int VAR_4,
      unsigned long VAR_5)
{
 int VAR_6 = VAR_1->core.attr.precise_ip;
 int VAR_7;

 while (1) {
  FUNC_1("sys_perf_event_open: pid %d  cpu %d  group_fd %d  flags %#lx",
     VAR_2, VAR_3, VAR_4, VAR_5);

  VAR_7 = FUNC_2(&VAR_1->core.attr, VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_7 >= 0)
   break;


  if (!VAR_1->precise_max)
   break;





  if (!VAR_1->core.attr.precise_ip) {
   VAR_1->core.attr.precise_ip = VAR_6;
   break;
  }

  FUNC_1("\nsys_perf_event_open failed, error %d\n", -VAR_0);
  VAR_1->core.attr.precise_ip--;
  FUNC_1("decreasing precise_ip by one (%d)\n", VAR_1->core.attr.precise_ip);
  FUNC_0(&VAR_1->core.attr);
 }

 return VAR_7;
}
