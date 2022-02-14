
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gimple ;
typedef scalar_t__ const_tree ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

 scalar_t__ VAR_1 ;


 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_8(gimple VAR_3, const_tree VAR_4, const char *VAR_5)
{
 const char *VAR_6;

 if (VAR_4 == VAR_1)
  return 0;

 switch (FUNC_1(VAR_4)) {
 case 128:
  VAR_6 = FUNC_3(VAR_4);
  break;
 case 130:
  if (FUNC_4(VAR_4) == VAR_0)
   VAR_6 = "char";
  else {
   FUNC_0(FUNC_6(VAR_3), "found non-char INTEGER_TYPE cast comparison: %qT\n", VAR_4);
   FUNC_5(VAR_4);
   return 0;
  }
  break;
 case 129:
  if (FUNC_1(FUNC_2(VAR_4)) == VAR_2) {
   VAR_6 = "void *";
   break;
  } else {
   FUNC_0(FUNC_6(VAR_3), "found non-void POINTER_TYPE cast comparison %qT\n", VAR_4);
   FUNC_5(VAR_4);
   return 0;
  }
 default:
  FUNC_0(FUNC_6(VAR_3), "unhandled cast comparison: %qT\n", VAR_4);
  FUNC_5(VAR_4);
  return 0;
 }

 return FUNC_7(VAR_6, VAR_5) == 0;
}
