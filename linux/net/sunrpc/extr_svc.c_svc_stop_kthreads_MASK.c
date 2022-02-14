
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct svc_serv {int sv_nrthreads; } ;
struct svc_pool {int dummy; } ;


 struct task_struct* FUNC_0 (struct svc_serv*,struct svc_pool*,unsigned int*) ;
 int FUNC_1 (struct task_struct*) ;

__attribute__((used)) static int
FUNC_2(struct svc_serv *VAR_0, struct svc_pool *VAR_1, int VAR_2)
{
 struct task_struct *VAR_3;
 unsigned int VAR_4 = VAR_0->sv_nrthreads-1;


 do {
  VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_4);
  if (VAR_3 == ((void*)0))
   break;
  FUNC_1(VAR_3);
  VAR_2++;
 } while (VAR_2 < 0);
 return 0;
}
