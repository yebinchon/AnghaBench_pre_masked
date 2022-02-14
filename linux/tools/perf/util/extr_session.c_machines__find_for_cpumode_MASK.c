
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pid; } ;
struct TYPE_4__ {scalar_t__ type; } ;
union perf_event {TYPE_1__ mmap; TYPE_2__ header; } ;
typedef int u32 ;
struct perf_sample {scalar_t__ cpumode; int pid; } ;
struct machine {int dummy; } ;
struct machines {struct machine host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct machine* FUNC_0 (struct machines*,int ) ;
 struct machine* FUNC_1 (struct machines*,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static struct machine *FUNC_2(struct machines *VAR_6,
            union perf_event *VAR_7,
            struct perf_sample *VAR_8)
{
 struct machine *VAR_9;

 if (VAR_5 &&
     ((VAR_8->cpumode == VAR_1) ||
      (VAR_8->cpumode == VAR_2))) {
  u32 VAR_10;

  if (VAR_7->header.type == VAR_3
      || VAR_7->header.type == VAR_4)
   VAR_10 = VAR_7->mmap.pid;
  else
   VAR_10 = VAR_8->pid;

  VAR_9 = FUNC_0(VAR_6, VAR_10);
  if (!VAR_9)
   VAR_9 = FUNC_1(VAR_6, VAR_0);
  return VAR_9;
 }

 return &VAR_6->host;
}
