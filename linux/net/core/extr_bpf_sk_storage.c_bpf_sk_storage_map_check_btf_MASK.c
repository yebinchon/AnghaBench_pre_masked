
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct btf_type {int info; } ;
struct btf {int dummy; } ;
struct bpf_map {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(const struct bpf_map *VAR_2,
     const struct btf *VAR_3,
     const struct btf_type *VAR_4,
     const struct btf_type *VAR_5)
{
 u32 VAR_6;

 if (FUNC_0(VAR_4->info) != VAR_0)
  return -VAR_1;

 VAR_6 = *(u32 *)(VAR_4 + 1);
 if (FUNC_1(VAR_6) != 32 || FUNC_2(VAR_6))
  return -VAR_1;

 return 0;
}
