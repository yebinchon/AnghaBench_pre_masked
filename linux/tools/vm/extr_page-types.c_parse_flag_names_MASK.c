
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (char const*,int) ;

__attribute__((used)) static uint64_t FUNC_1(const char *VAR_0, int VAR_1)
{
 const char *VAR_2 = VAR_0;
 uint64_t VAR_3 = 0;

 while (1) {
  if (*VAR_2 == ',' || *VAR_2 == '=' || *VAR_2 == '\0') {
   if ((*VAR_0 != '~') || (*VAR_0 == '~' && VAR_1 && *++VAR_0))
    VAR_3 |= FUNC_0(VAR_0, VAR_2 - VAR_0);
   if (*VAR_2 != ',')
    break;
   VAR_0 = VAR_2 + 1;
  }
  VAR_2++;
 }

 return VAR_3;
}
