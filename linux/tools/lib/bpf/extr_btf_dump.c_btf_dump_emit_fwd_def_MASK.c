
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
struct btf_dump {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (struct btf_dump*,char*,char const*) ;
 char* FUNC_1 (struct btf_dump*,int ) ;
 scalar_t__ FUNC_2 (struct btf_type const*) ;

__attribute__((used)) static void FUNC_3(struct btf_dump *VAR_0, __u32 VAR_1,
      const struct btf_type *VAR_2)
{
 const char *VAR_3 = FUNC_1(VAR_0, VAR_1);

 if (FUNC_2(VAR_2))
  FUNC_0(VAR_0, "union %s", VAR_3);
 else
  FUNC_0(VAR_0, "struct %s", VAR_3);
}
