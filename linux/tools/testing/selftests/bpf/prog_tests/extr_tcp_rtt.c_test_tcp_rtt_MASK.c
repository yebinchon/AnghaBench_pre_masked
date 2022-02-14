
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ,void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;

void FUNC_9(void)
{
 int VAR_3, VAR_4;
 pthread_t VAR_5;

 VAR_4 = FUNC_8("/tcp_rtt");
 if (FUNC_0(VAR_4 < 0))
  return;

 VAR_3 = FUNC_7();
 if (FUNC_0(VAR_3 < 0))
  goto close_cgroup_fd;

 if (FUNC_0(FUNC_3(&VAR_5, ((void*)0), VAR_2,
          (void *)&VAR_3)))
  goto close_server_fd;

 FUNC_4(&VAR_1);
 FUNC_2(&VAR_0, &VAR_1);
 FUNC_5(&VAR_1);

 FUNC_0(FUNC_6(VAR_4, VAR_3));
close_server_fd:
 FUNC_1(VAR_3);
close_cgroup_fd:
 FUNC_1(VAR_4);
}
