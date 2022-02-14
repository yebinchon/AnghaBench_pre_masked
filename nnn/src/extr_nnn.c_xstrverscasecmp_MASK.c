
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef char uchar ;
typedef int int8_t ;






 char FUNC_0 (char const) ;


 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static int FUNC_2(const char * const VAR_0, const char * const VAR_1)
{
 const uchar *VAR_2 = (const uchar *)VAR_0;
 const uchar *VAR_3 = (const uchar *)VAR_1;
 int VAR_4, VAR_5;
 uchar VAR_6, VAR_7;





 static const uint8_t VAR_8[] = {

             131, 132, 130,
             131, 132, 132,
             131, 133, 133,
             131, 133, 130
 };

 static const int8_t VAR_9[] __attribute__ ((aligned)) = {


             129, 129, 129, 129, 128, 129, 129, 129, 129,
             129, -1, -1, 1, 128, 128, 1, 128, 128,
             129, 129, 129, 129, 129, 129, 129, 129, 129,
             129, 1, 1, -1, 129, 129, -1, 129, 129
 };

 if (VAR_2 == VAR_3)
  return 0;

 VAR_6 = FUNC_0(*VAR_2);
 ++VAR_2;
 VAR_7 = FUNC_0(*VAR_3);
 ++VAR_3;


 VAR_4 = 131 + ((VAR_6 == '0') + (FUNC_1(VAR_6) != 0));

 while ((VAR_5 = VAR_6 - VAR_7) == 0) {
  if (VAR_6 == '\0')
   return VAR_5;

  VAR_4 = VAR_8[VAR_4];
  VAR_6 = FUNC_0(*VAR_2);
  ++VAR_2;
  VAR_7 = FUNC_0(*VAR_3);
  ++VAR_3;
  VAR_4 += (VAR_6 == '0') + (FUNC_1(VAR_6) != 0);
 }

 VAR_4 = VAR_9[VAR_4 * 3 + (((VAR_7 == '0') + (FUNC_1(VAR_7) != 0)))];

 switch (VAR_4) {
 case 129:
  return VAR_5;
 case 128:
  while (FUNC_1(*VAR_2++))
   if (!FUNC_1(*VAR_3++))
    return 1;
  return FUNC_1(*VAR_3) ? -1 : VAR_5;
 default:
  return VAR_4;
 }
}
