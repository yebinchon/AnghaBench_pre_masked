
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs {char* name; char const** mounts; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*,size_t,char*,char*) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static const char *FUNC_4(struct fs *VAR_0)
{
 size_t VAR_1 = FUNC_3(VAR_0->name);

 char VAR_2[5 + VAR_1 + 12 + 1];

 FUNC_2(VAR_2, VAR_1, "PERF_%s_ENVIRONMENT", VAR_0->name);
 FUNC_1(VAR_2, VAR_1);

 return FUNC_0(VAR_2) ?: *VAR_0->mounts;
}
