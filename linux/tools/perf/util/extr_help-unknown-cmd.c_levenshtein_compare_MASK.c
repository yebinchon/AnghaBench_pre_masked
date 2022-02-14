
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdname {char* name; int len; } ;


 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct cmdname *const *VAR_2 = VAR_0, *const *VAR_3 = VAR_1;
 const char *VAR_4 = (*VAR_2)->name, *VAR_5 = (*VAR_3)->name;
 int VAR_6 = (*VAR_2)->len;
 int VAR_7 = (*VAR_3)->len;
 return VAR_6 != VAR_7 ? VAR_6 - VAR_7 : FUNC_0(VAR_4, VAR_5);
}
