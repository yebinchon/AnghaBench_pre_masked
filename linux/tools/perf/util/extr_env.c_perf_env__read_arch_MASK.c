
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int machine; } ;
struct perf_env {int arch; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct utsname*) ;

__attribute__((used)) static int FUNC_2(struct perf_env *VAR_1)
{
 struct utsname VAR_2;

 if (VAR_1->arch)
  return 0;

 if (!FUNC_1(&VAR_2))
  VAR_1->arch = FUNC_0(VAR_2.machine);

 return VAR_1->arch ? 0 : -VAR_0;
}
