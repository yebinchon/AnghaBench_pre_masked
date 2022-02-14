
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long u64 ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,long long*) ;

int FUNC_2(u64 *VAR_0, const char *VAR_1, const char *VAR_2)
{
 long long VAR_3 = 0;

 if (!FUNC_1(VAR_2, &VAR_3)) {
  FUNC_0(VAR_1);
  return -1;
 }

 *VAR_0 = VAR_3;
 return 0;
}
