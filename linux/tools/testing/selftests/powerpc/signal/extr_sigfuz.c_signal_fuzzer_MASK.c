
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int ,void*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_3, VAR_4;
 pthread_t *VAR_5;

 VAR_5 = FUNC_1(VAR_1 * sizeof(pthread_t));

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = FUNC_3(&VAR_5[VAR_3], ((void*)0), VAR_2,
        (void *)&VAR_3);
  if (VAR_4)
   FUNC_2("Thread creation error\n");
 }

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = FUNC_4(VAR_5[VAR_3], ((void*)0));
  if (VAR_4)
   FUNC_2("Thread join error\n");
 }

 FUNC_0(VAR_5);

 return VAR_0;
}
