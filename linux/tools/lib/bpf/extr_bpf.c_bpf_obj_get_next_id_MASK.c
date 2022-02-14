
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int next_id; int start_id; } ;
typedef int attr ;
typedef int __u32 ;


 int FUNC_0 (union bpf_attr*,int ,int) ;
 int FUNC_1 (int,union bpf_attr*,int) ;

__attribute__((used)) static int FUNC_2(__u32 VAR_0, __u32 *VAR_1, int VAR_2)
{
 union bpf_attr VAR_3;
 int VAR_4;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.start_id = VAR_0;

 VAR_4 = FUNC_1(VAR_2, &VAR_3, sizeof(VAR_3));
 if (!VAR_4)
  *VAR_1 = VAR_3.next_id;

 return VAR_4;
}
