
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef long loff_t ;



__attribute__((used)) static bool FUNC_0(loff_t VAR_0, size_t VAR_1)
{
 if (VAR_0 < 0 || (long) VAR_0 != VAR_0 || (ssize_t) VAR_1 < 0)
  return 0;
 if ((unsigned long) VAR_0 + (unsigned long) VAR_1 < (unsigned long) VAR_0)
  return 0;
 return 1;
}
