
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_stack_build_id {int dummy; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int,int *,char*) ;
 scalar_t__ VAR_2 ;

int FUNC_2(int VAR_3, int VAR_4)
{
 __u32 VAR_5, VAR_6;
 char VAR_7[VAR_1 *
       sizeof(struct bpf_stack_build_id)];
 int VAR_8;

 VAR_8 = FUNC_0(VAR_3, ((void*)0), &VAR_5);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_1(VAR_4, &VAR_5, VAR_7);
 if (VAR_8)
  return VAR_8;

 while (FUNC_0(VAR_3, &VAR_5, &VAR_6) == 0) {
  VAR_8 = FUNC_1(VAR_4, &VAR_6, VAR_7);
  if (VAR_8)
   return VAR_8;

  VAR_5 = VAR_6;
 }
 if (VAR_2 != VAR_0)
  return -1;

 return 0;
}
