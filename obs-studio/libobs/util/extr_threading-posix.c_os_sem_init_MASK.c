
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct os_sem_data {int dummy; } ;
typedef int sem_t ;
struct TYPE_4__ {int sem; } ;
typedef TYPE_1__ os_sem_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;

int FUNC_2(os_sem_t **VAR_0, int VAR_1)
{
 sem_t VAR_2;
 int VAR_3 = FUNC_1(&VAR_2, 0, VAR_1);
 if (VAR_3 != 0)
  return VAR_3;

 *VAR_0 = FUNC_0(sizeof(struct os_sem_data));
 (*VAR_0)->sem = VAR_2;
 return 0;
}
