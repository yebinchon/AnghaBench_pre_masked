
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; int misc; int type; } ;
struct TYPE_4__ {TYPE_1__ header; scalar_t__ tid; scalar_t__ pid; scalar_t__ ptid; scalar_t__ ppid; } ;
union perf_event {TYPE_2__ fork; } ;
struct perf_tool {int dummy; } ;
struct machine {scalar_t__ id_hdr_size; } ;
typedef scalar_t__ pid_t ;
typedef int perf_event__handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct perf_tool*,union perf_event*,struct machine*,int ) ;

__attribute__((used)) static int FUNC_2(struct perf_tool *VAR_2,
           union perf_event *VAR_3,
           pid_t VAR_4, pid_t VAR_5, pid_t VAR_6,
           perf_event__handler_t VAR_7,
           struct machine *VAR_8)
{
 FUNC_0(&VAR_3->fork, 0, sizeof(VAR_3->fork) + VAR_8->id_hdr_size);






 if (VAR_5 == VAR_4) {
  VAR_3->fork.ppid = VAR_6;
  VAR_3->fork.ptid = VAR_6;
 } else {
  VAR_3->fork.ppid = VAR_5;
  VAR_3->fork.ptid = VAR_5;
 }
 VAR_3->fork.pid = VAR_5;
 VAR_3->fork.tid = VAR_4;
 VAR_3->fork.header.type = VAR_0;
 VAR_3->fork.header.misc = VAR_1;

 VAR_3->fork.header.size = (sizeof(VAR_3->fork) + VAR_8->id_hdr_size);

 if (FUNC_1(VAR_2, VAR_3, VAR_8, VAR_7) != 0)
  return -1;

 return 0;
}
