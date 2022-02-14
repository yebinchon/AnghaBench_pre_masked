
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned long*,unsigned long*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3, VAR_4;

 if (FUNC_1(VAR_1, &VAR_3, &VAR_4)) {
  FUNC_3(FUNC_0("Not Available\n"));
  return -VAR_0;
 }

 if (VAR_2) {
  FUNC_3(FUNC_0("  hardware limits: "));
  FUNC_2(VAR_3);
  FUNC_3(" - ");
  FUNC_2(VAR_4);
  FUNC_3("\n");
 } else {
  FUNC_3("%lu %lu\n", VAR_3, VAR_4);
 }
 return 0;
}
