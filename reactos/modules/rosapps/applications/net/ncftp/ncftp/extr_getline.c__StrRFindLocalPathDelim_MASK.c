
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static char *
FUNC_1(const char *VAR_0)
{
 const char *VAR_1;
 int VAR_2;

 VAR_1 = ((void*)0);
 for (;;) {
  VAR_2 = *VAR_0++;
  if (VAR_2 == '\0')
   break;
  if (FUNC_0(VAR_2))
   VAR_1 = VAR_0 - 1;
 }

 return ((char *) VAR_1);
}
