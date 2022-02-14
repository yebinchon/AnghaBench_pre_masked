
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exception_table_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct exception_table_entry const*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct exception_table_entry *VAR_2 = VAR_0, *VAR_3 = VAR_1;


 if (FUNC_0(VAR_2) > FUNC_0(VAR_3))
  return 1;
 if (FUNC_0(VAR_2) < FUNC_0(VAR_3))
  return -1;
 return 0;
}
