
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const* VAR_1 ;
 int FUNC_0 (char const**,char const**,int,char const**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char const* VAR_10 ;

__attribute__((used)) static int FUNC_1(const char **VAR_11) {
 int VAR_12;
 const char *VAR_13[] = {
  "ixh", "ixl", "iyh", "iyl", "bc", "de", "hl", "sp", "ix",
  "iy", "b", "c", "d", "e", "h", "l", "( hl )", "a", "i",
  "r", "( bc )", "( de )", "( ix +)", "(iy +)", "(*)", ((void*)0)
 };
 const char *VAR_14;
 VAR_12 = FUNC_0 (VAR_11, VAR_13, 1, &VAR_14);
 if (!VAR_12) {
  return 0;
 }
 if (VAR_12 <= 2) {
  VAR_0 = 0xdd;
  return 11 + (VAR_12 == 2);
 }
 if (VAR_12 <= 4) {
  VAR_0 = 0xfd;
  return 11 + (VAR_12 == 4);
 }
 VAR_12 -= 4;
 if (VAR_12 == 5 || VAR_12 == 6) {
  VAR_0 = VAR_12 == 5? 0xDD: 0xFD;
  return 3;
 }
 if (VAR_12 == 19 || VAR_12 == 20) {
  VAR_1 = VAR_14;
  VAR_0 = VAR_12 == 19? 0xDD: 0xFD;
  return 13;
 }
 if (VAR_12 == 21) {
  VAR_10 = VAR_14;
 }
 return VAR_12;
}
