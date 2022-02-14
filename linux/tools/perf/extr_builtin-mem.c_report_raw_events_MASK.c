
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int env; } ;
struct perf_session {TYPE_1__ header; } ;
struct perf_mem {scalar_t__ phys_addr; int cpu_bitmap; int cpu_list; int tool; int force; } ;
struct perf_data {int force; int mode; int path; } ;


 scalar_t__ FUNC_0 (struct perf_session*) ;
 int VAR_0 ;
 int FUNC_1 (struct perf_session*) ;
 int VAR_1 ;
 int FUNC_2 (struct perf_session*,int ,int ) ;
 int FUNC_3 (struct perf_session*) ;
 struct perf_session* FUNC_4 (struct perf_data*,int,int *) ;
 int FUNC_5 (struct perf_session*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct perf_mem *VAR_2)
{
 struct perf_data VAR_3 = {
  .path = VAR_1,
  .mode = VAR_0,
  .force = VAR_2->force,
 };
 int VAR_4;
 struct perf_session *VAR_5 = FUNC_4(&VAR_3, 0,
        &VAR_2->tool);

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 if (VAR_2->cpu_list) {
  VAR_4 = FUNC_2(VAR_5, VAR_2->cpu_list,
            VAR_2->cpu_bitmap);
  if (VAR_4 < 0)
   goto out_delete;
 }

 VAR_4 = FUNC_7(&VAR_5->header.env);
 if (VAR_4 < 0)
  goto out_delete;

 if (VAR_2->phys_addr)
  FUNC_6("# PID, TID, IP, ADDR, PHYS ADDR, LOCAL WEIGHT, DSRC, SYMBOL\n");
 else
  FUNC_6("# PID, TID, IP, ADDR, LOCAL WEIGHT, DSRC, SYMBOL\n");

 VAR_4 = FUNC_5(VAR_5);

out_delete:
 FUNC_3(VAR_5);
 return VAR_4;
}
