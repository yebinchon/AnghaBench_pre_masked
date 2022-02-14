
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int type; } ;
struct btf {int dummy; } ;
typedef int __u32 ;


 struct btf_type* FUNC_0 (struct btf const*,int ) ;
 scalar_t__ FUNC_1 (struct btf_type const*) ;
 scalar_t__ FUNC_2 (struct btf_type const*) ;

__attribute__((used)) static const struct btf_type *
FUNC_3(const struct btf *VAR_0, __u32 VAR_1, __u32 *VAR_2)
{
 const struct btf_type *VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2)
  *VAR_2 = VAR_1;

 while (FUNC_1(VAR_3) || FUNC_2(VAR_3)) {
  if (VAR_2)
   *VAR_2 = VAR_3->type;
  VAR_3 = FUNC_0(VAR_0, VAR_3->type);
 }

 return VAR_3;
}
