
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static const char *FUNC_2(void) {
  uint32_t VAR_0 = 0x01020304;
  FUNC_0(FUNC_1(((void*)0), VAR_0), 1);
  FUNC_0(FUNC_1("", VAR_0), 1);
  FUNC_0(FUNC_1("invalid", VAR_0), -1);
  FUNC_0(FUNC_1("-0.0.0.0/0", VAR_0), 0);
  FUNC_0(FUNC_1("-0.0.0.0/0,+1.0.0.0/8", VAR_0), 1);
  FUNC_0(FUNC_1("-0.0.0.0/0,+1.2.3.4", VAR_0), 1);
  FUNC_0(FUNC_1("-0.0.0.0/0,+1.0.0.0/16", VAR_0), 0);
  return ((void*)0);
}
