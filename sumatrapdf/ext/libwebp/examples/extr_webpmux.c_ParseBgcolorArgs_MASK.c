
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char const*,char*,int*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_1(const char* VAR_0, uint32_t* const VAR_1) {
  uint32_t VAR_2, VAR_3, VAR_4, VAR_5;
  if (FUNC_0(VAR_0, "%u,%u,%u,%u", &VAR_2, &VAR_3, &VAR_4, &VAR_5) != 4) return 0;
  if (VAR_2 >= 256 || VAR_3 >= 256 || VAR_4 >= 256 || VAR_5 >= 256) return 0;
  *VAR_1 = (VAR_2 << 24) | (VAR_3 << 16) | (VAR_4 << 8) | (VAR_5 << 0);
  return 1;
}
