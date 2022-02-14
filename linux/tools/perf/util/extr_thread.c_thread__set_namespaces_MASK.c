
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct thread {int namespaces_lock; } ;
struct perf_record_namespaces {int dummy; } ;


 int FUNC_0 (struct thread*,int ,struct perf_record_namespaces*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct thread *VAR_0, u64 VAR_1,
      struct perf_record_namespaces *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0->namespaces_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->namespaces_lock);
 return VAR_3;
}
