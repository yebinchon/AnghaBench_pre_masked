
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct svc_serv {int sv_nrthreads; } ;
struct svc_pool {int dummy; } ;


 int VAR_0 ;
 struct task_struct* FUNC_0 (struct svc_serv*,struct svc_pool*,unsigned int*) ;
 int FUNC_1 (int ,struct task_struct*,int) ;

__attribute__((used)) static int
FUNC_2(struct svc_serv *VAR_1, struct svc_pool *VAR_2, int VAR_3)
{
 struct task_struct *VAR_4;
 unsigned int VAR_5 = VAR_1->sv_nrthreads-1;


 do {
  VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_5);
  if (VAR_4 == ((void*)0))
   break;
  FUNC_1(VAR_0, VAR_4, 1);
  VAR_3++;
 } while (VAR_3 < 0);

 return 0;
}
