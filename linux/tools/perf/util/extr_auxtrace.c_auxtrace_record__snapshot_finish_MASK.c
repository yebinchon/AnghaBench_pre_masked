
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auxtrace_record {int (* snapshot_finish ) (struct auxtrace_record*) ;} ;


 int FUNC_0 (struct auxtrace_record*) ;

int FUNC_1(struct auxtrace_record *VAR_0, bool VAR_1)
{
 if (!VAR_1 && VAR_0 && VAR_0->snapshot_finish)
  return VAR_0->snapshot_finish(VAR_0);
 return 0;
}
