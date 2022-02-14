
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const**,char const**,int ,char const**) ;
 char const* VAR_1 ;

__attribute__((used)) static int FUNC_1(const char **VAR_2) {


 int VAR_3;
 const char *VAR_4[] = {
  "hl", "ix", "iy", "(*)", "*", ((void*)0)
 };
 const char *VAR_5;
 VAR_3 = FUNC_0 (VAR_2, VAR_4, 0, &VAR_5);
 if (VAR_3 > 3) {
  VAR_1 = VAR_5;
  return VAR_3 == 4? 2: 0;
 }
 if (VAR_3 != 1) {
  VAR_0 = 0xDD + 0x20 * (VAR_3 - 2);
 }
 return 1;
}
