
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int pthread_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,void*,int,int,int ) ;
 void* FUNC_2 (int *,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int VAR_2 ;
 int FUNC_5 (int *,int *,int ,int*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 void* FUNC_8 (int) ;

void FUNC_9(int VAR_3, int VAR_4)
{
 pthread_t VAR_5;
 time_t VAR_6 = FUNC_7(((void*)0));

 FUNC_5(&VAR_5, ((void*)0), VAR_2, &VAR_4);

 FUNC_0(FUNC_1(&VAR_1, FUNC_8(VAR_3), VAR_3,
    VAR_3 + 1, VAR_0) != VAR_3);

 do {
  int VAR_7 = 0;
  void *VAR_8 = FUNC_2(&VAR_1, &VAR_7);
  FUNC_0(VAR_8 != FUNC_8(VAR_7));
 } while (FUNC_7(((void*)0)) < VAR_6 + 11);

 FUNC_6(VAR_5, ((void*)0));

 FUNC_4(&VAR_1, VAR_3);
 FUNC_0(!FUNC_3(&VAR_1));
}
