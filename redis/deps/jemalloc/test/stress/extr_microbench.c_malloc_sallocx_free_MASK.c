
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(void) {
 void *VAR_0;

 VAR_0 = FUNC_1(1);
 if (VAR_0 == ((void*)0)) {
  FUNC_3("Unexpected malloc() failure");
  return;
 }
 if (FUNC_2(VAR_0, 0) < 1) {
  FUNC_3("Unexpected sallocx() failure");
 }
 FUNC_0(VAR_0);
}
