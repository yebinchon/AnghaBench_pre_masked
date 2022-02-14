
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_pmc {int * perf_event; } ;


 struct kvm_pmc* FUNC_0 (struct kvm_pmc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct kvm_pmc *VAR_0)
{
 VAR_0 = FUNC_0(VAR_0);
 if (VAR_0->perf_event) {
  FUNC_1(VAR_0->perf_event);
  FUNC_2(VAR_0->perf_event);
  VAR_0->perf_event = ((void*)0);
 }
}
