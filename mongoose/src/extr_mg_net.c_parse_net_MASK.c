
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,int*,int*,int*,int*,int*,...) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, uint32_t *VAR_1, uint32_t *VAR_2) {
  int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 = 32, VAR_9 = 0;

  if ((FUNC_1(VAR_0, "%d.%d.%d.%d/%d%n", &VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_3) == 5 ||
       FUNC_1(VAR_0, "%d.%d.%d.%d%n", &VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_3) == 4) &&
      FUNC_0(VAR_4) && FUNC_0(VAR_5) && FUNC_0(VAR_6) && FUNC_0(VAR_7) && VAR_8 >= 0 &&
      VAR_8 < 33) {
    VAR_9 = VAR_3;
    *VAR_1 =
        ((uint32_t) VAR_4 << 24) | ((uint32_t) VAR_5 << 16) | ((uint32_t) VAR_6 << 8) | VAR_7;
    *VAR_2 = VAR_8 ? 0xffffffffU << (32 - VAR_8) : 0;
  }

  return VAR_9;
}
