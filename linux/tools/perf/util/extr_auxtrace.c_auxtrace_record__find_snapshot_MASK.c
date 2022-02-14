
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct auxtrace_record {int (* find_snapshot ) (struct auxtrace_record*,int,struct auxtrace_mmap*,unsigned char*,int *,int *) ;} ;
struct auxtrace_mmap {int dummy; } ;


 int FUNC_0 (struct auxtrace_record*,int,struct auxtrace_mmap*,unsigned char*,int *,int *) ;

int FUNC_1(struct auxtrace_record *VAR_0, int VAR_1,
       struct auxtrace_mmap *VAR_2,
       unsigned char *VAR_3, u64 *VAR_4, u64 *VAR_5)
{
 if (VAR_0 && VAR_0->find_snapshot)
  return VAR_0->find_snapshot(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 return 0;
}
