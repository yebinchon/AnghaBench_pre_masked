
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11 (int VAR_0, int VAR_1) {
  int VAR_2;
  switch (FUNC_10(VAR_1)) {
    case 'a' : VAR_2 = FUNC_1(VAR_0); break;
    case 'c' : VAR_2 = FUNC_2(VAR_0); break;
    case 'd' : VAR_2 = FUNC_3(VAR_0); break;
    case 'g' : VAR_2 = FUNC_4(VAR_0); break;
    case 'l' : VAR_2 = FUNC_5(VAR_0); break;
    case 'p' : VAR_2 = FUNC_6(VAR_0); break;
    case 's' : VAR_2 = FUNC_7(VAR_0); break;
    case 'u' : VAR_2 = FUNC_8(VAR_0); break;
    case 'w' : VAR_2 = FUNC_0(VAR_0); break;
    case 'x' : VAR_2 = FUNC_9(VAR_0); break;
    case 'z' : VAR_2 = (VAR_0 == 0); break;
    default: return (VAR_1 == VAR_0);
  }
  return (FUNC_5(VAR_1) ? VAR_2 : !VAR_2);
}
