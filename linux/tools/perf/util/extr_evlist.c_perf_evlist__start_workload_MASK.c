
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cork_fd; } ;
struct evlist {TYPE_1__ workload; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,char*,int) ;

int FUNC_3(struct evlist *VAR_0)
{
 if (VAR_0->workload.cork_fd > 0) {
  char VAR_1 = 0;
  int VAR_2;



  VAR_2 = FUNC_2(VAR_0->workload.cork_fd, &VAR_1, 1);
  if (VAR_2 < 0)
   FUNC_1("unable to write to pipe");

  FUNC_0(VAR_0->workload.cork_fd);
  return VAR_2;
 }

 return 0;
}
