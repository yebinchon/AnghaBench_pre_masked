
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int dummy; } ;
typedef int pthread_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct bpf_object*) ;
 int FUNC_2 (char const*,int ,struct bpf_object**,int*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int *,int *,int*) ;
 scalar_t__ FUNC_5 (int ,void**) ;
 int VAR_2 ;

void FUNC_6(void)
{
 const char *VAR_3 = "./test_spin_lock.o";
 pthread_t VAR_4[4];
 struct bpf_object *VAR_5 = ((void*)0);
 int VAR_6;
 int VAR_7 = 0, VAR_8;
 void *VAR_9;

 VAR_7 = FUNC_2(VAR_3, VAR_0, &VAR_5, &VAR_6);
 if (FUNC_0(VAR_7)) {
  FUNC_3("test_spin_lock:bpf_prog_load errno %d\n", VAR_1);
  goto close_prog;
 }
 for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
  if (FUNC_0(FUNC_4(&VAR_4[VAR_8], ((void*)0),
           &VAR_2, &VAR_6)))
   goto close_prog;

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
  if (FUNC_0(FUNC_5(VAR_4[VAR_8], &VAR_9) ||
          VAR_9 != (void *)&VAR_6))
   goto close_prog;
close_prog:
 FUNC_1(VAR_5);
}
