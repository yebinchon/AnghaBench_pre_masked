
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0) {
 if (VAR_0[0]=='r' && VAR_0[2]=='\0') {
  int VAR_1 = VAR_0[1]-'0';
  if (VAR_1<8) return VAR_1;
 }
 return -1;
}
