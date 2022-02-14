
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;

int FUNC_7()
{
 int VAR_5;
 pthread_t *VAR_6;

 FUNC_0(!FUNC_2());

 VAR_3 = 1;

 VAR_5 = FUNC_6(VAR_2) * 4;
 VAR_6 = FUNC_3(sizeof(pthread_t)*VAR_5);
 if (!VAR_6)
  return VAR_0;

 for (uint64_t VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  FUNC_4(&VAR_6[VAR_7], ((void*)0), &VAR_4, ((void*)0));

 for (uint64_t VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  FUNC_5(VAR_6[VAR_8], ((void*)0));

 FUNC_1(VAR_6);

 return VAR_3 ? VAR_1 : VAR_0;
}
