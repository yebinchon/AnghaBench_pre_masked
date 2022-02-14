
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf {int dummy; } ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (struct btf const*,int ) ;

__attribute__((used)) static const char *FUNC_1(const struct btf *VAR_0, __u32 VAR_1)
{
 if (!VAR_1)
  return "(anon)";
 return FUNC_0(VAR_0, VAR_1) ? : "(invalid)";
}
