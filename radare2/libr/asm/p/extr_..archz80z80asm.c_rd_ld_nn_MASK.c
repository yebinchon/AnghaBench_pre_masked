
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const**,char const**,int,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const char **VAR_2) {


 int VAR_3;
 const char *VAR_4[] = {
  "bc", "de", "", "sp", "hl", "a", "ix", "iy", ((void*)0)
 };
 VAR_3 = FUNC_0 (VAR_2, VAR_4, 1, ((void*)0));
 if (VAR_3 < 7) {
  return VAR_3;
 }
 VAR_0 = 0xdd + 0x20 * (VAR_3 == 8);
 return 5;
}
