
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_atom {int type; int wait_sem; int duration; } ;
struct perf_sched {int dummy; } ;


 int FUNC_0 (int) ;




 int FUNC_1 (struct perf_sched*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct perf_sched *VAR_0,
          struct sched_atom *VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1->type) {
  case 130:
   FUNC_1(VAR_0, VAR_1->duration);
   break;
  case 129:
   if (VAR_1->wait_sem)
    VAR_2 = FUNC_3(VAR_1->wait_sem);
   FUNC_0(VAR_2);
   break;
  case 128:
   if (VAR_1->wait_sem)
    VAR_2 = FUNC_2(VAR_1->wait_sem);
   FUNC_0(VAR_2);
   break;
  case 131:
   break;
  default:
   FUNC_0(1);
 }
}
