
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,size_t,char*,char*) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, char *VAR_1, size_t VAR_2) {
  size_t VAR_3 = 0;
  while (*VAR_0 != '\0' && VAR_3 + 5 < VAR_2) {
    unsigned char VAR_4 = *(unsigned char *) VAR_0++;
    if (VAR_4 == '<') {
      VAR_3 += FUNC_0(VAR_1 + VAR_3, VAR_2 - VAR_3, "%s", "&lt;");
    } else {
      VAR_1[VAR_3++] = VAR_4;
    }
  }
  VAR_1[VAR_3] = '\0';
}
