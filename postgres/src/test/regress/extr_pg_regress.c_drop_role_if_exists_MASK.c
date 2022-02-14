
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*,char*,char const*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0)
{
 FUNC_1(FUNC_0("dropping role \"%s\""), VAR_0);
 FUNC_2("postgres", "DROP ROLE IF EXISTS \"%s\"", VAR_0);
}
