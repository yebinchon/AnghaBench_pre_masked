
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*) ;

__attribute__((used)) static const char *FUNC_1(void)
{
 const char *VAR_2;

 if (VAR_1 && !VAR_0)
  VAR_2 = FUNC_0("perf.data.host");
 else if (!VAR_1 && VAR_0)
  VAR_2 = FUNC_0("perf.data.guest");
 else
  VAR_2 = FUNC_0("perf.data.kvm");

 return VAR_2;
}
