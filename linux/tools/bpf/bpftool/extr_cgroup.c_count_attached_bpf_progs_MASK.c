
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;
typedef int __u32 ;


 int FUNC_0 (int,int,int ,int *,int *,int*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1, enum bpf_attach_type VAR_2)
{
 __u32 VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_0, ((void*)0),
        ((void*)0), &VAR_3);
 if (VAR_4)
  return -1;

 return VAR_3;
}
