
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char
FUNC_4(const char *VAR_4)
{
 char VAR_5 = 0;

 if (VAR_4[0] == '\0' ||
  VAR_4[1] == '\0' ||
  VAR_4[2] != '\0')
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("invalid range bound flags"),
     FUNC_2("Valid values are \"[]\", \"[)\", \"(]\", and \"()\".")));

 switch (VAR_4[0])
 {
  case '[':
   VAR_5 |= VAR_2;
   break;
  case '(':
   break;
  default:
   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_3("invalid range bound flags"),
      FUNC_2("Valid values are \"[]\", \"[)\", \"(]\", and \"()\".")));
 }

 switch (VAR_4[1])
 {
  case ']':
   VAR_5 |= VAR_3;
   break;
  case ')':
   break;
  default:
   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_3("invalid range bound flags"),
      FUNC_2("Valid values are \"[]\", \"[)\", \"(]\", and \"()\".")));
 }

 return VAR_5;
}
