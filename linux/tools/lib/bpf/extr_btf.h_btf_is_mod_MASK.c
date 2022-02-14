
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
typedef scalar_t__ __u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct btf_type const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct btf_type *VAR_3)
{
 __u16 VAR_4 = FUNC_0(VAR_3);

 return VAR_4 == VAR_2 ||
        VAR_4 == VAR_0 ||
        VAR_4 == VAR_1;
}
