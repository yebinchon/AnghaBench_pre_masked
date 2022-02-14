
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_load_attr {char* file; } ;
struct bpf_object {int dummy; } ;
typedef int pthread_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bpf_object*) ;
 int FUNC_2 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct bpf_object*,int,char*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int ,void*) ;
 int FUNC_8 (int ,void**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 () ;
 int FUNC_12 (int,int ,char*,int ) ;

__attribute__((used)) static void FUNC_13(int VAR_6)
{
 struct bpf_prog_load_attr VAR_7 = {
  .file = "./sockopt_inherit.o",
 };
 int VAR_8 = -1, VAR_9;
 struct bpf_object *VAR_10;
 void *VAR_11;
 pthread_t VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_14 = FUNC_2(&VAR_7, &VAR_10, &VAR_13);
 if (FUNC_0(VAR_14))
  return;

 VAR_14 = FUNC_5(VAR_10, VAR_6, "cgroup/getsockopt");
 if (FUNC_0(VAR_14))
  goto close_bpf_object;

 VAR_14 = FUNC_5(VAR_10, VAR_6, "cgroup/setsockopt");
 if (FUNC_0(VAR_14))
  goto close_bpf_object;

 VAR_8 = FUNC_11();
 if (FUNC_0(VAR_8 < 0))
  goto close_bpf_object;

 if (FUNC_0(FUNC_7(&VAR_12, ((void*)0), VAR_5,
          (void *)&VAR_8)))
  goto close_server_fd;

 FUNC_9(&VAR_4);
 FUNC_6(&VAR_3, &VAR_4);
 FUNC_10(&VAR_4);

 VAR_9 = FUNC_4(VAR_8);
 if (FUNC_0(VAR_9 < 0))
  goto close_server_fd;

 FUNC_0(FUNC_12(VAR_9, VAR_0, "connect", 0));
 FUNC_0(FUNC_12(VAR_9, VAR_1, "connect", 0));
 FUNC_0(FUNC_12(VAR_9, VAR_2, "connect", 0));

 FUNC_8(VAR_12, &VAR_11);

 VAR_14 = (int)(long)VAR_11;
 FUNC_0(VAR_14);

 FUNC_3(VAR_9);

close_server_fd:
 FUNC_3(VAR_8);
close_bpf_object:
 FUNC_1(VAR_10);
}
