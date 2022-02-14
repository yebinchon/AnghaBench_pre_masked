
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,unsigned long) ;

__attribute__((used)) static bool
FUNC_4(unsigned long VAR_1, char *VAR_2, const char *VAR_3)
{
 size_t VAR_4;

 if (FUNC_3(VAR_3, VAR_1))
  return 0;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 + 1 >= VAR_0) {
  FUNC_0("tracefs mount point name too long");
  return 0;
 }

 FUNC_1(VAR_2, VAR_3);
 return 1;
}
