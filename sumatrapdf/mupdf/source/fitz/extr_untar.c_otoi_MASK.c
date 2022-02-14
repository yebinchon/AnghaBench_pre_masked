
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static inline int64_t FUNC_1(const char *VAR_0)
{
 int64_t VAR_1 = 0;

 while (*VAR_0 && FUNC_0(*VAR_0))
 {
  VAR_1 *= 8;
  VAR_1 += (*VAR_0) - '0';
  VAR_0++;
 }

 return VAR_1;
}
