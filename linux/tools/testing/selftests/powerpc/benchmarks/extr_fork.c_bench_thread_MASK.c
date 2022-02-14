
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_attr_t ;
typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *,int *,int ,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(void)
{
 pthread_t VAR_4;
 cpu_set_t VAR_5;
 pthread_attr_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(&VAR_6);
 if (VAR_7) {
  VAR_1 = VAR_7;
  FUNC_3("pthread_attr_init");
  FUNC_2(1);
 }

 if (VAR_0 != -1) {
  FUNC_1(&VAR_5);
  FUNC_0(VAR_0, &VAR_5);

  VAR_7 = FUNC_5(&VAR_6, sizeof(cpu_set_t), &VAR_5);
  if (VAR_7) {
   VAR_1 = VAR_7;
   FUNC_3("pthread_attr_setaffinity_np");
   FUNC_2(1);
  }
 }

 while (1) {
  VAR_7 = FUNC_6(&VAR_4, &VAR_6, VAR_3, ((void*)0));
  if (VAR_7) {
   VAR_1 = VAR_7;
   FUNC_3("pthread_create");
   FUNC_2(1);
  }
  VAR_7 = FUNC_7(VAR_4, ((void*)0));
  if (VAR_7) {
   VAR_1 = VAR_7;
   FUNC_3("pthread_join");
   FUNC_2(1);
  }
  VAR_2++;
 }
}
