
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_var_secinfo {int offset; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct btf_var_secinfo *VAR_2 = VAR_0;
 const struct btf_var_secinfo *VAR_3 = VAR_1;

 return VAR_2->offset - VAR_3->offset;
}
