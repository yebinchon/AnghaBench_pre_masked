
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static inline int FUNC_3(void)
{
 if (FUNC_2("dd if=/dev/zero of=/dev/null count=5000k status=none") < 0) {
  FUNC_0("failed to generate some load with dd: %s\n", FUNC_1(VAR_0));
  return -1;
 }

 return 0;
}
