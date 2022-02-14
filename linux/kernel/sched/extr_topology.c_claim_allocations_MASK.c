
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_data {int sgc; int sg; int sds; int sd; } ;
struct sched_domain {int ref; struct sd_data* private; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 struct sched_domain** FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(int VAR_0, struct sched_domain *VAR_1)
{
 struct sd_data *VAR_2 = VAR_1->private;

 FUNC_0(*FUNC_2(VAR_2->sd, VAR_0) != VAR_1);
 *FUNC_2(VAR_2->sd, VAR_0) = ((void*)0);

 if (FUNC_1(&(*FUNC_2(VAR_2->sds, VAR_0))->ref))
  *FUNC_2(VAR_2->sds, VAR_0) = ((void*)0);

 if (FUNC_1(&(*FUNC_2(VAR_2->sg, VAR_0))->ref))
  *FUNC_2(VAR_2->sg, VAR_0) = ((void*)0);

 if (FUNC_1(&(*FUNC_2(VAR_2->sgc, VAR_0))->ref))
  *FUNC_2(VAR_2->sgc, VAR_0) = ((void*)0);
}
