
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int cpuset ;
typedef int cpu_set_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (unsigned char*,int ) ;
 int FUNC_3 (int,char*) ;
 unsigned char* FUNC_4 (int *,int,int,int,int,int ) ;
 int FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int) ;

int FUNC_10()
{





 cpu_set_t VAR_8;
 FUNC_1(&VAR_8);
 FUNC_0(0, &VAR_8);
 if (FUNC_8(0, sizeof(VAR_8), &VAR_8) != 0)
  FUNC_6("[WARN]\tsched_setaffinity failed\n");

 pthread_t VAR_9;
 if (FUNC_7(&VAR_9, 0, VAR_7, 0) != 0)
  FUNC_3(1, "pthread_create");


 unsigned char *VAR_10 = FUNC_4(((void*)0), 4096, VAR_4 | VAR_5,
          VAR_0 | VAR_1 | VAR_3,
          -1, 0);
 if (VAR_10 == VAR_2)
  FUNC_3(1, "mmap");


 FUNC_6("[RUN]\tSyscalls followed by SS validation\n");

 for (int VAR_11 = 0; VAR_11 < 1000; VAR_11++) {
  FUNC_9(2);







  FUNC_2(VAR_10 + 4088, VAR_6);

 }

 FUNC_6("[OK]\tWe survived\n");


 FUNC_5(VAR_10, 4096);


 return 0;
}
