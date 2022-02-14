
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;


 char* FUNC_0 (char const*,int * const) ;

__attribute__((used)) static const char *
FUNC_1(const char *VAR_0, int32 *const VAR_1)
{
 bool VAR_2 = 0;

 if (*VAR_0 == '-')
 {
  VAR_2 = 1;
  ++VAR_0;
 }
 else if (*VAR_0 == '+')
  ++VAR_0;
 VAR_0 = FUNC_0(VAR_0, VAR_1);
 if (VAR_0 == ((void*)0))
  return ((void*)0);
 if (VAR_2)
  *VAR_1 = -*VAR_1;
 return VAR_0;
}
