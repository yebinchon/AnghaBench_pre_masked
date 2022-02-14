
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char* const,char*,int) ;

__attribute__((used)) static inline int
FUNC_1(char *const VAR_0, const bool VAR_1, const bool VAR_2, const bool VAR_3)
{
 if (VAR_3)
 {
  FUNC_0(VAR_0, "NaN", 3);
  return 3;
 }
 if (VAR_1)
 {
  VAR_0[0] = '-';
 }
 if (VAR_2)
 {
  FUNC_0(VAR_0 + VAR_1, "Infinity", 8);
  return VAR_1 + 8;
 }
 VAR_0[VAR_1] = '0';
 return VAR_1 + 1;
}
