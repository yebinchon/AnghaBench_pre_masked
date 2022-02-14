
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_ext {int line_info; } ;
struct btf {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (struct btf const*,int *,char const*,int ,void**,int *) ;

int FUNC_1(const struct btf *VAR_0,
        const struct btf_ext *VAR_1,
        const char *VAR_2, __u32 VAR_3,
        void **VAR_4, __u32 *VAR_5)
{
 return FUNC_0(VAR_0, &VAR_1->line_info, VAR_2,
      VAR_3, VAR_4, VAR_5);
}
