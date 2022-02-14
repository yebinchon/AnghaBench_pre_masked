
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,char const*) ;
 int * FUNC_1 (int,char const*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1, int VAR_2, const char *VAR_3)
{
 if (FUNC_1(VAR_2, VAR_3) == ((void*)0) &&
  FUNC_1(VAR_2, "C") == ((void*)0))
  FUNC_0(VAR_0, "could not adopt \"%s\" locale nor C locale for %s",
    VAR_3, VAR_1);
}
