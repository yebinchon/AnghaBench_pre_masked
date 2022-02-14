
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jump_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct jump_entry const*) ;
 scalar_t__ FUNC_1 (struct jump_entry const*) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const struct jump_entry *VAR_2 = VAR_0;
 const struct jump_entry *VAR_3 = VAR_1;




 if (FUNC_1(VAR_2) < FUNC_1(VAR_3))
  return -1;

 if (FUNC_1(VAR_2) > FUNC_1(VAR_3))
  return 1;






 if (FUNC_0(VAR_2) < FUNC_0(VAR_3))
  return -1;

 if (FUNC_0(VAR_2) > FUNC_0(VAR_3))
  return 1;

 return 0;
}
