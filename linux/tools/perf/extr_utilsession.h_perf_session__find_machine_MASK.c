
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_session {int machines; } ;
struct machine {int dummy; } ;
typedef int pid_t ;


 struct machine* FUNC_0 (int *,int ) ;

__attribute__((used)) static inline
struct machine *FUNC_1(struct perf_session *VAR_0, pid_t VAR_1)
{
 return FUNC_0(&VAR_0->machines, VAR_1);
}
