
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smp_call_on_cpu_struct {int (* func ) (void*) ;void* data; unsigned int cpu; int ret; int done; int work; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (unsigned int) ;
 unsigned int VAR_1 ;
 int FUNC_3 (unsigned int,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

int FUNC_5(unsigned int VAR_4, int (*VAR_5)(void *), void *VAR_6, bool VAR_7)
{
 struct smp_call_on_cpu_struct VAR_8 = {
  .done = FUNC_0(VAR_8.done),
  .func = VAR_5,
  .data = VAR_6,
  .cpu = VAR_7 ? VAR_4 : -1,
 };

 FUNC_1(&VAR_8.work, VAR_2);

 if (VAR_4 >= VAR_1 || !FUNC_2(VAR_4))
  return -VAR_0;

 FUNC_3(VAR_4, VAR_3, &VAR_8.work);
 FUNC_4(&VAR_8.done);

 return VAR_8.ret;
}
