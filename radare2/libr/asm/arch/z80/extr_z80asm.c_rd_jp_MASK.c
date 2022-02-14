
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const**,char const**,int ,int *) ;

__attribute__((used)) static int FUNC_1(const char **VAR_1) {
 int VAR_2;
 const char *VAR_3[] = {
  "nz", "z", "nc", "c", "po", "pe", "p", "m", "( ix )", "( iy )",
  "(hl)", ((void*)0)
 };
 VAR_2 = FUNC_0 (VAR_1, VAR_3, 0, ((void*)0));
 if (VAR_2 < 9) {
  return VAR_2;
 }
 if (VAR_2 == 11) {
  return -1;
 }
 VAR_0 = 0xDD + 0x20 * (VAR_2 - 9);
 return -1;
}
