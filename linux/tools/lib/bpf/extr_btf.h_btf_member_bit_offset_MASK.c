
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
struct btf_member {int offset; } ;
typedef int __u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct btf_type const*) ;
 struct btf_member* FUNC_2 (struct btf_type const*) ;

__attribute__((used)) static inline __u32 FUNC_3(const struct btf_type *VAR_0,
       __u32 VAR_1)
{
 const struct btf_member *VAR_2 = FUNC_2(VAR_0) + VAR_1;
 bool VAR_3 = FUNC_1(VAR_0);

 return VAR_3 ? FUNC_0(VAR_2->offset) : VAR_2->offset;
}
