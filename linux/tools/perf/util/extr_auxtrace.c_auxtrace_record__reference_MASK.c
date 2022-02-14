
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct auxtrace_record {int (* reference ) (struct auxtrace_record*) ;} ;


 int FUNC_0 (struct auxtrace_record*) ;

u64 FUNC_1(struct auxtrace_record *VAR_0)
{
 if (VAR_0)
  return VAR_0->reference(VAR_0);
 return 0;
}
