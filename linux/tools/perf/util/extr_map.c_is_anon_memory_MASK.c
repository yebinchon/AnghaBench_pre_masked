
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static inline int FUNC_2(const char *VAR_1, u32 VAR_2)
{
 return VAR_2 & VAR_0 ||
        !FUNC_0(VAR_1, "//anon") ||
        !FUNC_1(VAR_1, "/dev/zero", sizeof("/dev/zero") - 1) ||
        !FUNC_1(VAR_1, "/anon_hugepage", sizeof("/anon_hugepage") - 1);
}
