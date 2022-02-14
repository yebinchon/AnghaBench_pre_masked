
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_kvm_stat {int dummy; } ;
struct evlist {int dummy; } ;


 int VAR_0 ;
 struct evlist* FUNC_0 () ;
 int FUNC_1 (struct perf_kvm_stat*,struct evlist*) ;

__attribute__((used)) static int FUNC_2(struct perf_kvm_stat *VAR_1)
{
 struct evlist *VAR_2 = FUNC_0();

 if (VAR_2 == ((void*)0))
  return -VAR_0;


 return FUNC_1(VAR_1, VAR_2);
}
