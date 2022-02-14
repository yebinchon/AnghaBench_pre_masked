
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_dump {int dummy; } ;


 int FUNC_0 (struct btf_dump const*,char*,char*,char const*) ;

__attribute__((used)) static void FUNC_1(const struct btf_dump *VAR_0,
          const char *VAR_1, bool VAR_2)
{
 bool VAR_3 = VAR_1[0] && !VAR_2;

 FUNC_0(VAR_0, "%s%s", VAR_3 ? " " : "", VAR_1);
}
