
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct random_urandom_args {int dummy; } ;
struct bpf_stack_build_id {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct random_urandom_args*,void*,int,int) ;
 int FUNC_1 (struct random_urandom_args*,int *,int) ;
 void* FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int*,int*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_4(struct random_urandom_args *VAR_7)
{
 __u32 VAR_8 = sizeof(struct bpf_stack_build_id)
   * VAR_2;
 __u32 VAR_9 = 0, VAR_10 = 0, *VAR_11;
 void *VAR_12;

 VAR_11 = FUNC_2(&VAR_3, &VAR_9);
 if (VAR_11 && *VAR_11)
  return 0;


 VAR_9 = FUNC_1(VAR_7, &VAR_6, VAR_1);
 if ((int)VAR_9 >= 0) {
  FUNC_3(&VAR_5, &VAR_9, &VAR_10, 0);
  VAR_12 = FUNC_2(&VAR_4, &VAR_9);
  if (VAR_12)
   FUNC_0(VAR_7, VAR_12, VAR_8,
          VAR_1 | VAR_0);
 }

 return 0;
}
