
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(const char *VAR_0)
{
 const char *VAR_1;

 for (VAR_1 = VAR_0;
      (*VAR_1 >= 'a' && *VAR_1 <= 'z') ||
      (*VAR_1 >= 'A' && *VAR_1 <= 'Z') ||
      (*VAR_1 >= '0' && *VAR_1 <= '9') ||
      *VAR_1 == '+' || *VAR_1 == '-' || *VAR_1 == '.';
      VAR_1++);
 return ((VAR_1 != VAR_0) && (VAR_1[0] == ':') && (VAR_1[1] == '/') && (VAR_1[2] == '/'));
}
