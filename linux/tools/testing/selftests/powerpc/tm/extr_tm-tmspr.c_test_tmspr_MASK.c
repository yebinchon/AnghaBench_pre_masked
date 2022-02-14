
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int *,int *,void*,void*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_7()
{
 pthread_t *VAR_5;
 int VAR_6;
 unsigned long VAR_7;

 FUNC_0(!FUNC_2());


 VAR_6 = 10 * FUNC_6(VAR_1);

 VAR_5 = FUNC_3(VAR_6 * sizeof(pthread_t));
 if (VAR_5 == ((void*)0))
  return VAR_0;


 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7 += 2) {
  if (FUNC_4(&VAR_5[VAR_7], ((void*)0), (void *)VAR_4,
       (void *)VAR_7))
   return VAR_0;
 }

 for (VAR_7 = 1; VAR_7 < VAR_6; VAR_7 += 2) {
  if (FUNC_4(&VAR_5[VAR_7], ((void*)0), (void *)VAR_3, (void *)VAR_7))
   return VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (FUNC_5(VAR_5[VAR_7], ((void*)0)) != 0)
   return VAR_0;
 }

 FUNC_1(VAR_5);

 if (VAR_2)
  return 0;
 else
  return 1;
}
