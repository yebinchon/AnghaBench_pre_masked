
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct thread {int namespaces_list; } ;
struct perf_record_namespaces {int dummy; } ;
struct namespaces {scalar_t__ end_time; int list; } ;


 int VAR_0 ;
 struct namespaces* FUNC_0 (struct thread*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 struct namespaces* FUNC_2 (struct namespaces*,int ) ;
 struct namespaces* FUNC_3 (struct perf_record_namespaces*) ;

__attribute__((used)) static int FUNC_4(struct thread *VAR_2, u64 VAR_3,
        struct perf_record_namespaces *VAR_4)
{
 struct namespaces *VAR_5, *VAR_6 = FUNC_0(VAR_2);

 VAR_5 = FUNC_3(VAR_4);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(&VAR_5->list, &VAR_2->namespaces_list);

 if (VAR_3 && VAR_6) {





  VAR_6 = FUNC_2(VAR_5, VAR_1);
  VAR_6->end_time = VAR_3;
 }

 return 0;
}
