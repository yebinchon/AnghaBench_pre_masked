
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int attach_type; int target_fd; } ;
typedef int u32 ;
struct fd {int dummy; } ;
struct bpf_prog {int dummy; } ;
struct bpf_map {int dummy; } ;


 scalar_t__ FUNC_0 (struct bpf_map*) ;
 int FUNC_1 (struct bpf_map*) ;
 struct bpf_map* FUNC_2 (struct fd) ;
 struct fd FUNC_3 (int ) ;
 int FUNC_4 (struct fd) ;
 int FUNC_5 (struct bpf_map*,struct bpf_prog*,int ) ;

int FUNC_6(const union bpf_attr *VAR_0, struct bpf_prog *VAR_1)
{
 u32 VAR_2 = VAR_0->target_fd;
 struct bpf_map *VAR_3;
 struct fd VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_2);
 VAR_3 = FUNC_2(VAR_4);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);
 VAR_5 = FUNC_5(VAR_3, VAR_1, VAR_0->attach_type);
 FUNC_4(VAR_4);
 return VAR_5;
}
