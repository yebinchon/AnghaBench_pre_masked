
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int type; } ;
struct btf {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct btf_type* FUNC_0 (struct btf const*,int) ;
 scalar_t__ FUNC_1 (struct btf_type const*) ;
 scalar_t__ FUNC_2 (struct btf_type const*) ;
 scalar_t__ FUNC_3 (struct btf_type const*) ;
 scalar_t__ FUNC_4 (struct btf_type const*) ;

int FUNC_5(const struct btf *VAR_2, __u32 VAR_3)
{
 const struct btf_type *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 while (VAR_5 < VAR_1 &&
        !FUNC_4(VAR_4) &&
        (FUNC_1(VAR_4) || FUNC_2(VAR_4) || FUNC_3(VAR_4))) {
  VAR_3 = VAR_4->type;
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  VAR_5++;
 }

 if (VAR_5 == VAR_1 || FUNC_4(VAR_4))
  return -VAR_0;

 return VAR_3;
}
