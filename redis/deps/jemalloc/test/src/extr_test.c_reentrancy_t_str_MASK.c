
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int reentrancy_t ;





 int FUNC_0 () ;

__attribute__((used)) static const char *
FUNC_1(reentrancy_t VAR_0) {
 switch (VAR_0) {
 case 128:
  return "non-reentrant";
 case 129:
  return "libc-reentrant";
 case 130:
  return "arena_new-reentrant";
 default:
  FUNC_0();
 }
}
