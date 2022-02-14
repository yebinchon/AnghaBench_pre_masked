
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0){
  FUNC_1("Usage: %s ARGS...\n", VAR_0);
  FUNC_1("Arguments:\n"
    "  NUM    Convert NUM from integer to LogEst and push onto the stack\n"
    " ^NUM    Interpret NUM as a LogEst and push onto stack\n"
    "  x      Multiple the top two elements of the stack\n"
    "  +      Add the top two elements of the stack\n"
    "  dup    Dupliate the top element on the stack\n"
    "  inv    Take the reciprocal of the top of stack.  N = 1/N.\n"
    "  log    Find the LogEst of the number on top of stack\n"
    "  nlogn  Compute NlogN where N is the top of stack\n"
  );
  FUNC_0(1);
}
