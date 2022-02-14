
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int *,int) ;
 int FUNC_2 (int ,char*,char const*) ;

uint32_t FUNC_3(const char *VAR_1) {
 if (VAR_1[0] == '#') {
  ++VAR_1;
 }

 int VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 != 6 && VAR_2 != 8) {
  FUNC_2(VAR_0, "Invalid color %s, defaulting to color 0xFFFFFFFF", VAR_1);
  return 0xFFFFFFFF;
 }
 uint32_t VAR_3 = (uint32_t)FUNC_1(VAR_1, ((void*)0), 16);
 if (FUNC_0(VAR_1) == 6) {
  VAR_3 = (VAR_3 << 8) | 0xFF;
 }
 return VAR_3;
}
