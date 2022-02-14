
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(unsigned long VAR_0) {
 char *VAR_1;
 switch (VAR_0) {

 case 132:
  VAR_1 = "access violation";
  break;
 case 131:
  VAR_1 = "array bounds exceeded";
  break;
 case 130:
  VAR_1 = "illegal instruction";
  break;
 case 129:
  VAR_1 = "divide by zero";
  break;
 case 128:
  VAR_1 = "stack overflow";
  break;
 default:
  VAR_1 = "unknown";
 }

 return VAR_1;
}
