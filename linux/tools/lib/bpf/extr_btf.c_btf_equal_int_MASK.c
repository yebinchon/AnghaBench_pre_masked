
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
typedef scalar_t__ __u32 ;


 int FUNC_0 (struct btf_type*,struct btf_type*) ;

__attribute__((used)) static bool FUNC_1(struct btf_type *VAR_0, struct btf_type *VAR_1)
{
 __u32 VAR_2, VAR_3;

 if (!FUNC_0(VAR_0, VAR_1))
  return 0;
 VAR_2 = *(__u32 *)(VAR_0 + 1);
 VAR_3 = *(__u32 *)(VAR_1 + 1);
 return VAR_2 == VAR_3;
}
