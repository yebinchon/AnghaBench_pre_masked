
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;






 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char const*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(int VAR_3) {
 if (VAR_3 != 132) {
  return -1;
 }
 VAR_3 = FUNC_1();
 if ((VAR_3 == VAR_0) && (!FUNC_2((const char*)VAR_2, VAR_1 - VAR_2))) {
  VAR_3 = FUNC_0(VAR_3);
  if (VAR_3 == -1) {
   return -1;
  }
 } else {
  switch (VAR_3) {
   case 130:
    VAR_3 = FUNC_1();
    break;
   case 129:
    VAR_3 = FUNC_1();
    break;
   case 128:
    VAR_3 = FUNC_1();
    break;
   case 131:
    VAR_3 = FUNC_1();
    break;
   case 132:
    VAR_3 = FUNC_1();
    break;
   case 133:
    VAR_3 = FUNC_1();
    break;
   default:
    return -1;
  }
 }
 return VAR_3;
}
