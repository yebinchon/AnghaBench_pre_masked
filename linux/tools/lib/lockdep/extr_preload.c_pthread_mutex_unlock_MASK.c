
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pthread_mutex_t ;
struct TYPE_2__ {int dep_map; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ,int,int *,unsigned long) ;
 int FUNC_3 (int *,int ,unsigned long) ;
 int FUNC_4 () ;

int FUNC_5(pthread_mutex_t *VAR_1)
{
 int VAR_2;

 FUNC_4();

 FUNC_3(&FUNC_0(VAR_1)->dep_map, 0, (unsigned long)VAR_0);





 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  FUNC_2(&FUNC_0(VAR_1)->dep_map, 0, 0, 0, 1, ((void*)0), (unsigned long)VAR_0);

 return VAR_2;
}
