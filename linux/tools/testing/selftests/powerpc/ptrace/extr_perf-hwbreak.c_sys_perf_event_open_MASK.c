
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int size; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct perf_event_attr*,int ,int,int,unsigned long) ;

__attribute__((used)) static inline int FUNC_1(struct perf_event_attr *VAR_1, pid_t VAR_2,
          int VAR_3, int VAR_4,
          unsigned long VAR_5)
{
 VAR_1->size = sizeof(*VAR_1);
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
