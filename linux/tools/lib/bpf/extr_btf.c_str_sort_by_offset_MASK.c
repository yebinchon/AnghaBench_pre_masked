
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_str_ptr {scalar_t__ str; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct btf_str_ptr *VAR_2 = VAR_0;
 const struct btf_str_ptr *VAR_3 = VAR_1;

 if (VAR_2->str != VAR_3->str)
  return VAR_2->str < VAR_3->str ? -1 : 1;
 return 0;
}
