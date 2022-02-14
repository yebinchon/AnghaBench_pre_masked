
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8 ;


 int VAR_0 ;
 char* FUNC_0 (char const*,char const*,char const*,int ) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(const uint8 *VAR_1, const uint8 *VAR_2,
   const uint8 **VAR_3, int VAR_4)
{
 const uint8 *VAR_5 = VAR_1;
 static const char *VAR_6 = "-----BEGIN";
 static const char *VAR_7 = "-----END";
 const char *VAR_8 = VAR_4 ? VAR_7 : VAR_6;


 while (1)
 {
  VAR_5 = FUNC_0(VAR_5, VAR_2, VAR_8, FUNC_2(VAR_8));
  if (VAR_5 == ((void*)0))
   return VAR_0;

  if (VAR_5 == VAR_1 || *(VAR_5 - 1) == '\n')
   break;
  VAR_5 += FUNC_2(VAR_8);
 }
 *VAR_3 = VAR_5;
 VAR_5 += FUNC_2(VAR_8);


 for (; VAR_5 < VAR_2 && *VAR_5 != '-'; VAR_5++)
 {

  if (*VAR_5 >= ' ')
   continue;
  return VAR_0;
 }
 if (VAR_2 - VAR_5 < 5 || FUNC_1(VAR_5, VAR_8, 5) != 0)
  return VAR_0;
 VAR_5 += 5;


 if (VAR_5 < VAR_2)
 {
  if (*VAR_5 != '\n' && *VAR_5 != '\r')
   return VAR_0;
  if (*VAR_5 == '\r')
   VAR_5++;
  if (VAR_5 < VAR_2 && *VAR_5 == '\n')
   VAR_5++;
 }
 return VAR_5 - *VAR_3;
}
