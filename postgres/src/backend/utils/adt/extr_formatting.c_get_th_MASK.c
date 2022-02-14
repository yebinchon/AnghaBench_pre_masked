
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (unsigned char) ;
 char const** VAR_3 ;
 char const** VAR_4 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static const char *
FUNC_5(char *VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_4(VAR_5),
    VAR_8,
    VAR_9;

 VAR_8 = *(VAR_5 + (VAR_7 - 1));
 if (!FUNC_3((unsigned char) VAR_8))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("\"%s\" is not a number", VAR_5)));





 if ((VAR_7 > 1) && ((VAR_9 = VAR_5[VAR_7 - 2]) == '1'))
  VAR_8 = 0;

 switch (VAR_8)
 {
  case '1':
   if (VAR_6 == VAR_2)
    return VAR_3[0];
   return VAR_4[0];
  case '2':
   if (VAR_6 == VAR_2)
    return VAR_3[1];
   return VAR_4[1];
  case '3':
   if (VAR_6 == VAR_2)
    return VAR_3[2];
   return VAR_4[2];
  default:
   if (VAR_6 == VAR_2)
    return VAR_3[3];
   return VAR_4[3];
 }
}
