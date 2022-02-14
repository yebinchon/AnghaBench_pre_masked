
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (void const*) ;
 unsigned long VAR_0 ;

__attribute__((used)) static const char *FUNC_1(const void *VAR_1)
{
 if (!VAR_1)
  return "(null)";

 if ((unsigned long)VAR_1 < VAR_0 || FUNC_0(VAR_1))
  return "(efault)";

 return ((void*)0);
}
