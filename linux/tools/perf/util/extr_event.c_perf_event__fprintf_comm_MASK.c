
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* comm; int pid; int tid; } ;
struct TYPE_3__ {int misc; } ;
union perf_event {TYPE_2__ comm; TYPE_1__ header; } ;
typedef int FILE ;


 int VAR_0 ;
 size_t FUNC_0 (int *,char*,char const*,char*,int,int) ;

size_t FUNC_1(union perf_event *VAR_1, FILE *VAR_2)
{
 const char *VAR_3;

 if (VAR_1->header.misc & VAR_0)
  VAR_3 = " exec";
 else
  VAR_3 = "";

 return FUNC_0(VAR_2, "%s: %s:%d/%d\n", VAR_3, VAR_1->comm.comm, VAR_1->comm.pid, VAR_1->comm.tid);
}
