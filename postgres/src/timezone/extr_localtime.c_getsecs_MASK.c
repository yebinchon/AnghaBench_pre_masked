
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (char const*,int*,int ,int) ;

__attribute__((used)) static const char *
FUNC_1(const char *VAR_5, int32 *const VAR_6)
{
 int VAR_7;






 VAR_5 = FUNC_0(VAR_5, &VAR_7, 0, VAR_1 * VAR_0 - 1);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 *VAR_6 = VAR_7 * (int32) VAR_3;
 if (*VAR_5 == ':')
 {
  ++VAR_5;
  VAR_5 = FUNC_0(VAR_5, &VAR_7, 0, VAR_2 - 1);
  if (VAR_5 == ((void*)0))
   return ((void*)0);
  *VAR_6 += VAR_7 * VAR_4;
  if (*VAR_5 == ':')
  {
   ++VAR_5;

   VAR_5 = FUNC_0(VAR_5, &VAR_7, 0, VAR_4);
   if (VAR_5 == ((void*)0))
    return ((void*)0);
   *VAR_6 += VAR_7;
  }
 }
 return VAR_5;
}
