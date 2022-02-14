
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int test_status_t ;


 int FUNC_0 () ;




__attribute__((used)) static const char *
FUNC_1(test_status_t VAR_0) {
 switch (VAR_0) {
 case 129: return "pass";
 case 128: return "skip";
 case 130: return "fail";
 default: FUNC_0();
 }
}
